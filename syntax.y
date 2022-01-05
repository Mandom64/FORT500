/*
    Γεωργιάδης Χρήστος 
    2116088
*/
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "hashtable\hashtbl.h"
    /*
        κάνουμε extern το *yyin, yylex() και yyerror 
        που είναι γραμμένα είτε απο εμάς είτε από το flex αλλού
    */
    extern FILE *yyin;
    extern int yylex();
    extern void yyerror(const char* error);
    
    HASHTBL *hashtbl;
    int scope = 0;
%}
/* το error-verbose είναι option του bison και μας δίνει πιο λεπτομερή error reporting που θέλει η εργασία */
%error-verbose 
 
%union{
    int int_val;
    float real_val;
    char* char_val;
    char* string_val;
    _Bool bool_val;
}

%token T_FUNCTION         "function"
%token T_SUBROUTINE       "subroutine"
%token T_END              "end"
%token T_INTEGER          "integer"
%token T_REAL             "real"
%token T_LOGICAL          "logical"
%token T_CHARACTER        "character"
%token T_RECORD           "record"
%token T_ENDREC           "endrec"
%token T_DATA             "data" 
%token T_CONTINUE         "continue" 
%token T_GOTO             "goto" 
%token T_CALL             "call" 
%token T_READ             "read" 
%token T_WRITE            "write" 
%token T_IF               "if" 
%token T_THEN             "then" 
%token T_ELSE             "else" 
%token T_ENDIF            "endif" 
%token T_DO               "do" 
%token T_ENDDO            "enddo" 
%token T_STOP             "stop" 
%token T_RETURN           "return" 


%token T_OROP             ".OR." 
%token T_ANDOP            ".AND." 
%token T_NOTOP            ".NOT" 
%token T_RELOP            ".GT. | .GE. | .LT. | .LE. | .EQ. | .NE." 
%token T_ADDOP            "+|-"
%token T_MULOP            "*"   
%token T_DIVOP            "/"   
%token T_POWEROP          "**"   


%token T_LPAREN           "(" 
%token T_RPAREN           ")" 
%token T_COMMA            "," 
%token T_ASSIGN           "=" 
%token T_COLON            ":" 


%token <string_val>T_ID   "id" 


%token <int_val>T_ICONST   "iconst" 
%token <real_val>T_RCONST  "rconst" 
%token <char_val>T_CCONST  "cconst" 
%token <bool_val>T_LCONST  "lconst"

%token <string_val>T_STRING "string"

%token T_EOF       0       "EOF"

%type <string_val>  program body declarations type undef_variable dims dim fields field vals
%type <string_val>  value_list values value repeat constant statements labeled_statement label 
%type <string_val>  statement simple_statement assignment variable expressions expression goto_statement 
%type <string_val>  labels if_statement subroutine_call io_statement read_list read_item iter_space step
%type <string_val>  write_list write_item compound_statement branch_statement tail loop_statement 
%type <string_val>  subprograms header formal_parameters

%left T_NOTOP
%left T_POWEROP
%left T_MULOP T_DIVOP
%left T_ADDOP
%left T_RELOP
%left T_ANDOP
%left T_OROP
%right T_ASSIGN

%%

program:            body T_END subprograms
;
body:               declarations statements
;
declarations:       declarations type vars
                    | declarations T_RECORD fields T_ENDREC vars
                    | declarations T_DATA vals
                    | %empty         { }
;
type:               T_INTEGER | T_REAL | T_LOGICAL | T_CHARACTER

vars:               vars T_COMMA undef_variable
                    |vars T_COMMA error 
                    | undef_variable
;
undef_variable:     T_ID T_LPAREN{scope++;} dims T_RPAREN{scope--;}                                 { hashtbl_insert(hashtbl, $1, NULL, scope); }
                    | T_ID                                                                          { hashtbl_insert(hashtbl, $1, NULL, scope); }
;
dims:               dims T_COMMA dim
                    | dim
;
dim:                T_ICONST | T_ID                                                                 { hashtbl_insert(hashtbl, $1, NULL, scope); }
;
fields:             fields field
                    | field
;
field:              type vars
                    | T_RECORD fields T_ENDREC vars
;
vals:               vals T_COMMA T_ID value_list                                                    { hashtbl_insert(hashtbl, $3, NULL, scope); }
                    | T_ID value_list                                                               { hashtbl_insert(hashtbl, $1, NULL, scope); }
;
value_list:         T_DIVOP values T_DIVOP
;
values:             values T_COMMA value
                    | value
;
value:              repeat T_MULOP T_ADDOP constant
                    | repeat T_MULOP constant
                    | repeat T_MULOP T_STRING
                    | T_ADDOP constant
                    | constant
                    | T_STRING
;
repeat:             T_ICONST | %empty  { }
;
constant:           T_ICONST | T_RCONST | T_LCONST | T_CCONST
;
statements:         statements labeled_statement
                    | labeled_statement
;
labeled_statement:  label statement
                    | statement
;
label:              T_ICONST
;
statement:          simple_statement
                    | compound_statement
;
simple_statement:   assignment
                    | goto_statement
                    | if_statement
                    | subroutine_call
                    | io_statement
                    | T_CONTINUE
                    | T_RETURN
                    | T_STOP
;
assignment:         variable T_ASSIGN expression
                    | variable T_ASSIGN T_STRING
;
variable:           variable T_COLON T_ID                                                           { hashtbl_insert(hashtbl, $3, NULL, scope); }
                    | variable T_LPAREN{scope++;} expressions T_RPAREN{scope--;}   
                    | T_ID                                                                          { hashtbl_insert(hashtbl, $1, NULL, scope); }
;
expressions:        expressions T_COMMA expression
                    | expression
;
expression:         expression T_OROP expression
                    | expression T_ANDOP expression
                    | expression T_RELOP expression
                    | expression T_ADDOP expression
                    | expression T_MULOP expression
                    | expression T_DIVOP expression
                    | expression T_POWEROP expression
                    | T_NOTOP expression
                    | T_ADDOP expression
                    | variable
                    | constant
                    | T_LPAREN{scope++;} expression T_RPAREN{scope--;}
;
goto_statement:     T_GOTO label
                    | T_GOTO T_ID T_COMMA T_LPAREN{scope++;} labels T_RPAREN{scope--;}              { hashtbl_insert(hashtbl, $2, NULL, scope); }
;
labels:             labels T_COMMA label
                    | label
;
if_statement:       T_IF T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label             { scope++; }
                    | T_IF T_LPAREN expression T_RPAREN simple_statement                            { scope++; scope--; }
                    |error T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label           { scope++; scope--; yyerror("no if found"); yyerrok;}
                    |error T_LPAREN expression T_RPAREN simple_statement                            { scope++; scope--; yyerror("no if found"); yyerrok;}
;
subroutine_call:    T_CALL variable
;
io_statement:       T_READ read_list
                    | T_WRITE write_list
;
read_list:          read_list T_COMMA read_item
                    | read_item
;
read_item:          variable
                    | T_LPAREN read_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN                  { hashtbl_insert(hashtbl, $4, NULL, scope); }
;
iter_space:         expression T_COMMA expression step
;
step:               T_COMMA expression
                    | %empty     { }
;
write_list:         write_list T_COMMA write_item
                    | write_item
;
write_item:         expression
                    | T_LPAREN write_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN                 { hashtbl_insert(hashtbl, $4, NULL, scope); }
                    | T_STRING
;
compound_statement: branch_statement
                    | loop_statement
;
branch_statement:   T_IF T_LPAREN{scope++;} expression T_RPAREN{scope--;} T_THEN body tail
;
tail:               T_ELSE body T_ENDIF
                    | T_ENDIF  
;
loop_statement:     T_DO T_ID T_ASSIGN iter_space body T_ENDDO                                      { hashtbl_insert(hashtbl, $2, NULL, scope); }
;
subprograms:        subprograms subprogram
                    | %empty     { }
;
subprogram:         header body T_END
;
header:             type T_FUNCTION T_ID T_LPAREN{scope++;} formal_parameters T_RPAREN{scope--;}   { hashtbl_insert(hashtbl, $3, NULL, scope); }
                    | T_SUBROUTINE T_ID T_LPAREN{scope++;} formal_parameters T_RPAREN{scope--;}    { hashtbl_insert(hashtbl, $2, NULL, scope); }
                    | T_SUBROUTINE T_ID                                                            { hashtbl_insert(hashtbl, $2, NULL, scope); }
;
formal_parameters:  type vars T_COMMA formal_parameters
                    | type vars
;

%%

int main(int argc, char* argv[]){

    int token;
    if(!(hashtbl = hashtbl_create(10, NULL))){
        puts("Error failed to initialize hashtable");
    }
    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            perror("[ERROR] COULD NOT OPEN FILE ");
            return -1;
        }
    }
   
    yyparse();
    fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;

}
