/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "syntax.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "hashtbl.h"
    extern FILE *yyin;
    extern int yylex();
    extern void yyerror(const char* error);
    
    HASHTBL *hashtbl;
    int scope = 0;

#line 79 "syntax.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntax.tab.h".  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    T_FUNCTION = 258,
    T_SUBROUTINE = 259,
    T_END = 260,
    T_INTEGER = 261,
    T_REAL = 262,
    T_LOGICAL = 263,
    T_CHARACTER = 264,
    T_RECORD = 265,
    T_ENDREC = 266,
    T_DATA = 267,
    T_CONTINUE = 268,
    T_GOTO = 269,
    T_CALL = 270,
    T_READ = 271,
    T_WRITE = 272,
    T_IF = 273,
    T_THEN = 274,
    T_ELSE = 275,
    T_ENDIF = 276,
    T_DO = 277,
    T_ENDDO = 278,
    T_STOP = 279,
    T_RETURN = 280,
    T_OROP = 281,
    T_ANDOP = 282,
    T_NOTOP = 283,
    T_RELOP = 284,
    T_ADDOP = 285,
    T_MULOP = 286,
    T_DIVOP = 287,
    T_POWEROP = 288,
    T_LPAREN = 289,
    T_RPAREN = 290,
    T_COMMA = 291,
    T_ASSIGN = 292,
    T_COLON = 293,
    T_ID = 294,
    T_ICONST = 295,
    T_RCONST = 296,
    T_CCONST = 297,
    T_LCONST = 298,
    T_STRING = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "syntax.y" /* yacc.c:355  */

    int int_val;
    float real_val;
    char* char_val;
    char* string_val;
    _Bool bool_val;

#line 173 "syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "syntax.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    97,    97,    99,   101,   102,   103,   104,   106,   106,
     106,   106,   108,   109,   110,   112,   112,   112,   113,   115,
     116,   118,   118,   120,   121,   123,   124,   126,   127,   129,
     131,   132,   134,   135,   136,   137,   138,   139,   141,   141,
     143,   143,   143,   143,   145,   146,   148,   149,   151,   153,
     154,   156,   157,   158,   159,   160,   161,   162,   163,   165,
     166,   168,   169,   169,   170,   172,   173,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   186,
     188,   189,   189,   189,   191,   192,   194,   195,   196,   197,
     199,   201,   202,   204,   205,   207,   208,   210,   212,   213,
     215,   216,   218,   219,   220,   222,   223,   225,   225,   225,
     227,   228,   230,   232,   233,   235,   237,   237,   237,   238,
     238,   238,   239,   241,   242
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"EOF\"", "error", "$undefined", "\"function\"", "\"subroutine\"",
  "\"end\"", "\"integer\"", "\"real\"", "\"logical\"", "\"character\"",
  "\"record\"", "\"endrec\"", "\"data\"", "\"continue\"", "\"goto\"",
  "\"call\"", "\"read\"", "\"write\"", "\"if\"", "\"then\"", "\"else\"",
  "\"endif\"", "\"do\"", "\"enddo\"", "\"stop\"", "\"return\"", "\".OR.\"",
  "\".AND.\"", "\".NOT\"", "\".GT.\"", "\"+|-\"", "\"*\"", "\"/\"",
  "\"**\"", "\"(\"", "\")\"", "\",\"", "\"=\"", "\":\"", "\"id\"",
  "\"iconst\"", "\"rconst\"", "\"cconst\"", "\"lconst\"", "\"string\"",
  "$accept", "program", "body", "declarations", "type", "vars",
  "undef_variable", "$@1", "$@2", "dims", "dim", "fields", "field", "vals",
  "value_list", "values", "value", "repeat", "constant", "statements",
  "labeled_statement", "label", "statement", "simple_statement",
  "assignment", "variable", "$@3", "expressions", "expression", "$@4",
  "goto_statement", "$@5", "$@6", "labels", "if_statement",
  "subroutine_call", "io_statement", "read_list", "read_item",
  "iter_space", "step", "write_list", "write_item", "compound_statement",
  "branch_statement", "$@7", "$@8", "tail", "loop_statement",
  "subprograms", "subprogram", "header", "$@9", "$@10", "$@11", "$@12",
  "formal_parameters", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF -184

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-184)))

#define YYTABLE_NINF -39

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -184,    29,     1,   208,  -184,  -184,    12,  -184,  -184,  -184,
    -184,   353,     5,  -184,    28,    13,     8,   201,    20,    18,
    -184,  -184,  -184,  -184,    35,    71,  -184,    10,  -184,  -184,
    -184,   -18,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   204,
     151,   353,    35,   341,  -184,    45,    54,    61,  -184,    21,
       8,    21,    63,  -184,   151,   151,   201,  -184,  -184,  -184,
    -184,  -184,  -184,    21,   313,    65,  -184,   151,    83,    75,
      98,  -184,  -184,  -184,  -184,   221,    92,   107,   145,  -184,
    -184,  -184,   273,   347,    98,    35,  -184,    72,  -184,   134,
     141,   146,     8,   313,   126,   151,   171,   151,   151,   151,
     151,   151,   151,   151,   201,   283,   151,   151,  -184,     4,
     151,  -184,   313,  -184,   193,   189,   175,   144,    35,    98,
     123,   203,  -184,    43,  -184,   205,  -184,    45,  -184,    14,
    -184,   293,   238,  -184,  -184,    56,   126,   114,   114,    95,
    -184,   144,   303,   257,  -184,    79,  -184,  -184,    94,   313,
    -184,   212,  -184,   216,   202,  -184,    98,  -184,  -184,    72,
     156,  -184,   197,   215,  -184,   217,   220,  -184,  -184,   151,
     230,  -184,  -184,   101,  -184,  -184,   151,   196,  -184,   151,
     197,  -184,   123,  -184,  -184,  -184,   136,   151,   151,   197,
     239,   265,  -184,  -184,    79,   313,    35,   222,   196,   223,
    -184,  -184,   197,   232,   234,   235,  -184,   151,  -184,  -184,
    -184,   237,  -184,   240,   197,  -184,  -184,  -184,  -184,   197,
     157,   313,    99,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,   218,  -184
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     1,   114,     0,     8,     9,    10,
      11,     0,     0,    56,     0,     0,     0,     0,     0,     0,
      58,    57,    64,    48,     0,     0,    45,     0,    47,    49,
      51,     0,    52,    53,    54,    55,    50,   105,   106,     2,
       0,     0,     0,     0,    24,     0,     6,     0,    80,    90,
       0,    95,    91,    94,     0,     0,     0,    40,    41,    43,
      42,   104,    77,    76,   102,    92,   101,     0,     0,    18,
       4,    14,    44,    46,    62,     0,     0,     0,     0,   113,
       7,    78,     0,     0,    25,     0,    23,    39,    28,     0,
       0,     0,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,    60,    59,    61,   122,     0,     0,     0,     0,     5,
       0,    40,    37,     0,    31,     0,    36,     0,    81,     0,
      93,     0,     0,    67,    68,    69,    70,    71,    72,    73,
     100,     0,     0,     0,     7,     0,    13,    12,     0,    66,
     119,     0,   115,     0,     0,    89,    26,    35,    29,    39,
       0,    27,     0,    64,    79,    64,     0,    87,   108,     0,
       0,    22,    21,     0,    20,    63,     0,     0,   116,     0,
       0,    30,     0,    34,    33,    85,     0,     0,     0,     0,
       0,    99,   112,    16,     0,    65,     0,     0,     0,     0,
      32,    82,     0,     0,     0,     0,     7,     0,    97,    17,
      19,   124,   120,     0,     0,    83,    84,    96,   103,     0,
       0,    98,     0,   121,   117,    88,    86,     7,   111,   109,
     123,   118,     0,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   -73,  -184,    -3,   -40,  -105,  -184,  -184,  -184,
      76,   233,   -33,  -184,   149,  -184,   148,  -184,   -79,  -184,
     260,   -13,   284,  -104,  -184,     6,  -184,  -184,   -37,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,   267,   -78,     0,
    -184,   271,   -92,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -183
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    42,    70,    71,   145,   209,   173,
     174,    43,    44,    46,    88,   123,   124,   125,    62,    25,
      26,    27,    28,    29,    30,    63,   110,   148,    64,    95,
      32,   162,   215,   186,    33,    34,    35,    52,    53,   144,
     208,    65,    66,    36,    37,   106,   190,   229,    38,    39,
      79,    80,   198,   231,   177,   223,   197
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    48,    84,    82,   147,   146,     5,   116,   126,    31,
      86,     6,   140,   155,   130,   213,    74,    93,    94,    75,
      76,    49,    51,    13,    14,    15,    16,    17,    18,     4,
     105,    31,    19,    31,    20,    21,    78,   167,   112,   230,
     140,   157,    50,    69,    45,   119,    40,    22,    50,    22,
      86,   130,    22,   163,    67,    74,    51,    68,   131,    76,
     133,   134,   135,   136,   137,   138,   139,    47,    23,   142,
     143,   170,     6,   149,    69,   158,    -3,    87,   156,   159,
     126,   184,    97,    98,    13,    14,    15,    16,    17,    18,
      89,    -3,    -3,    19,    -3,    20,    21,    90,    51,    92,
     146,   104,   120,   200,   154,     7,     8,     9,    10,   108,
      22,    23,   121,    58,    59,    60,   122,   147,   171,   172,
     107,    97,    98,    31,    99,   100,   101,   102,   166,   175,
     176,   113,   191,   220,   109,    51,   193,   194,    69,   195,
      97,    98,   105,    99,   100,     6,   114,    31,   115,   185,
     143,   143,    97,    98,   232,    99,   211,    13,    14,    15,
      16,    17,   153,    57,    58,    59,    60,   199,    20,    21,
     221,   201,   202,   127,   196,   128,   205,   227,   228,    54,
     152,    55,   129,    22,    23,    81,   182,   203,   204,   216,
      22,    57,    58,    59,    60,   196,    57,    58,    59,    60,
     183,   225,     7,     8,     9,    10,   226,   132,    77,     6,
       7,     8,     9,    10,     7,     8,     9,    10,    11,   196,
      12,    13,    14,    15,    16,    17,    18,   150,   151,    54,
      19,    55,    20,    21,   -38,    56,   160,    23,   180,   233,
      22,    57,    58,    59,    60,    61,   178,    22,    23,    54,
     179,    55,   187,   192,   188,    81,   189,   212,   206,   214,
      22,    57,    58,    59,    60,   111,    54,   217,    55,   218,
     210,   219,    56,   222,    83,   224,   161,   165,    57,    58,
      59,    60,    61,    97,    98,    72,    99,   100,   101,   102,
     103,    97,    98,   169,    99,   100,   101,   102,   103,    97,
      98,   207,    99,   100,   101,   102,   103,   181,   117,    97,
      98,    73,    99,   100,   101,   102,   103,    91,   141,    97,
      98,     0,    99,   100,   101,   102,   103,    96,   164,    97,
      98,     0,    99,   100,   101,   102,   103,     0,   168,    97,
      98,     0,    99,   100,   101,   102,   103,     7,     8,     9,
      10,    41,    85,     7,     8,     9,    10,    41,   118,     7,
       8,     9,    10,    41
};

static const yytype_int16 yycheck[] =
{
       3,    14,    42,    40,   109,     1,     5,    80,    87,     3,
      43,     1,   104,   117,    92,   198,    34,    54,    55,    37,
      38,    15,    16,    13,    14,    15,    16,    17,    18,     0,
      67,    25,    22,    27,    24,    25,    39,   141,    75,   222,
     132,   120,    34,    39,    39,    85,    34,    39,    34,    39,
      83,   129,    39,    39,    34,    34,    50,    39,    95,    38,
      97,    98,    99,   100,   101,   102,   103,    39,    40,   106,
     107,   144,     1,   110,    39,    32,     5,    32,   118,    36,
     159,   160,    26,    27,    13,    14,    15,    16,    17,    18,
      36,    20,    21,    22,    23,    24,    25,    36,    92,    36,
       1,    36,    30,   182,   117,     6,     7,     8,     9,    34,
      39,    40,    40,    41,    42,    43,    44,   222,    39,    40,
      37,    26,    27,   117,    29,    30,    31,    32,   141,    35,
      36,    39,   169,   206,    36,   129,    35,    36,    39,   176,
      26,    27,   179,    29,    30,     1,    39,   141,     3,   162,
     187,   188,    26,    27,   227,    29,   196,    13,    14,    15,
      16,    17,    18,    40,    41,    42,    43,   180,    24,    25,
     207,    35,    36,    39,   177,    34,   189,    20,    21,    28,
       5,    30,    36,    39,    40,    34,    30,   187,   188,   202,
      39,    40,    41,    42,    43,   198,    40,    41,    42,    43,
      44,   214,     6,     7,     8,     9,   219,    36,     4,     1,
       6,     7,     8,     9,     6,     7,     8,     9,    10,   222,
      12,    13,    14,    15,    16,    17,    18,    34,    39,    28,
      22,    30,    24,    25,    31,    34,    31,    40,    36,    21,
      39,    40,    41,    42,    43,    44,    34,    39,    40,    28,
      34,    30,    37,    23,    37,    34,    36,    35,    19,    36,
      39,    40,    41,    42,    43,    44,    28,    35,    30,    35,
     194,    36,    34,    36,    41,    35,   127,    39,    40,    41,
      42,    43,    44,    26,    27,    25,    29,    30,    31,    32,
      33,    26,    27,    36,    29,    30,    31,    32,    33,    26,
      27,    36,    29,    30,    31,    32,    33,   159,    35,    26,
      27,    27,    29,    30,    31,    32,    33,    50,    35,    26,
      27,    -1,    29,    30,    31,    32,    33,    56,    35,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    26,
      27,    -1,    29,    30,    31,    32,    33,     6,     7,     8,
       9,    10,    11,     6,     7,     8,     9,    10,    11,     6,
       7,     8,     9,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,    48,     0,     5,     1,     6,     7,     8,
       9,    10,    12,    13,    14,    15,    16,    17,    18,    22,
      24,    25,    39,    40,    49,    64,    65,    66,    67,    68,
      69,    70,    75,    79,    80,    81,    88,    89,    93,    94,
      34,    10,    49,    56,    57,    39,    58,    39,    66,    70,
      34,    70,    82,    83,    28,    30,    34,    40,    41,    42,
      43,    44,    63,    70,    73,    86,    87,    34,    39,    39,
      50,    51,    65,    67,    34,    37,    38,     4,    49,    95,
      96,    34,    73,    56,    50,    11,    57,    32,    59,    36,
      36,    82,    36,    73,    73,    74,    86,    26,    27,    29,
      30,    31,    32,    33,    36,    73,    90,    37,    34,    36,
      71,    44,    73,    39,    39,     3,    47,    35,    11,    50,
      30,    40,    44,    60,    61,    62,    63,    39,    34,    36,
      83,    73,    36,    73,    73,    73,    73,    73,    73,    73,
      87,    35,    73,    73,    84,    52,     1,    51,    72,    73,
      34,    39,     5,    18,    66,    68,    50,    63,    32,    36,
      31,    59,    76,    39,    35,    39,    66,    68,    35,    36,
      47,    39,    40,    54,    55,    35,    36,    99,    34,    34,
      36,    61,    30,    44,    63,    66,    78,    37,    37,    36,
      91,    73,    23,    35,    36,    73,    49,   101,    97,    66,
      63,    35,    36,    84,    84,    66,    19,    36,    85,    53,
      55,    50,    35,   101,    36,    77,    66,    35,    35,    36,
      47,    73,    36,   100,    35,    66,    66,    20,    21,    92,
     101,    98,    47,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    48,    48,    49,    49,
      49,    49,    50,    50,    50,    52,    53,    51,    51,    54,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    62,    62,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    71,    70,    70,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    73,
      75,    76,    77,    75,    78,    78,    79,    79,    79,    79,
      80,    81,    81,    82,    82,    83,    83,    84,    85,    85,
      86,    86,    87,    87,    87,    88,    88,    90,    91,    89,
      92,    92,    93,    94,    94,    95,    97,    98,    96,    99,
     100,    96,    96,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     5,     3,     0,     1,     1,
       1,     1,     3,     3,     1,     0,     0,     6,     1,     3,
       1,     1,     1,     2,     1,     2,     4,     4,     2,     3,
       3,     1,     4,     3,     3,     2,     1,     1,     1,     0,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     0,     5,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     0,     4,
       2,     0,     0,     8,     3,     1,     9,     5,     9,     5,
       2,     2,     2,     3,     1,     1,     7,     4,     2,     0,
       3,     1,     1,     7,     1,     1,     1,     0,     0,     9,
       3,     1,     6,     2,     0,     3,     0,     0,     8,     0,
       0,     7,     2,     4,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 104 "syntax.y" /* yacc.c:1646  */
    { }
#line 1467 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 112 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1473 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1479 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 112 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-5].string_val), NULL, scope); }
#line 1485 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 113 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[0].string_val), NULL, scope); }
#line 1491 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[0].string_val), NULL, scope); }
#line 1497 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 126 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-1].string_val), NULL, scope); }
#line 1503 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-1].string_val), NULL, scope); }
#line 1509 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 141 "syntax.y" /* yacc.c:1646  */
    { }
#line 1515 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[0].string_val), NULL, scope); }
#line 1521 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 169 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1527 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 169 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1533 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 170 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[0].string_val), NULL, scope); }
#line 1539 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 186 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1545 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 186 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1551 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 189 "syntax.y" /* yacc.c:1646  */
    {scope++}
#line 1557 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 189 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1563 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 189 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-6].string_val), NULL, scope); }
#line 1569 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 194 "syntax.y" /* yacc.c:1646  */
    { scope++; }
#line 1575 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 195 "syntax.y" /* yacc.c:1646  */
    { scope++; scope--; }
#line 1581 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 196 "syntax.y" /* yacc.c:1646  */
    { scope++; scope--; yyerror("no if found"); yyerrok;}
#line 1587 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 197 "syntax.y" /* yacc.c:1646  */
    { scope++; scope--; yyerror("no if found"); yyerrok;}
#line 1593 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 208 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-3].string_val), NULL, scope); }
#line 1599 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 213 "syntax.y" /* yacc.c:1646  */
    { }
#line 1605 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 219 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-3].string_val), NULL, scope); }
#line 1611 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 225 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1617 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 225 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1623 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 230 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-4].string_val), NULL, scope); }
#line 1629 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 233 "syntax.y" /* yacc.c:1646  */
    { }
#line 1635 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 237 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1641 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 237 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1647 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 237 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-5].string_val), NULL, scope); }
#line 1653 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 238 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1659 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 238 "syntax.y" /* yacc.c:1646  */
    {scope--;}
#line 1665 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 238 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[-5].string_val), NULL, scope); }
#line 1671 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 239 "syntax.y" /* yacc.c:1646  */
    { hashtbl_insert(hashtbl, (yyvsp[0].string_val), NULL, scope); }
#line 1677 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 1681 "syntax.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 245 "syntax.y" /* yacc.c:1906  */


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