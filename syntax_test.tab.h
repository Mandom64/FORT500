/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SYNTAX_TEST_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TEST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_EOF = 0,
    T_CHAR = 258,
    T_INT = 259,
    T_FLOAT = 260,
    T_VOID = 261,
    T_IF = 262,
    T_ELSE = 263,
    T_WHILE = 264,
    T_RETURN = 265,
    T_MAIN = 266,
    T_ID = 267,
    T_ICONST = 268,
    T_FCONST = 269,
    T_CCONST = 270,
    T_SCONST = 271,
    T_OROP = 272,
    T_ANDOP = 273,
    T_EQUOP = 274,
    T_RELOP = 275,
    T_ADDOP = 276,
    T_MULOP = 277,
    T_NOTOP = 278,
    T_INCDEC = 279,
    T_SIZEOP = 280,
    T_LPAREN = 281,
    T_RPAREN = 282,
    T_SEMI = 283,
    T_COMMA = 284,
    T_ASSIGN = 285,
    T_LBRACK = 286,
    T_RBRACK = 287,
    T_REFER = 288,
    T_LBRACE = 289,
    T_RBRACE = 290,
    UMINUS = 291,
    T_DOT = 292,
    T_METH = 293,
    LOWER_THAN_ELSE = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "syntax_test.y" /* yacc.c:1909  */

   int intval;
   float floatval;
   char charval;
   char* strval; 

   _Bool boolval;

#line 104 "syntax_test.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TEST_TAB_H_INCLUDED  */
