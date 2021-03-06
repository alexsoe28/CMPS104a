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
#line 1 "parser.y" /* yacc.c:339  */

#include <cassert>
#include <stdlib.h>
#include <string.h>
#include "astree.h"
#include "lyutils.h"
#include <iostream>
using namespace std;
extern FILE* outFile;
extern int exit_status;

#line 78 "yyparse.cpp" /* yacc.c:339  */

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
   by #include "yyparse.h".  */
#ifndef YY_YY_YYPARSE_H_INCLUDED
# define YY_YY_YYPARSE_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ROOT = 258,
    IDENT = 259,
    NUMBER = 260,
    UNOP = 261,
    BINOP = 262,
    TOK_NEWSTRING = 263,
    TOK_INDEX = 264,
    TOK_IF = 265,
    TOK_ELSE = 266,
    TOK_IFELSE = 267,
    TOK_ALLOC = 268,
    TOK_NULLPTR = 269,
    TOK_WHILE = 270,
    TOK_RETURN = 271,
    TOK_RETURNVOID = 272,
    TOK_FIELDLIST = 273,
    TOK_INT = 274,
    TOK_STRING = 275,
    TOK_STRUCT = 276,
    TOK_VOID = 277,
    TOK_NULL = 278,
    TOK_ARRAY = 279,
    TOK_VARDECL = 280,
    TOK_PARAMLIST = 281,
    TOK_EQ = 282,
    TOK_NE = 283,
    TOK_LE = 284,
    TOK_GE = 285,
    TOK_NOT = 286,
    TOK_PTR = 287,
    TOK_BLOCK = 288,
    TOK_CALL = 289,
    DECLID = 290,
    TOK_FUNCTION = 291,
    TOK_PROTOTYPE = 292,
    TOK_POS = 293,
    TOK_NEG = 294,
    TOK_NEWARRAY = 295,
    TOK_TYPEID = 296,
    TOK_FIELD = 297,
    TOK_ORD = 298,
    TOK_CHR = 299,
    TOK_ROOT = 300,
    TOK_PARAM = 301,
    BAD_TOK = 302,
    TOK_EXC = 303,
    TOK_INTCON = 304,
    TOK_CHARCON = 305,
    TOK_STRINGCON = 306,
    TOK_ARROW = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YYPARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 182 "yyparse.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   573

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    67,     2,     2,
      53,    54,    65,    63,    60,    64,    61,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
      69,    62,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    55,    56,    57,    58,    59,    60,    64,
      68,    74,    78,    83,    86,    92,    93,    94,    95,   100,
     105,   111,   116,   124,   127,   133,   137,   142,   146,   152,
     154,   158,   159,   160,   161,   162,   163,   164,   167,   171,
     177,   182,   185,   191,   195,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   219,   220,   223,   228,   232,   241,   245,
     251,   253,   258,   259,   263,   268,   269,   270,   271
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ROOT", "IDENT", "NUMBER", "UNOP",
  "BINOP", "TOK_NEWSTRING", "TOK_INDEX", "TOK_IF", "TOK_ELSE",
  "TOK_IFELSE", "TOK_ALLOC", "TOK_NULLPTR", "TOK_WHILE", "TOK_RETURN",
  "TOK_RETURNVOID", "TOK_FIELDLIST", "TOK_INT", "TOK_STRING", "TOK_STRUCT",
  "TOK_VOID", "TOK_NULL", "TOK_ARRAY", "TOK_VARDECL", "TOK_PARAMLIST",
  "TOK_EQ", "TOK_NE", "TOK_LE", "TOK_GE", "TOK_NOT", "TOK_PTR",
  "TOK_BLOCK", "TOK_CALL", "DECLID", "TOK_FUNCTION", "TOK_PROTOTYPE",
  "TOK_POS", "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID", "TOK_FIELD",
  "TOK_ORD", "TOK_CHR", "TOK_ROOT", "TOK_PARAM", "BAD_TOK", "TOK_EXC",
  "TOK_INTCON", "TOK_CHARCON", "TOK_STRINGCON", "TOK_ARROW", "'('", "')'",
  "'['", "']'", "'{'", "'}'", "';'", "','", "'.'", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "'<'", "'>'", "$accept", "start", "program",
  "structdef", "structfields", "type", "plaintype", "function", "idents",
  "ident", "block", "statements", "statement", "vardecl", "while",
  "ifelse", "return", "expr", "alloc", "call", "params", "variable",
  "constant", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    40,    41,    91,    93,   123,   125,    59,
      44,    46,    61,    43,    45,    42,    47,    37,    33,    60,
      62
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -93,     5,    88,   -93,   -31,   -46,   -35,   -47,   -93,    -2,
     192,   -93,   -93,    42,   -93,     3,   244,     7,   -93,   -93,
     -93,   244,   140,   -93,   244,   244,   -93,    59,   -93,   -12,
     -93,   163,   -93,   -93,   -93,   -93,   -93,   254,   -93,   -93,
     -52,   -93,   -93,   -93,   -93,   236,   244,    63,   244,   -93,
     274,    28,    11,    -7,    65,   318,   -93,    -6,   -93,   -42,
     -42,   -93,    20,   -93,   244,   -93,   -93,   244,   244,   244,
     244,    87,   244,   -93,   244,   244,   244,   244,   244,   244,
     244,   244,   -93,   244,   -93,   490,   337,    23,    90,    30,
     366,   -93,    -3,    35,   102,   -93,   -25,   -34,   -93,   382,
     506,   506,   506,   506,   -93,   426,   490,   -42,   -42,    -7,
      -7,    -7,   506,   506,   490,   215,    62,    41,    11,   215,
      48,   -93,    64,    66,   117,   119,    57,   -93,   -93,    22,
      58,   -93,   -93,   120,   244,    77,    70,   -93,    11,   -93,
      94,   -93,   -93,   -93,   -93,   -93,   -93,   215,   445,    78,
      72,    73,   -93,   -93,   -93,   -93,    80,   -93,   244,   474,
     -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    72,     0,     0,    78,     0,
       0,    16,    17,     0,    15,     0,     0,     0,    77,    76,
      75,     0,     0,    37,     0,     0,     3,     0,     4,     0,
      32,     0,     5,    31,    33,    34,    35,     0,    60,    61,
       0,    63,    64,     6,     7,     0,     0,     0,     0,    43,
       0,     0,     0,    59,     0,     0,    28,     0,    29,    57,
      58,    26,     0,    39,     0,    27,    30,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    69,    70,     0,     0,     0,     0,
       0,    44,     0,     0,     0,    62,     0,     0,    23,     0,
      46,    47,    49,    51,    74,     0,    45,    52,    53,    54,
      55,    56,    48,    50,    71,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,    21,    19,     0,
       0,    38,    73,    41,     0,     0,     0,    40,     0,     9,
      11,    13,    25,    18,    22,    20,    24,     0,     0,     0,
       0,     0,    12,    42,    66,    65,     0,    14,     0,     0,
      67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   -93,   -93,    -5,   -93,   -43,   -93,   -93,    -1,
     -92,   -93,   -19,   -93,   -93,   -93,   -93,   -10,   -93,   -93,
     -93,   -93,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    26,   122,   123,    27,    28,    97,    57,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    29,    82,    58,   128,     3,    53,    45,    83,    93,
      71,    55,    66,    72,    59,    60,    11,    12,    46,    14,
     129,   120,    47,    77,    78,    79,   130,    43,    44,    17,
      11,    12,    22,    14,   127,    85,    86,   145,    90,    11,
      12,    62,    14,    17,    15,    71,    51,    63,    72,   124,
      64,    48,    17,    63,    99,   121,    64,   100,   101,   102,
     103,    98,   105,    61,   106,   107,   108,   109,   110,   111,
     112,   113,    52,   114,    96,   136,    54,    11,    12,    22,
      14,   144,    15,    87,    88,    92,    94,    89,    -2,     4,
      17,   104,     5,   116,   117,   151,   133,   124,     6,   118,
     137,     7,     8,     9,    10,   125,   126,    11,    12,    13,
      14,   135,    15,    11,    12,   134,    14,   138,   120,    16,
      17,   141,   139,   142,   148,   140,    17,   143,   153,   146,
     149,   147,   155,   158,     0,   152,     0,    18,    19,    20,
     150,    21,   156,   157,     5,    22,     0,    23,   159,     0,
       6,    24,    25,     7,     8,     9,    10,     0,     0,    11,
      12,     0,    14,     0,    15,     0,     0,     5,     0,     0,
       0,    16,    17,     6,     0,     0,     7,     8,     9,    10,
       0,     0,    11,    12,     0,    14,     0,    15,     0,    18,
      19,    20,     0,    21,    16,    17,     5,    22,    56,    23,
       0,     0,     0,    24,    25,     7,     8,     0,     0,     0,
       0,     0,    18,    19,    20,     0,    21,     0,     0,     5,
      22,    65,    23,    16,     0,     6,    24,    25,     7,     8,
       9,    10,     0,     0,    11,    12,     0,    14,     0,    15,
       5,    18,    19,    20,     0,    21,    16,    17,     5,     7,
       8,    49,     0,     0,     0,    24,    25,     7,     8,     0,
       0,     0,     0,     0,    18,    19,    20,    16,    21,     0,
       0,     0,    22,     0,    23,    16,     0,     0,    24,    25,
       0,    67,    68,    69,    70,    18,    19,    20,     0,    21,
      84,     0,     0,    18,    19,    20,     0,    21,     0,    24,
      25,    67,    68,    69,    70,     0,    71,    24,    25,    72,
       0,     0,     0,    73,     0,     0,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    71,     0,     0,    72,
       0,     0,     0,    91,     0,     0,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    67,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,    70,     0,     0,
      71,     0,    95,    72,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,     0,    80,    81,    71,
       0,   115,    72,    67,    68,    69,    70,     0,     0,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,     0,
     119,    72,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    71,    80,    81,    72,     0,     0,
       0,   131,     0,     0,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    67,    68,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,     0,     0,    71,     0,
       0,    72,   132,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,     0,    80,    81,    71,     0,   154,
      72,    67,    68,    69,    70,     0,     0,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,     0,   160,    72,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    71,    80,    81,    72,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    71,    80,
      81,    72,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79
};

static const yytype_int16 yycheck[] =
{
      10,     2,    54,    22,    96,     0,    16,    53,    60,    52,
      52,    21,    31,    55,    24,    25,    19,    20,    53,    22,
      54,    24,    69,    65,    66,    67,    60,    58,    59,    32,
      19,    20,    57,    22,    59,    45,    46,   129,    48,    19,
      20,    53,    22,    32,    24,    52,     4,    59,    55,    92,
      62,    53,    32,    59,    64,    58,    62,    67,    68,    69,
      70,    62,    72,     4,    74,    75,    76,    77,    78,    79,
      80,    81,    69,    83,    54,   118,    69,    19,    20,    57,
      22,    59,    24,    20,    21,    57,    21,    24,     0,     1,
      32,     4,     4,    70,     4,   138,   115,   140,    10,    69,
     119,    13,    14,    15,    16,    70,     4,    19,    20,    21,
      22,    70,    24,    19,    20,    53,    22,    69,    24,    31,
      32,     4,    58,     4,   134,    59,    32,    70,   147,   130,
      53,    11,    54,    53,    -1,   140,    -1,    49,    50,    51,
      70,    53,    70,    70,     4,    57,    -1,    59,   158,    -1,
      10,    63,    64,    13,    14,    15,    16,    -1,    -1,    19,
      20,    -1,    22,    -1,    24,    -1,    -1,     4,    -1,    -1,
      -1,    31,    32,    10,    -1,    -1,    13,    14,    15,    16,
      -1,    -1,    19,    20,    -1,    22,    -1,    24,    -1,    49,
      50,    51,    -1,    53,    31,    32,     4,    57,    58,    59,
      -1,    -1,    -1,    63,    64,    13,    14,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    53,    -1,    -1,     4,
      57,    58,    59,    31,    -1,    10,    63,    64,    13,    14,
      15,    16,    -1,    -1,    19,    20,    -1,    22,    -1,    24,
       4,    49,    50,    51,    -1,    53,    31,    32,     4,    13,
      14,    59,    -1,    -1,    -1,    63,    64,    13,    14,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    31,    53,    -1,
      -1,    -1,    57,    -1,    59,    31,    -1,    -1,    63,    64,
      -1,    27,    28,    29,    30,    49,    50,    51,    -1,    53,
      54,    -1,    -1,    49,    50,    51,    -1,    53,    -1,    63,
      64,    27,    28,    29,    30,    -1,    52,    63,    64,    55,
      -1,    -1,    -1,    59,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    59,    -1,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      52,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    52,
      -1,    54,    55,    27,    28,    29,    30,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    -1,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    52,    69,    70,    55,    -1,    -1,
      -1,    59,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    -1,    52,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    52,    -1,    54,
      55,    27,    28,    29,    30,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    52,    69,    70,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    52,    69,
      70,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,    73,     0,     1,     4,    10,    13,    14,    15,
      16,    19,    20,    21,    22,    24,    31,    32,    49,    50,
      51,    53,    57,    59,    63,    64,    74,    77,    78,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    58,    59,    53,    53,    69,    53,    59,
      88,     4,    69,    88,    69,    88,    58,    80,    83,    88,
      88,     4,    53,    59,    62,    58,    83,    27,    28,    29,
      30,    52,    55,    59,    62,    63,    64,    65,    66,    67,
      69,    70,    54,    60,    54,    88,    88,    20,    21,    24,
      88,    59,    57,    77,    21,    54,    54,    79,    80,    88,
      88,    88,    88,    88,     4,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    54,    70,     4,    69,    54,
      24,    58,    75,    76,    77,    70,     4,    59,    81,    54,
      60,    59,    56,    83,    53,    70,    77,    83,    69,    58,
      59,     4,     4,    70,    59,    81,    80,    11,    88,    53,
      70,    77,    75,    83,    54,    54,    70,    70,    53,    88,
      54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      85,    86,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    93,    93,    93,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     5,
       4,     2,     3,     2,     4,     1,     1,     1,     5,     4,
       5,     4,     5,     1,     3,     5,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     1,     4,     2,
       5,     5,     7,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       1,     1,     3,     1,     1,     7,     7,    10,     2,     3,
       3,     3,     1,     4,     3,     1,     1,     1,     1
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
  switch (yytype)
    {
          case 3: /* ROOT  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 872 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 4: /* IDENT  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 878 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 5: /* NUMBER  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 884 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 6: /* UNOP  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 890 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 7: /* BINOP  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 896 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 8: /* TOK_NEWSTRING  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 902 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 9: /* TOK_INDEX  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 908 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 10: /* TOK_IF  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 914 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 11: /* TOK_ELSE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 920 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 12: /* TOK_IFELSE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 926 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 13: /* TOK_ALLOC  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 932 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 14: /* TOK_NULLPTR  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 938 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 15: /* TOK_WHILE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 944 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 16: /* TOK_RETURN  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 950 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 17: /* TOK_RETURNVOID  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 956 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 18: /* TOK_FIELDLIST  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 962 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 19: /* TOK_INT  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 968 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 20: /* TOK_STRING  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 974 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 21: /* TOK_STRUCT  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 980 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 22: /* TOK_VOID  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 986 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 23: /* TOK_NULL  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 992 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 24: /* TOK_ARRAY  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 998 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 25: /* TOK_VARDECL  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1004 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 26: /* TOK_PARAMLIST  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1010 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 27: /* TOK_EQ  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1016 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 28: /* TOK_NE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1022 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 29: /* TOK_LE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1028 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 30: /* TOK_GE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1034 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 31: /* TOK_NOT  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1040 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 32: /* TOK_PTR  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1046 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 33: /* TOK_BLOCK  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1052 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 34: /* TOK_CALL  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1058 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 35: /* DECLID  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1064 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 36: /* TOK_FUNCTION  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1070 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 37: /* TOK_PROTOTYPE  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1076 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 38: /* TOK_POS  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1082 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 39: /* TOK_NEG  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1088 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 40: /* TOK_NEWARRAY  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1094 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 41: /* TOK_TYPEID  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1100 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 42: /* TOK_FIELD  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1106 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 43: /* TOK_ORD  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1112 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 44: /* TOK_CHR  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1118 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 45: /* TOK_ROOT  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1124 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 46: /* TOK_PARAM  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1130 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 47: /* BAD_TOK  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1136 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 48: /* TOK_EXC  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1142 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 49: /* TOK_INTCON  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1148 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 50: /* TOK_CHARCON  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1154 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 51: /* TOK_STRINGCON  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1160 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 52: /* TOK_ARROW  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1166 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 53: /* '('  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1172 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 54: /* ')'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1178 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 55: /* '['  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1184 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 56: /* ']'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1190 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 57: /* '{'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1196 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 58: /* '}'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1202 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 59: /* ';'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1208 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 60: /* ','  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1214 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 61: /* '.'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1220 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 62: /* '='  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1226 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 63: /* '+'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1232 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 64: /* '-'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1238 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 65: /* '*'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1244 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 66: /* '/'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1250 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 67: /* '%'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1256 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 68: /* '!'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1262 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 69: /* '<'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1268 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 70: /* '>'  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1274 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 72: /* start  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1280 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 73: /* program  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1286 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 74: /* structdef  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1292 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 75: /* structfields  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1298 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 76: /* type  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1304 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 77: /* plaintype  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1310 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 78: /* function  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1316 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 79: /* idents  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1322 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 80: /* ident  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1328 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 81: /* block  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1334 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 82: /* statements  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1340 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 83: /* statement  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1346 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 84: /* vardecl  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1352 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 85: /* while  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1358 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 86: /* ifelse  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1364 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 87: /* return  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1370 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 88: /* expr  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1376 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 89: /* alloc  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1382 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 90: /* call  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1388 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 91: /* params  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1394 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 92: /* variable  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1400 "yyparse.cpp" /* yacc.c:684  */
        break;

    case 93: /* constant  */
#line 23 "parser.y" /* yacc.c:684  */
      { astree::dump (yyoutput, ((*yyvaluep))); }
#line 1406 "yyparse.cpp" /* yacc.c:684  */
        break;


      default:
        break;
    }
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
  switch (yytype)
    {
          case 3: /* ROOT  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1752 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 4: /* IDENT  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1758 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 5: /* NUMBER  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1764 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 6: /* UNOP  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1770 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 7: /* BINOP  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1776 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 8: /* TOK_NEWSTRING  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1782 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 9: /* TOK_INDEX  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1788 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 10: /* TOK_IF  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1794 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TOK_ELSE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1800 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 12: /* TOK_IFELSE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1806 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 13: /* TOK_ALLOC  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1812 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 14: /* TOK_NULLPTR  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1818 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 15: /* TOK_WHILE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1824 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 16: /* TOK_RETURN  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1830 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 17: /* TOK_RETURNVOID  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1836 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 18: /* TOK_FIELDLIST  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1842 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 19: /* TOK_INT  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1848 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 20: /* TOK_STRING  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1854 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 21: /* TOK_STRUCT  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1860 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 22: /* TOK_VOID  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1866 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 23: /* TOK_NULL  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1872 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 24: /* TOK_ARRAY  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1878 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 25: /* TOK_VARDECL  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1884 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 26: /* TOK_PARAMLIST  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1890 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 27: /* TOK_EQ  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1896 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 28: /* TOK_NE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1902 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 29: /* TOK_LE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1908 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 30: /* TOK_GE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1914 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 31: /* TOK_NOT  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1920 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 32: /* TOK_PTR  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1926 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 33: /* TOK_BLOCK  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1932 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 34: /* TOK_CALL  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1938 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 35: /* DECLID  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1944 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 36: /* TOK_FUNCTION  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1950 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 37: /* TOK_PROTOTYPE  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1956 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 38: /* TOK_POS  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1962 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 39: /* TOK_NEG  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1968 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 40: /* TOK_NEWARRAY  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1974 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 41: /* TOK_TYPEID  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1980 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 42: /* TOK_FIELD  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1986 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 43: /* TOK_ORD  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1992 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 44: /* TOK_CHR  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 1998 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 45: /* TOK_ROOT  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2004 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 46: /* TOK_PARAM  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2010 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 47: /* BAD_TOK  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2016 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 48: /* TOK_EXC  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2022 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 49: /* TOK_INTCON  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2028 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 50: /* TOK_CHARCON  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2034 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 51: /* TOK_STRINGCON  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2040 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 52: /* TOK_ARROW  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2046 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 53: /* '('  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2052 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 54: /* ')'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2058 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 55: /* '['  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2064 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 56: /* ']'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2070 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 57: /* '{'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2076 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 58: /* '}'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2082 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 59: /* ';'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2088 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 60: /* ','  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2094 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 61: /* '.'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2100 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 62: /* '='  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2106 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 63: /* '+'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2112 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 64: /* '-'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2118 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 65: /* '*'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2124 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 66: /* '/'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2130 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 67: /* '%'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2136 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 68: /* '!'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2142 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 69: /* '<'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2148 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 70: /* '>'  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2154 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 72: /* start  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2160 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 73: /* program  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2166 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 74: /* structdef  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2172 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 75: /* structfields  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2178 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 76: /* type  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2184 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 77: /* plaintype  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2190 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 78: /* function  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2196 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 79: /* idents  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2202 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 80: /* ident  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2208 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 81: /* block  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2214 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 82: /* statements  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2220 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 83: /* statement  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2226 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 84: /* vardecl  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2232 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 85: /* while  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2238 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 86: /* ifelse  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2244 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 87: /* return  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2250 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 88: /* expr  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2256 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 89: /* alloc  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2262 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 90: /* call  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2268 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 91: /* params  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2274 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 92: /* variable  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2280 "yyparse.cpp" /* yacc.c:1257  */
        break;

    case 93: /* constant  */
#line 22 "parser.y" /* yacc.c:1257  */
      { destroy (((*yyvaluep))); }
#line 2286 "yyparse.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
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

/* User initialization code.  */
#line 18 "parser.y" /* yacc.c:1429  */
{
   parser::root = new astree (ROOT, {0, 0, 0}, "<>"); 
}

#line 2376 "yyparse.cpp" /* yacc.c:1429  */
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
        case 2:
#line 52 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) = nullptr; }
#line 2558 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2564 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2570 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2576 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 58 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2582 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 59 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0])); (yyval) = (yyvsp[-2]); }
#line 2588 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "parser.y" /* yacc.c:1646  */
    { (yyval) = parser::root; }
#line 2594 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 64 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-2]), (yyvsp[0]));
            (yyvsp[-3])->change_sym (TOK_TYPEID);
            (yyval) = (yyvsp[-4])->adopt ((yyvsp[-3]), (yyvsp[-1])); }
#line 2603 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-1]), (yyvsp[0]));
            (yyvsp[-2])->change_sym (TOK_TYPEID);
            (yyval) = (yyvsp[-3])->adopt ((yyvsp[-2])); }
#line 2612 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "parser.y" /* yacc.c:1646  */
    {
            (yyval) = new astree(TOK_FIELDLIST, (yyvsp[-1])->lloc, "");
            destroy ((yyvsp[0])); 
            (yyval) = (yyval)->adopt((yyvsp[-1])); }
#line 2621 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-1]));
            (yyval) = (yyvsp[0])->adopt ((yyvsp[-2])); }
#line 2629 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[0])->change_sym (TOK_FIELD);
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[0]));}
#line 2637 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 86 "parser.y" /* yacc.c:1646  */
    {
            destroy ((yyvsp[-2]), (yyvsp[0])); 
            (yyvsp[-1])->change_sym (TOK_FIELD);
            (yyval) = (yyvsp[-3])->adopt ((yyvsp[-1])); }
#line 2646 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2652 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2658 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2664 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "parser.y" /* yacc.c:1646  */
    {
            destroy((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
            (yyval) = (yyvsp[-4])->adopt ((yyvsp[-1])); }
#line 2672 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 100 "parser.y" /* yacc.c:1646  */
    {
            destroy ((yyvsp[-1]));  
            (yyval) = new astree(TOK_FUNCTION, (yyvsp[-3])->lloc, "");
            (yyvsp[-2])->change_sym(TOK_PARAM);
            (yyval) = (yyval)->adopt ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0])); }
#line 2682 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "parser.y" /* yacc.c:1646  */
    {
            destroy ((yyvsp[-1])); 
            (yyval) = new astree(TOK_FUNCTION, (yyvsp[-4])->lloc, "");
            (yyvsp[-3])->change_sym (TOK_PARAM);
            (yyvsp[-3])->adopt ((yyvsp[-2]));
            (yyval) = (yyval)->adopt ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[0])); }
#line 2693 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 111 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-1]), (yyvsp[0]));
            (yyval) = new astree(TOK_PROTOTYPE, (yyvsp[-3])->lloc, "");
            (yyvsp[-2])->change_sym (TOK_PARAM);
            (yyval) = (yyval)->adopt ((yyvsp[-3]), (yyvsp[-2])); }
#line 2703 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "parser.y" /* yacc.c:1646  */
    { 
            destroy((yyvsp[-1]), (yyvsp[0]));
            (yyval) = new astree(TOK_FUNCTION, (yyvsp[-4])->lloc, "");
            (yyvsp[-3])->change_sym (TOK_PARAM);
            (yyvsp[-3])->adopt ((yyvsp[-2]));
            (yyval) = (yyval)->adopt ((yyvsp[-4]), (yyvsp[-3])); }
#line 2714 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 124 "parser.y" /* yacc.c:1646  */
    { 
            (yyval) = new astree(TOK_PARAMLIST, (yyvsp[0])->lloc, "");
            (yyval) = (yyval)->adopt ((yyvsp[0])); }
#line 2722 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 127 "parser.y" /* yacc.c:1646  */
    { 
            
            destroy ((yyvsp[-1]));
            (yyval) = (yyvsp[-2])->adopt ((yyvsp[0])); }
#line 2731 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "parser.y" /* yacc.c:1646  */
    {
            destroy((yyvsp[-3]), (yyvsp[-1])); 
            (yyvsp[0])->change_sym (DECLID);
            (yyval) = (yyvsp[-4])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 2740 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "parser.y" /* yacc.c:1646  */
    { 
            (yyvsp[0])->change_sym (DECLID);
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2748 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-1])->change_sym (TOK_BLOCK);
            (yyval) = (yyvsp[-1]); }
#line 2757 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-1])->change_sym (TOK_BLOCK);
            (yyval) = (yyvsp[-1]); }
#line 2766 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "parser.y" /* yacc.c:1646  */
    { 
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2773 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "parser.y" /* yacc.c:1646  */
    { 
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[0])); }
#line 2780 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2786 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2792 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2798 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 161 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2804 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 162 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2810 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 163 "parser.y" /* yacc.c:1646  */
    { destroy ((yyvsp[0])); (yyval) = (yyvsp[-1]); }
#line 2816 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 164 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2822 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 167 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-2])->change_sym (TOK_VARDECL);
            (yyval) = (yyvsp[-2])->adopt ((yyvsp[-3]), (yyvsp[-1])); }
#line 2831 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 171 "parser.y" /* yacc.c:1646  */
    {
            (yyval) = new astree(TOK_VARDECL, (yyvsp[-1])->lloc, "");
            destroy ((yyvsp[0]));
            (yyval) = (yyval)->adopt((yyvsp[-1]));}
#line 2840 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-3]), (yyvsp[-1]));
            (yyval) = (yyvsp[-4])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2848 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 182 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-3]), (yyvsp[-1]));
            (yyval) =(yyvsp[-4])->adopt((yyvsp[-2]),(yyvsp[0])); }
#line 2856 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 185 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
            (yyvsp[-6])->change_sym (TOK_IFELSE);
            (yyval) = (yyvsp[-6])->adopt ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0])); }
#line 2865 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-1])->change_sym (TOK_RETURNVOID);
            (yyval) = (yyvsp[-1]); }
#line 2874 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 195 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyval) = (yyvsp[-2])->adopt ((yyvsp[-1])); }
#line 2882 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2888 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2894 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2900 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2906 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2912 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2918 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2924 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2930 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2936 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2942 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2948 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[-2]), (yyvsp[0])); }
#line 2954 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2960 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2966 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1])->adopt((yyvsp[0])); }
#line 2972 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2978 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2984 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 217 "parser.y" /* yacc.c:1646  */
    { destroy((yyvsp[-2]), (yyvsp[0]));
              (yyval) = (yyvsp[-1]); }
#line 2991 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 2997 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3003 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 223 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-2]));
            destroy ((yyvsp[-1]), (yyvsp[0]));
            (yyvsp[-3])->change_sym (TOK_TYPEID);
            (yyval) = (yyvsp[-6])->adopt ((yyvsp[-3])); }
#line 3013 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 228 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-5]), (yyvsp[-3]), (yyvsp[-2]));
            destroy ((yyvsp[0]));
            (yyval) = (yyvsp[-6])->adopt ((yyvsp[-4]), (yyvsp[-1])); }
#line 3022 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 232 "parser.y" /* yacc.c:1646  */
    { 
            printf("\n WE IN HERE");
            destroy ((yyvsp[-8]), (yyvsp[-6]));
            destroy ((yyvsp[-4]), (yyvsp[-3]));
            destroy ((yyvsp[-2]), (yyvsp[0]));
            (yyvsp[-7])->adopt ((yyvsp[-5]));
            (yyval) = (yyvsp[-9])->adopt ((yyvsp[-7]), (yyvsp[-1])); }
#line 3034 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 241 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-1])->change_sym (TOK_CALL);
            (yyval) = (yyvsp[-1]); }
#line 3043 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 245 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-1])->change_sym (TOK_CALL);
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2])); }
#line 3052 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 251 "parser.y" /* yacc.c:1646  */
    { 
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 3059 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 253 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[-1]));
            (yyval) = (yyvsp[-2])->adopt ((yyvsp[0])); }
#line 3067 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3073 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 259 "parser.y" /* yacc.c:1646  */
    { 
            destroy ((yyvsp[0]));
            (yyvsp[-2])->change_sym (TOK_INDEX);
            (yyval) = (yyvsp[-2])->adopt ((yyvsp[-3]), (yyvsp[-1])); }
#line 3082 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 263 "parser.y" /* yacc.c:1646  */
    { 
            (yyvsp[0])->change_sym(TOK_FIELD);
            (yyval) = (yyvsp[-1])->adopt ((yyvsp[-2]), (yyvsp[0])); }
#line 3090 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3096 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 269 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3102 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3108 "yyparse.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 3114 "yyparse.cpp" /* yacc.c:1646  */
    break;


#line 3118 "yyparse.cpp" /* yacc.c:1646  */
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
#line 274 "parser.y" /* yacc.c:1906  */


const char* parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}

bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}
