
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "hashtbl.h" /* <----- */

    extern FILE *yyin;
    extern int yylex();
    extern void yyerror(const char* err);

    HASHTBL *hashtbl; /* Δηλώνουμε το Hashtable */
    int scope = 0; /* Και ορίζουμε το αρχικό scope */
%}
 /* MANUAL -> https://www.gnu.org/software/bison/manual/bison.html */

%error-verbose  /* https://www.gnu.org/software/bison/manual/html_node/Error-Reporting.html */

 /* https://www.gnu.org/software/bison/manual/html_node/Union-Decl.html */
%union {
   int intval;
   float floatval;
   char charval;
   char* strval; 

   _Bool boolval;
}


 /* https://www.gnu.org/software/bison/manual/html_node/Token-Decl.html */
%token T_CHAR               "char"
%token T_INT                "int"
%token T_FLOAT              "float"
%token T_VOID               "void"
%token T_IF                 "if"
%token T_ELSE               "else"
%token T_WHILE              "while"
%token T_RETURN             "return"
%token T_MAIN               "main"

%token <strval> T_ID        "id"

%token <intval> T_ICONST    "integer constant"
%token <doubleval> T_FCONST "float constant"
%token <charval> T_CCONST   "char const"
%token <strval> T_SCONST    "string const"

%token T_OROP               "||"
%token T_ANDOP              "&&"
%token T_EQUOP              "== or !="
%token T_RELOP              "> or >= or < or <="
%token T_ADDOP              "+ or -"
%token T_MULOP              "* or / or %"
%token T_NOTOP              "!"
%token T_INCDEC             "-- or ++"
%token T_SIZEOP             "sizeof"


%token T_LPAREN             "("
%token T_RPAREN             ")"
%token T_SEMI               ";"
%token T_COMMA              ","
%token T_ASSIGN             "="
%token T_LBRACK             "["
%token T_RBRACK             "]"
%token T_REFER              "&"
%token T_LBRACE             "{"
%token T_RBRACE             "}"

%token T_EOF       0        "end of file"

%type <strval>  program global_declarations global_declaration typename standard_type dims dim initializer 
%type <strval>  init_value expression variable general_expression assignment expression_list constant 
%type <strval>  listexpression init_values variabledefs variabledef short_func_declaration short_par_func_header func_header_start parameter_types pass_list_dims nopar_func_header global_var_declaration init_variabledefs init_variabledef func_declaration full_func_declaration full_par_func_header parameter_list pass_variabledef decl_statements declarations statements statement expression_statement if_statement if_tail while_statement optexpr return_statement comp_statement main_function main_header 
   

 /* https://www.gnu.org/software/bison/manual/html_node/Precedence-Decl.html */
 /* https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B#Operator_precedence */
%left T_COMMA
%right T_ASSIGN 
%left T_OROP
%left T_ANDOP
%left T_EQUOP
%left T_RELOP
%left T_ADDOP
%left T_MULOP 
%left T_NOTOP T_REFER T_SIZEOP T_INCDEC UMINUS
%left T_LPAREN T_RPAREN T_LBRACK T_RBRACK T_DOT T_METH


%nonassoc LOWER_THAN_ELSE
%nonassoc T_ELSE  /* Αυτό θέλει και prec https://www.gnu.org/software/bison/manual/html_node/Contextual-Precedence.html */

 /* Εδώ θα μπουν οι πράξεις & το ξεκρέμαστο else σε λίγο... */

                        
%start program /* https://www.gnu.org/software/bison/manual/html_node/Start-Decl.html */
               /* Ο Bison επιλέγει πάντα τον ΠΡΩΤΟ κανόνα για να εκτελέση. Σε περίπτωση που θα θέλαμε να κάνουμε override
                  αυτή την λογική, θα βάζαμε το %start <initial_rule> */
                  
%%

program:                       global_declarations main_function
global_declarations:            global_declarations global_declaration
                              | %empty 
global_declaration:             global_var_declaration
                              | func_declaration
typename:                       standard_type
                              | T_ID                                        { hashtbl_insert(hashtbl, $1, NULL, scope); }
standard_type:                  T_CHAR 
                              | T_INT 
                              | T_FLOAT 
                              | T_VOID
dims:                           dims dim
                              | %empty
dim:                            T_LBRACK T_ICONST T_RBRACK 
                              | T_LBRACK T_RBRACK
initializer:                    T_ASSIGN init_value
                              | %empty
init_value:                     expression
                              | T_LBRACE init_values T_RBRACE
expression:                     expression T_OROP expression
                              | expression T_ANDOP expression
                              | expression T_EQUOP expression
                              | expression T_RELOP expression
                              | expression T_ADDOP expression
                              | expression T_MULOP expression
                              | T_NOTOP expression
                              | T_ADDOP expression
                              | T_SIZEOP expression
                              | T_INCDEC variable
                              | variable T_INCDEC
                              | variable
                              | variable T_LPAREN expression_list T_RPAREN
                              | constant
                              | T_LPAREN general_expression T_RPAREN
                              | T_LPAREN standard_type T_RPAREN
                              | listexpression
variable:                       variable T_LBRACK general_expression T_RBRACK
                              | T_ID                                                        { hashtbl_insert(hashtbl, $1, NULL, scope); }
general_expression:             general_expression T_COMMA general_expression
                              | assignment
assignment:                     variable T_ASSIGN assignment
                              | expression
expression_list:                general_expression
                              | %empty
constant:                       T_CCONST 
                              | T_ICONST 
                              | T_FCONST 
                              | T_SCONST
listexpression:                 T_LBRACK expression_list T_RBRACK
init_values:                    init_values T_COMMA init_value
                              | init_value
variabledefs:                   variabledefs T_COMMA variabledef
                              | variabledef
variabledef:                    T_ID dims                                                   { hashtbl_insert(hashtbl, $1, NULL, scope); }
short_func_declaration:         short_par_func_header T_SEMI
                              | nopar_func_header T_SEMI
short_par_func_header:          func_header_start T_LPAREN parameter_types T_RPAREN
func_header_start:              typename T_ID                                               { hashtbl_insert(hashtbl, $2, NULL, scope); }
parameter_types:                parameter_types T_COMMA typename pass_list_dims
                              | typename pass_list_dims
pass_list_dims:                 T_REFER
                              | dims
nopar_func_header:              func_header_start T_LPAREN T_RPAREN
global_var_declaration:         typename init_variabledefs T_SEMI
init_variabledefs:              init_variabledefs T_COMMA init_variabledef
                              | init_variabledef
init_variabledef:               variabledef initializer
func_declaration:               short_func_declaration
                              | full_func_declaration
full_func_declaration:          full_par_func_header T_LBRACE decl_statements T_RBRACE
                              | nopar_func_header T_LBRACE decl_statements T_RBRACE
full_par_func_header:           func_header_start T_LPAREN parameter_list T_RPAREN
parameter_list:                 parameter_list T_COMMA typename pass_variabledef
                              | typename pass_variabledef
pass_variabledef:               variabledef
                              | T_REFER T_ID                                            { hashtbl_insert(hashtbl, $2, NULL, scope); }
decl_statements:                declarations statements
                              | declarations
                              | statements
                              | %empty
declarations:                   declarations typename variabledefs T_SEMI
                              | typename variabledefs T_SEMI
statements:                     statements statement
                              | statement
statement:                      expression_statement
                              | if_statement
                              | while_statement
                              | return_statement
                              | comp_statement
                              | T_SEMI
expression_statement:           general_expression T_SEMI
if_statement:                   T_IF T_LPAREN general_expression T_RPAREN statement if_tail
if_tail:                        T_ELSE statement
                              | %empty %prec LOWER_THAN_ELSE
while_statement:                T_WHILE T_LPAREN general_expression T_RPAREN statement
optexpr:                        general_expression
                              | %empty
return_statement:               T_RETURN optexpr T_SEMI
comp_statement:                 T_LBRACE decl_statements T_RBRACE
main_function:                  main_header T_LBRACE decl_statements T_RBRACE
main_header:                    T_INT T_MAIN T_LPAREN T_RPAREN
                              | error T_MAIN T_LPAREN T_RPAREN      { yyerror("Wrong use of 'int main()'"); yyerrok; }
                              | T_INT  error T_LPAREN T_RPAREN      { yyerror("Wrong use of 'int main()'"); yyerrok; }
                              | T_INT T_MAIN   error  T_RPAREN      { yyerror("Wrong use of 'int main()'"); yyerrok; }
                              | T_INT T_MAIN T_LPAREN   error       { yyerror("Wrong use of 'int main()'"); yyerrok; }
                


%%


int main(int argc, char *argv[]){
	int token;        

    /* Initialize το Hashtable */
    if (!(hashtbl = hashtbl_create(10, NULL))){
        puts("Error, failed to initialize hashtable");
        exit(EXIT_FAILURE);
    }

	/* Διάβασε αρχείο */
	if(argc > 1){       
		yyin = fopen(argv[1], "r");
		if (yyin == NULL){
			perror ("[ERROR] Could not open file"); 
			return EXIT_FAILURE;
		}
	}        

	yyparse(); /* Parsing αρχείου */

    /* Τερματισμός Προγράμματος */
	fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;
}