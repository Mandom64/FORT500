/*
    Γεωργιάδης Χρήστος 
    2116088
*/

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include "syntax.tab.h"
    //το FLEX_DEBUG 0 κάνει print το αποτέλεσμα της λεκτικής ανάλυσης και το 1 δεν το δείχει  
    #define FLEX_DEBUG 1

    void print_token(int token_id);
    void print_token_binary(int token_id);
    void print_token_hex(int token_id);
    void yyerror(const char* error);
    int  str_to_int(char *str);
    float bin_to_float(char *str);
    float hex_to_float(char *str);

    char str_buf[256];
    int error_counter = 0;
%}

%option noyywrap
%option yylineno
%option case-insensitive

%x STRING
%x SINGLE_LINE_COMMENT

LETTER                       [a-zA-Z]
DIGIT                        [0-9]
ALPHANUM                     {LETTER}|{DIGIT}
/* το flex δεν παίρνει anchors αυτό το ver. βρίσκει μόνο τα σωστά ID's(^{LETTER}{ALPHANUM}*$)|(^_(({ALPHANUM}|{ALPHANUM}_{ALPHANUM}))*_$)*/
IDENTIFIER                   ({LETTER}{ALPHANUM}*)|(_(({ALPHANUM}|{ALPHANUM}_{ALPHANUM}))*_)
ICONST                       ([1-9][0-9]*|0[^hbHB])|(0H[abcdefABCDEF1-9][abcdefABCDEF0-9]*)|(0B1[01]*)
/* κάτι με το '0' έχω θέμα εδώ κάτι λείπει*/
RCONST                       ({DIGIT}*\.{DIGIT}*|{DIGIT}\.{DIGIT}*)|([1-9]{DIGIT}*E[+-]?{DIGIT}+)|(0B1[01]*\.[01]*)|(0H[abcdefABCDEF0-9][abcdefABCDEF0-9]*\.[abcdefABCDEF0-9]*)
CCONST                       (\'(([^\\])|(\\[nftrbv]))\')
LCONST                       ".TRUE."|".FALSE."


%%

"FUNCTION"                   { print_token(T_FUNCTION); return T_FUNCTION; }
"SUBROUTINE"                 { print_token(T_SUBROUTINE); return T_SUBROUTINE; }
"END"                        { print_token(T_END); return T_END; }              
"INTEGER"                    { print_token(T_INTEGER); return T_INTEGER; }                   
"REAL"                       { print_token(T_REAL); return T_REAL; }
"LOGICAL"                    { print_token(T_LOGICAL); return T_LOGICAL; }
"CHARACTER"                  { print_token(T_CHARACTER); return T_CHARACTER; }
"RECORD"                     { print_token(T_RECORD); return T_RECORD; }
"ENDREC"                     { print_token(T_ENDREC); return T_ENDREC; }
"DATA"                       { print_token(T_DATA); return T_DATA; }
"CONTINUE"                   { print_token(T_CONTINUE); return T_CONTINUE; }
"GOTO"                       { print_token(T_GOTO); return T_GOTO; }
"CALL"                       { print_token(T_CALL); return T_CALL; }
"READ"                       { print_token(T_READ); return T_READ; }
"WRITE"                      { print_token(T_WRITE); return T_WRITE; }
"IF"                         { print_token(T_IF); return T_IF; }
"THEN"                       { print_token(T_THEN); return T_THEN; }
"ELSE"                       { print_token(T_ELSE); return T_ELSE; }
"ENDIF"                      { print_token(T_ENDIF); return T_ENDIF; }
"DO"                         { print_token(T_DO); return T_DO; }
"ENDDO"                      { print_token(T_ENDDO); return T_ENDDO; }
"STOP"                       { print_token(T_STOP); return T_STOP; }
"RETURN"                     { print_token(T_RETURN); return T_RETURN; }

{IDENTIFIER}                 { print_token(T_ID); yylval.string_val = strdup(yytext); return T_ID;  }
{ICONST}                     { print_token(T_ICONST); yylval.int_val = str_to_int(yytext); return T_ICONST; }
{RCONST}                     { if(strcmp(&yytext[1],"B")){ print_token_binary(T_RCONST); yylval.real_val = bin_to_float(yytext); }
                               else if((strcmp(&yytext[1],"H"))){ print_token_hex(T_RCONST); yylval.real_val = hex_to_float(yytext); } return T_RCONST; }
{CCONST}                     { print_token(T_CCONST); yylval.char_val = strdup(yytext); return T_CCONST; }
{LCONST}                     { print_token(T_LCONST); yylval.bool_val = str_to_int(yytext); return T_LCONST; }


\"                           { strcpy(str_buf,""); BEGIN(STRING); }
<STRING>\"                   { BEGIN(INITIAL); /*printf("\n[STRING] %s [LINE %d]", str_buf, yylineno);*/ yylval.string_val = strdup(str_buf); return T_STRING; }
<STRING>(\\\n|\\\r\n)        {  }
<STRING>(\\.|[^"\\])         {
                                if(strlen(yytext) == 2){
                                    if(strcmp(yytext, "\\n") == 0){
                                        strcat(str_buf, "\n");
                                    }
                                    else if(strcmp(yytext, "\\f") == 0){
                                        strcat(str_buf, "\f");
                                    }
                                    else if(strcmp(yytext, "\\t") == 0){
                                        strcat(str_buf, "\t");
                                    }
                                    else if(strcmp(yytext, "\\r") == 0){
                                        strcat(str_buf, "\r");
                                    }
                                    else if(strcmp(yytext, "\\b") == 0){
                                        strcat(str_buf, "\b");
                                    }
                                    else if(strcmp(yytext, "\\v") == 0){
                                        strcat(str_buf, "\v");
                                    }
                                    else{
                                        strcat(str_buf, &yytext[1]);
                                    }
                                }
                                else{
                                    strcat(str_buf, yytext);
                                } 
                             }
<STRING>(\n|\r\n)            { yyerror("New line without \\"); }
<STRING><<EOF>>              { yyerror("End of string without closing with\""); }
<STRING>.                    { yyerror("Unknown Character"); }

"\$"                               { BEGIN(SINGLE_LINE_COMMENT); }
<SINGLE_LINE_COMMENT>(\n|\r\n)     { BEGIN(INITIAL); /*printf("\n[COMMENT LINE %d]", yylineno-1);*/ }
<SINGLE_LINE_COMMENT>.             { }

".OR."                       { print_token(T_OROP); return T_OROP; }  
".AND."                      { print_token(T_ANDOP); return T_ANDOP; }  
".NOT"                       { print_token(T_NOTOP); return T_NOTOP; }  
".GT."|".GE."|".LT."|".LE."|".EQ."|".NE"  { print_token(T_RELOP); return T_RELOP; } 
"+"|"-"                      { print_token(T_ADDOP); return T_ADDOP; } 
"*"                          { print_token(T_MULOP); return T_MULOP; }
"/"                          { print_token(T_DIVOP); return T_DIVOP; }
"**"                         { print_token(T_POWEROP); return T_POWEROP; }  

"("                          { print_token(T_LPAREN); return T_LPAREN; } 
")"                          { print_token(T_RPAREN); return T_RPAREN; } 
","                          { print_token(T_COMMA); return T_COMMA; } 
"="                          { print_token(T_ASSIGN); return T_ASSIGN; } 
":"                          { print_token(T_COLON); return T_COLON; } 


" "|\t                       { }
\n                           { }
\r\n                         { }
<<EOF>>                      { print_token(T_EOF); return T_EOF; }
.                            { yyerror("Unrecognized Character"); }

%%

void print_token(int token_id){
    
    if(FLEX_DEBUG == 1) return;

    if(token_id == T_ICONST){
        printf("\n[LINE %d] INTEGER TOKEN-> %s BASE 10-> %d (%d)", yylineno, yytext, str_to_int(yytext), token_id);
    }else{
        printf("\n[LINE %d] TOKEN-> %s (%d)", yylineno, yytext, token_id); 
    }

}

void print_token_binary(int token_id){

    if(FLEX_DEBUG == 1) return;

    if((token_id == T_RCONST) && (strcmp(&yytext[1],"B"))){
        printf("\n[LINE %d] FLOAT TOKEN-> %s BASE 10-> %f (%d)", yylineno, yytext, bin_to_float(yytext), token_id);
    }

}

void print_token_hex(int token_id){

    if(FLEX_DEBUG == 1) return;
    
    if((token_id == T_RCONST) && (strcmp(&yytext[1],"H"))){
        printf("\n[LINE %d] FLOAT TOKEN-> %s BASE 10-> %f (%d)", yylineno, yytext, hex_to_float(yytext), token_id);
    }

}

int str_to_int(char *str){ 

    if(strncmp(str, "0B", 2) == 0){
        return (int) strtoll(&str[2], NULL, 2);
    }else if(strncmp(str, "0H", 2) == 0){
        return (int) strtoll(&str[2], NULL, 16);
    }else{
        return (int) strtoll(str, NULL, 10);
    }

}

float bin_to_float(char *str){

    float number = 0.0;
    char *dot = strchr(str, '.');
    int length_real = strlen(dot) - 1;
    number = strtol(&str[2], &dot, 2);
    for( int i = 1; i < length_real; i++ ){
        number += (dot[i] - '0') * (1/pow(2,i));  
    }
    return number;

}

float hex_to_float(char *str){

    float number = 0.0;
    char *dot = strchr(str, '.');
    int length_real = strlen(dot) - 1;
    number = strtol(&str[2], &dot, 16);
    for( int i = 1; i < length_real; i++ ){
        if(dot[i] <= 9){
            number =+ (dot[i] - '0') * (1/pow(16,i));
        }
        else{
            number =+ (dot[i] + 10 - 'A')*(1/pow(16,i));
        }
    }
    return number;

}

void yyerror(const char* error){
    error_counter++;
    printf("\n[ERROR %s LINE %d] %s", yytext, yylineno, error);

    if(error_counter == 5){
        printf("\n[MAXIMUM ERRORS FOUND]");
        exit(EXIT_FAILURE);
    }

    yyless(1);
}

