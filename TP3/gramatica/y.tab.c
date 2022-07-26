/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "translate.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include "../headers/simbolo.h"
    #include "../headers/arvore.h"
    #include "../headers/escopo.h"
    extern int yylineno;
    extern char* yytext;

    void yyerror(char *c);
    int yylex(void);
    void inserir_tipo(TipoPrimitivo entrada);
    void adicionar_tabela(char c,TabelaDeSimbolos* tabela,TabelaDeSimbolos* global);
    EscopoPonteiro aprofundarEscopo(EscopoPonteiro escopoAcima);
    EscopoPonteiro voltarEscopo(EscopoPonteiro escopo);

    int ImprimirFechamentoEscopo = -1;
    TipoPrimitivo tipo;
    TabelaDeSimbolos *tabelaGlobal;
    EscopoPonteiro escopoAtual;
    struct No *raiz;


#line 96 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    MAIN_TOKEN = 258,
    INT_TYPE = 259,
    FLOAT_TYPE = 260,
    STRING_TYPE = 261,
    BOOLEAN_TYPE = 262,
    VECTOR_TYPE = 263,
    CHAR_TYPE = 264,
    DATE_TYPE = 265,
    RELACIONAL_IGUALDADE = 266,
    RELACIONAL_NEGACAO = 267,
    RELACIONAL_MAIORQUE = 268,
    RELACIONAL_MENORQUE = 269,
    RELACIONAL_MAIORIGUAL = 270,
    RELACIONAL_MENORIGUAL = 271,
    RELACIONAL_OR = 272,
    RELACIONAL_AND = 273,
    MATEMATICO_SOMA = 274,
    MATEMATICO_SUBTRACAO = 275,
    MATEMATICO_MULTIPLICACAO = 276,
    MATEMATICO_DIVISAO = 277,
    MATEMATICO_MOD = 278,
    MATEMATICO_POW = 279,
    MATEMATICO_INCREMENTO = 280,
    MATEMATICO_DECREMENTO = 281,
    DESCONHECIDO = 282,
    IF_TOKEN = 283,
    ELSE_IF_TOKEN = 284,
    ELSE_TOKEN = 285,
    FOR_TOKEN = 286,
    WHILE_TOKEN = 287,
    RETURN_TOKEN = 288,
    BREAK_TOKEN = 289,
    CREATE_FUNC_TOKEN = 290,
    PRINT_TOKEN = 291,
    SCANF_TOKEN = 292,
    ABRIR_PARENTESES_TOKEN = 293,
    FECHAR_PARENTESES_TOKEN = 294,
    ABRIR_CHAVE_TOKEN = 295,
    FECHAR_CHAVE_TOKEN = 296,
    ABRIR_COLCHETE_TOKEN = 297,
    FECHAR_COLCHETE_TOKEN = 298,
    ATRIB_TOKEN = 299,
    VIRGULA_TOKEN = 300,
    VAR_TOKEN = 301,
    COMMENT_TOKEN = 302,
    EOL_TOKEN = 303,
    INT = 304,
    FLOAT = 305,
    DATE = 306,
    STRING = 307,
    CHAR = 308,
    BOOLEAN = 309,
    VECTOR = 310
  };
#endif
/* Tokens.  */
#define MAIN_TOKEN 258
#define INT_TYPE 259
#define FLOAT_TYPE 260
#define STRING_TYPE 261
#define BOOLEAN_TYPE 262
#define VECTOR_TYPE 263
#define CHAR_TYPE 264
#define DATE_TYPE 265
#define RELACIONAL_IGUALDADE 266
#define RELACIONAL_NEGACAO 267
#define RELACIONAL_MAIORQUE 268
#define RELACIONAL_MENORQUE 269
#define RELACIONAL_MAIORIGUAL 270
#define RELACIONAL_MENORIGUAL 271
#define RELACIONAL_OR 272
#define RELACIONAL_AND 273
#define MATEMATICO_SOMA 274
#define MATEMATICO_SUBTRACAO 275
#define MATEMATICO_MULTIPLICACAO 276
#define MATEMATICO_DIVISAO 277
#define MATEMATICO_MOD 278
#define MATEMATICO_POW 279
#define MATEMATICO_INCREMENTO 280
#define MATEMATICO_DECREMENTO 281
#define DESCONHECIDO 282
#define IF_TOKEN 283
#define ELSE_IF_TOKEN 284
#define ELSE_TOKEN 285
#define FOR_TOKEN 286
#define WHILE_TOKEN 287
#define RETURN_TOKEN 288
#define BREAK_TOKEN 289
#define CREATE_FUNC_TOKEN 290
#define PRINT_TOKEN 291
#define SCANF_TOKEN 292
#define ABRIR_PARENTESES_TOKEN 293
#define FECHAR_PARENTESES_TOKEN 294
#define ABRIR_CHAVE_TOKEN 295
#define FECHAR_CHAVE_TOKEN 296
#define ABRIR_COLCHETE_TOKEN 297
#define FECHAR_COLCHETE_TOKEN 298
#define ATRIB_TOKEN 299
#define VIRGULA_TOKEN 300
#define VAR_TOKEN 301
#define COMMENT_TOKEN 302
#define EOL_TOKEN 303
#define INT 304
#define FLOAT 305
#define DATE 306
#define STRING 307
#define CHAR 308
#define BOOLEAN 309
#define VECTOR 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "translate.y"

    struct nomeVariavel{
        char nome[100];
        struct No *np;
    } NoObjeto;

#line 265 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    76,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    95,    96,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   113,
     114,   118,   119,   120,   121,   122,   123,   124,   128,   129,
     133,   134,   138,   139,   143,   147,   147,   151,   152,   153,
     154,   155,   156,   157,   158,   161,   162,   163,   164,   165,
     166,   169,   169,   173,   176,   177,   178,   181,   182,   185,
     186,   189,   190,   191,   195,   196,   197,   200,   203,   206,
     207,   210
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN_TOKEN", "INT_TYPE", "FLOAT_TYPE",
  "STRING_TYPE", "BOOLEAN_TYPE", "VECTOR_TYPE", "CHAR_TYPE", "DATE_TYPE",
  "RELACIONAL_IGUALDADE", "RELACIONAL_NEGACAO", "RELACIONAL_MAIORQUE",
  "RELACIONAL_MENORQUE", "RELACIONAL_MAIORIGUAL", "RELACIONAL_MENORIGUAL",
  "RELACIONAL_OR", "RELACIONAL_AND", "MATEMATICO_SOMA",
  "MATEMATICO_SUBTRACAO", "MATEMATICO_MULTIPLICACAO", "MATEMATICO_DIVISAO",
  "MATEMATICO_MOD", "MATEMATICO_POW", "MATEMATICO_INCREMENTO",
  "MATEMATICO_DECREMENTO", "DESCONHECIDO", "IF_TOKEN", "ELSE_IF_TOKEN",
  "ELSE_TOKEN", "FOR_TOKEN", "WHILE_TOKEN", "RETURN_TOKEN", "BREAK_TOKEN",
  "CREATE_FUNC_TOKEN", "PRINT_TOKEN", "SCANF_TOKEN",
  "ABRIR_PARENTESES_TOKEN", "FECHAR_PARENTESES_TOKEN", "ABRIR_CHAVE_TOKEN",
  "FECHAR_CHAVE_TOKEN", "ABRIR_COLCHETE_TOKEN", "FECHAR_COLCHETE_TOKEN",
  "ATRIB_TOKEN", "VIRGULA_TOKEN", "VAR_TOKEN", "COMMENT_TOKEN",
  "EOL_TOKEN", "INT", "FLOAT", "DATE", "STRING", "CHAR", "BOOLEAN",
  "VECTOR", "$accept", "program", "expr", "atribuicao", "aritmetica",
  "numero", "relacional", "valorBool", "tipos", "declaracao", "varNames",
  "varNomesETipos", "funcao", "criarFuncao", "$@1", "anyTipe", "comando",
  "corpo", "$@2", "condicional", "if", "else", "elseIF", "tabulacao",
  "repeticao", "imprimir", "input", "retornar", "comment", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-41)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -29,    18,  -132,  -132,  -132,   223,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,   -23,     2,     4,   241,  -132,    -2,
       7,    11,   -33,    15,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,   119,  -132,   172,  -132,  -132,   120,     6,
    -132,   224,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,    54,   -33,    54,    16,  -132,   278,  -132,  -132,
    -132,   223,    22,    16,  -132,  -132,    55,    45,   223,  -132,
     223,   -33,   -33,   -33,   -33,   -33,   -33,  -132,  -132,    54,
      54,    54,    54,    54,    54,    54,    54,    52,    61,  -132,
     278,    60,  -132,    12,    70,    74,   171,  -132,  -132,  -132,
      21,   223,   190,   190,   138,   138,   278,   138,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,   223,    68,   -29,   -29,
     -33,   -29,   258,  -132,  -132,   223,  -132,    67,  -132,    63,
    -132,    72,    62,  -132,    -9,   -29,  -132,   -29,   258,    78,
     -29,  -132,  -132,    67,  -132,  -132,    75,    54,  -132,    -7,
    -132,    81,    92,  -132,   -29,    54,  -132,   100,   -29,    67,
      94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    71,     2,     1,    74,    41,    42,    44,
      45,    46,    43,    47,     0,     0,     0,     0,    70,     0,
       0,     0,     0,    16,    91,     9,    28,    27,    63,    60,
      59,    39,    62,     0,    11,     3,    15,     4,    29,     0,
       5,     6,     8,    12,     7,    65,    73,    66,    67,    68,
      69,    10,     0,     0,     0,    16,    61,    90,    17,    89,
      55,    74,     0,    16,    28,    27,     0,     0,    74,    72,
      13,     0,     0,     0,     0,     0,     0,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    48,    39,
      40,     0,    17,     0,     0,     0,     0,    88,    24,    50,
       0,    14,    18,    19,    21,    20,    22,    23,    31,    32,
      33,    34,    35,    36,    38,    37,    74,     0,     0,     0,
       0,     0,     0,    87,    54,    49,    51,    83,    84,     0,
      86,     0,     0,    81,    78,     0,    52,     0,     0,     0,
       0,    82,    75,    83,    85,    56,     0,     0,    77,    78,
      53,     0,     0,    76,     0,     0,    79,     0,     0,    83,
      80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,    -5,  -132,    -3,  -132,   -50,   226,  -113,  -132,
      73,  -132,    -6,  -132,  -132,   126,  -132,  -111,  -132,  -132,
    -132,    -4,  -132,  -131,  -132,  -132,  -132,  -132,  -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    70,    34,    90,    36,    37,    38,    39,    40,
      88,   132,    58,    42,    95,    43,    44,     4,     6,    45,
      46,   142,   143,   134,    47,    48,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    33,    91,    35,    94,    22,     1,   127,   128,   131,
     130,     3,   149,    63,    57,    52,    64,    65,     5,    66,
     139,   140,   152,   140,   144,   146,   145,    41,   160,   148,
      35,    71,    72,    73,    74,    75,    76,    77,    78,   141,
      53,   141,    54,   156,    60,    61,    92,   159,    92,    62,
      93,   119,    87,    67,    67,    41,    96,   120,    35,    68,
     124,    97,    41,   101,    41,    35,   117,    35,   102,   103,
     104,   105,   106,   107,    71,    72,    73,    74,    75,    76,
      77,    78,    71,    72,    73,    74,    75,    76,    77,    78,
      41,    99,    22,    35,    98,    41,   116,   151,    35,   118,
      63,   137,   135,    64,    65,   157,   117,   138,    89,   121,
      41,   125,   122,    35,   126,   133,   147,   129,   136,    41,
     154,   150,    35,     7,     8,     9,    10,    11,    12,    13,
     155,    79,    80,    81,    82,    83,    84,    85,    86,   158,
     100,    92,   141,    59,     0,   153,     0,    14,     0,    92,
      15,    16,    17,    18,    19,    20,    21,    22,     0,     0,
      69,    75,    76,    77,    78,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     7,     8,     9,    10,    11,
      12,    13,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,    71,    72,    73,    74,    75,    76,    77,    78,    14,
       0,     0,    15,    16,    17,    18,    19,    20,    21,    22,
     123,    73,    74,    75,    76,    77,    78,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     7,     8,     9,
      10,    11,    12,    13,     0,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,    14,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     7,     8,     9,    10,    11,    12,    13,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    22,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
      26,    27,    28,    29,    30,    56,    32,    71,    72,    73,
      74,    75,    76,    77,    78,   108,   109,   110,   111,   112,
     113,   114,   115
};

static const yytype_int16 yycheck[] =
{
       6,     6,    52,     6,    54,    38,     3,   118,   119,   122,
     121,    40,   143,    46,    17,    38,    49,    50,     0,    22,
      29,    30,    29,    30,   135,   138,   137,    33,   159,   140,
      33,    19,    20,    21,    22,    23,    24,    25,    26,    48,
      38,    48,    38,   154,    46,    38,    52,   158,    54,    38,
      53,    39,    46,    38,    38,    61,    61,    45,    61,    44,
      39,    39,    68,    68,    70,    68,    45,    70,    71,    72,
      73,    74,    75,    76,    19,    20,    21,    22,    23,    24,
      25,    26,    19,    20,    21,    22,    23,    24,    25,    26,
      96,    46,    38,    96,    39,   101,    44,   147,   101,    39,
      46,    39,    39,    49,    50,   155,    45,    45,    54,    39,
     116,   116,    38,   116,    46,    48,    38,   120,    46,   125,
      39,    46,   125,     4,     5,     6,     7,     8,     9,    10,
      38,    11,    12,    13,    14,    15,    16,    17,    18,    39,
      67,   147,    48,    17,    -1,   149,    -1,    28,    -1,   155,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    23,    24,    25,    26,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     4,     5,     6,     7,     8,
       9,    10,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    28,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    21,    22,    23,    24,    25,    26,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     4,     5,     6,
       7,     8,     9,    10,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    28,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,     4,     5,     6,     7,     8,     9,    10,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    19,    20,    21,
      22,    23,    24,    25,    26,    79,    80,    81,    82,    83,
      84,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    57,    40,    73,     0,    74,     4,     5,     6,
       7,     8,     9,    10,    28,    31,    32,    33,    34,    35,
      36,    37,    38,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    58,    59,    60,    61,    62,    63,    64,
      65,    68,    69,    71,    72,    75,    76,    80,    81,    82,
      83,    84,    38,    38,    38,    46,    54,    60,    68,    71,
      46,    38,    38,    46,    49,    50,    60,    38,    44,    41,
      58,    19,    20,    21,    22,    23,    24,    25,    26,    11,
      12,    13,    14,    15,    16,    17,    18,    46,    66,    54,
      60,    62,    68,    60,    62,    70,    58,    39,    39,    46,
      66,    58,    60,    60,    60,    60,    60,    60,    63,    63,
      63,    63,    63,    63,    63,    63,    44,    45,    39,    39,
      45,    39,    38,    39,    39,    58,    46,    73,    73,    60,
      73,    64,    67,    48,    79,    39,    46,    39,    45,    29,
      30,    48,    77,    78,    73,    73,    64,    38,    73,    79,
      46,    62,    29,    77,    39,    38,    73,    62,    39,    73,
      79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    70,    69,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    74,    73,    75,    76,    76,    76,    77,    77,    78,
      78,    79,    79,    79,    80,    80,    80,    81,    82,    83,
      83,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     3,     2,     4,     4,     0,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     0,     7,     9,     2,     0,     5,
       8,     1,     2,     0,     5,     7,     5,     4,     3,     2,
       2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 58 "translate.y"
                     {(yyval.NoObjeto).np = criaNo(NULL, (yyvsp[0].NoObjeto).np, "main"); raiz = (yyval.NoObjeto).np;}
#line 1596 "y.tab.c"
    break;

  case 3:
#line 62 "translate.y"
               {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1602 "y.tab.c"
    break;

  case 4:
#line 63 "translate.y"
                 {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1608 "y.tab.c"
    break;

  case 5:
#line 64 "translate.y"
                 {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1614 "y.tab.c"
    break;

  case 6:
#line 65 "translate.y"
             {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1620 "y.tab.c"
    break;

  case 7:
#line 66 "translate.y"
              {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1626 "y.tab.c"
    break;

  case 8:
#line 67 "translate.y"
                  {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1632 "y.tab.c"
    break;

  case 9:
#line 68 "translate.y"
                {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1638 "y.tab.c"
    break;

  case 10:
#line 69 "translate.y"
              {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1644 "y.tab.c"
    break;

  case 11:
#line 70 "translate.y"
                 {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1650 "y.tab.c"
    break;

  case 12:
#line 71 "translate.y"
              {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1656 "y.tab.c"
    break;

  case 13:
#line 72 "translate.y"
                {(yyval.NoObjeto).np = criaNo((yyvsp[-1].NoObjeto).np, (yyvsp[0].NoObjeto).np, "Expressões");}
#line 1662 "y.tab.c"
    break;

  case 14:
#line 76 "translate.y"
                               {(yyvsp[-2].NoObjeto).np = criaNo(NULL, NULL, (yyvsp[-2].NoObjeto).nome); (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "=");}
#line 1668 "y.tab.c"
    break;

  case 15:
#line 80 "translate.y"
           {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1674 "y.tab.c"
    break;

  case 16:
#line 81 "translate.y"
                {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1680 "y.tab.c"
    break;

  case 17:
#line 82 "translate.y"
             {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1686 "y.tab.c"
    break;

  case 18:
#line 83 "translate.y"
                                            {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "+");}
#line 1692 "y.tab.c"
    break;

  case 19:
#line 84 "translate.y"
                                                 {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "-");}
#line 1698 "y.tab.c"
    break;

  case 20:
#line 85 "translate.y"
                                               {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "/");}
#line 1704 "y.tab.c"
    break;

  case 21:
#line 86 "translate.y"
                                                     {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "*");}
#line 1710 "y.tab.c"
    break;

  case 22:
#line 87 "translate.y"
                                           {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "%");}
#line 1716 "y.tab.c"
    break;

  case 23:
#line 88 "translate.y"
                                           {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, "**");}
#line 1722 "y.tab.c"
    break;

  case 24:
#line 89 "translate.y"
                                                                {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[-1].NoObjeto).nome);}
#line 1728 "y.tab.c"
    break;

  case 25:
#line 90 "translate.y"
                                       {(yyval.NoObjeto).np = criaNo((yyvsp[-1].NoObjeto).np, NULL, "++" );}
#line 1734 "y.tab.c"
    break;

  case 26:
#line 91 "translate.y"
                                       {(yyval.NoObjeto).np = criaNo((yyvsp[-1].NoObjeto).np, NULL, "--");}
#line 1740 "y.tab.c"
    break;

  case 27:
#line 95 "translate.y"
          {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1746 "y.tab.c"
    break;

  case 28:
#line 96 "translate.y"
          {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1752 "y.tab.c"
    break;

  case 29:
#line 100 "translate.y"
              {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1758 "y.tab.c"
    break;

  case 30:
#line 101 "translate.y"
              {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1764 "y.tab.c"
    break;

  case 31:
#line 102 "translate.y"
                                               { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1770 "y.tab.c"
    break;

  case 32:
#line 103 "translate.y"
                                             { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1776 "y.tab.c"
    break;

  case 33:
#line 104 "translate.y"
                                              { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1782 "y.tab.c"
    break;

  case 34:
#line 105 "translate.y"
                                              { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1788 "y.tab.c"
    break;

  case 35:
#line 106 "translate.y"
                                                { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1794 "y.tab.c"
    break;

  case 36:
#line 107 "translate.y"
                                                { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1800 "y.tab.c"
    break;

  case 37:
#line 108 "translate.y"
                                         { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1806 "y.tab.c"
    break;

  case 38:
#line 109 "translate.y"
                                        { (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1812 "y.tab.c"
    break;

  case 39:
#line 113 "translate.y"
            {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1818 "y.tab.c"
    break;

  case 40:
#line 114 "translate.y"
                 {(yyval.NoObjeto).np = (yyvsp[0].NoObjeto).np;}
#line 1824 "y.tab.c"
    break;

  case 41:
#line 118 "translate.y"
             {inserir_tipo(T_INT); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1830 "y.tab.c"
    break;

  case 42:
#line 119 "translate.y"
                {inserir_tipo(T_FLOAT);  (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1836 "y.tab.c"
    break;

  case 43:
#line 120 "translate.y"
               {inserir_tipo(T_CHAR);  (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1842 "y.tab.c"
    break;

  case 44:
#line 121 "translate.y"
                     {inserir_tipo(T_STRING);  (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1848 "y.tab.c"
    break;

  case 45:
#line 122 "translate.y"
                      {inserir_tipo(T_BOOLEAN);  (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1854 "y.tab.c"
    break;

  case 46:
#line 123 "translate.y"
                     {inserir_tipo(T_ARRAY);  (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1860 "y.tab.c"
    break;

  case 47:
#line 124 "translate.y"
                   {inserir_tipo(T_DATE);  (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1866 "y.tab.c"
    break;

  case 48:
#line 128 "translate.y"
                   {(yyvsp[0].NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome); (yyval.NoObjeto).np = criaNo((yyvsp[0].NoObjeto).np, NULL, (yyvsp[-1].NoObjeto).nome);}
#line 1872 "y.tab.c"
    break;

  case 49:
#line 129 "translate.y"
                                       {(yyvsp[-2].NoObjeto).np = criaNo(NULL, NULL, (yyvsp[-2].NoObjeto).nome); (yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-3].NoObjeto).nome);}
#line 1878 "y.tab.c"
    break;

  case 50:
#line 133 "translate.y"
              {adicionar_tabela('v',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1884 "y.tab.c"
    break;

  case 51:
#line 134 "translate.y"
                                       {adicionar_tabela('v',escopoAtual->tabela,tabelaGlobal);}
#line 1890 "y.tab.c"
    break;

  case 52:
#line 138 "translate.y"
                    {adicionar_tabela('v',escopoAtual->tabela,tabelaGlobal); (yyvsp[0].NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome); (yyval.NoObjeto).np = criaNo(NULL,(yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1896 "y.tab.c"
    break;

  case 53:
#line 139 "translate.y"
                                                   {adicionar_tabela('v',escopoAtual->tabela,tabelaGlobal); (yyvsp[0].NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome); (yyval.NoObjeto).np = criaNo((yyvsp[-3].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1902 "y.tab.c"
    break;

  case 54:
#line 143 "translate.y"
                                                                      {(yyval.NoObjeto).np = criaNo((yyvsp[-3].NoObjeto).np, (yyvsp[-1].NoObjeto).np, (yyval.NoObjeto).nome);}
#line 1908 "y.tab.c"
    break;

  case 55:
#line 147 "translate.y"
                                {adicionar_tabela('f',escopoAtual->tabela,tabelaGlobal);}
#line 1914 "y.tab.c"
    break;

  case 56:
#line 147 "translate.y"
                                                                                                                                                              {(yyvsp[-5].NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, NULL, (yyvsp[-5].NoObjeto).nome); (yyval.NoObjeto).np = criaNo((yyvsp[-5].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-6].NoObjeto).nome);}
#line 1920 "y.tab.c"
    break;

  case 57:
#line 151 "translate.y"
        {inserir_tipo(T_INT); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1926 "y.tab.c"
    break;

  case 58:
#line 152 "translate.y"
                {inserir_tipo(T_FLOAT); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1932 "y.tab.c"
    break;

  case 59:
#line 153 "translate.y"
               {inserir_tipo(T_CHAR); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1938 "y.tab.c"
    break;

  case 60:
#line 154 "translate.y"
                 {inserir_tipo(T_STRING); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1944 "y.tab.c"
    break;

  case 61:
#line 155 "translate.y"
                  {inserir_tipo(T_BOOLEAN); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1950 "y.tab.c"
    break;

  case 62:
#line 156 "translate.y"
                 {inserir_tipo(T_ARRAY); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1956 "y.tab.c"
    break;

  case 63:
#line 157 "translate.y"
               {inserir_tipo(T_DATE); adicionar_tabela('c',escopoAtual->tabela,tabelaGlobal); (yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1962 "y.tab.c"
    break;

  case 70:
#line 166 "translate.y"
                  {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[0].NoObjeto).nome);}
#line 1968 "y.tab.c"
    break;

  case 71:
#line 169 "translate.y"
                      {escopoAtual = aprofundarEscopo(escopoAtual);}
#line 1974 "y.tab.c"
    break;

  case 72:
#line 169 "translate.y"
                                                                                             {escopoAtual = voltarEscopo(escopoAtual);  (yyval.NoObjeto).np = (yyvsp[-1].NoObjeto).np;}
#line 1980 "y.tab.c"
    break;

  case 75:
#line 177 "translate.y"
                                                                                                  {struct No *temp =  criaNo((yyvsp[-4].NoObjeto).np, (yyvsp[-2].NoObjeto).np, (yyvsp[-6].NoObjeto).nome); (yyval.NoObjeto).np = criaNo(temp, (yyvsp[0].NoObjeto).np,"Mabel Label");}
#line 1986 "y.tab.c"
    break;

  case 76:
#line 178 "translate.y"
                                                                                                                    { struct No *temp =  criaNo((yyvsp[-6].NoObjeto).np, (yyvsp[-4].NoObjeto).np, (yyvsp[-8].NoObjeto).nome); struct No *temp2 = criaNo(temp, (yyvsp[-2].NoObjeto).np,(yyvsp[-2].NoObjeto).nome);(yyval.NoObjeto).np = criaNo(temp2,(yyvsp[0].NoObjeto).np,"Sable Label");}
#line 1992 "y.tab.c"
    break;

  case 77:
#line 181 "translate.y"
                     {(yyval.NoObjeto).np = criaNo(NULL, (yyvsp[0].NoObjeto).np, (yyvsp[-1].NoObjeto).nome);}
#line 1998 "y.tab.c"
    break;

  case 78:
#line 182 "translate.y"
      {(yyval.NoObjeto).np = NULL;}
#line 2004 "y.tab.c"
    break;

  case 79:
#line 185 "translate.y"
                                                                                  {(yyval.NoObjeto).np =  criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-4].NoObjeto).nome);}
#line 2010 "y.tab.c"
    break;

  case 80:
#line 186 "translate.y"
                                                                                                                   {(yyvsp[-5].NoObjeto).np =  criaNo((yyvsp[-3].NoObjeto).np, (yyvsp[-1].NoObjeto).np, (yyvsp[-5].NoObjeto).nome); (yyval.NoObjeto).np = criaNo((yyvsp[-7].NoObjeto).np, (yyvsp[-5].NoObjeto).np, (yyvsp[-7].NoObjeto).nome);}
#line 2016 "y.tab.c"
    break;

  case 84:
#line 195 "translate.y"
                                                                              {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-4].NoObjeto).nome);}
#line 2022 "y.tab.c"
    break;

  case 85:
#line 196 "translate.y"
                                                                                                         {struct No *temp =  criaNo((yyvsp[-4].NoObjeto).np, (yyvsp[-2].NoObjeto).np, "Condicoes"); (yyval.NoObjeto).np = criaNo(temp, (yyvsp[0].NoObjeto).np, (yyvsp[-6].NoObjeto).nome);}
#line 2028 "y.tab.c"
    break;

  case 86:
#line 197 "translate.y"
                                                                                  {(yyval.NoObjeto).np = criaNo((yyvsp[-2].NoObjeto).np, (yyvsp[0].NoObjeto).np, (yyvsp[-4].NoObjeto).nome);}
#line 2034 "y.tab.c"
    break;

  case 87:
#line 200 "translate.y"
                                                                    {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[-3].NoObjeto).nome);}
#line 2040 "y.tab.c"
    break;

  case 88:
#line 203 "translate.y"
                                                                {(yyval.NoObjeto).np = criaNo(NULL, NULL, (yyvsp[-2].NoObjeto).nome);}
#line 2046 "y.tab.c"
    break;

  case 89:
#line 206 "translate.y"
                         {(yyval.NoObjeto).np = criaNo((yyvsp[0].NoObjeto).np,NULL, (yyvsp[-1].NoObjeto).nome);}
#line 2052 "y.tab.c"
    break;

  case 90:
#line 207 "translate.y"
                              {(yyval.NoObjeto).np = criaNo((yyvsp[0].NoObjeto).np,NULL, (yyvsp[-1].NoObjeto).nome);}
#line 2058 "y.tab.c"
    break;


#line 2062 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 212 "translate.y"


void yyerror(char *c){
    printf("\nErro ao compilar o código!\n Mais detalhes abaixo:");
    fprintf(stderr,"Erro na linha %d \n Tipo do erro: %s\n",yylineno,c);
    exit(0);
}

void inserir_tipo(TipoPrimitivo entrada) {
	tipo = entrada;
}

void adicionar_tabela(char c,TabelaDeSimbolos* tabela,TabelaDeSimbolos* global){
    int S = 0;
    S = simboloExiste(tabela,strdup(yytext));
    //printf("\n%d\n",S);

    if(S == 0){
        if(c == 'v'){
            adicionaSimboloNaTabela(tabela, strdup(yytext), tipo, T_VARIAVEL, yylineno);
            adicionaSimboloNaTabela(global, strdup(yytext), tipo, T_VARIAVEL, yylineno);
        }
        else if(c == 'f'){
            adicionaSimboloNaTabela(tabela, strdup(yytext), T_DESCONHECIDO, T_FUNCAO, yylineno);
            adicionaSimboloNaTabela(global, strdup(yytext), T_DESCONHECIDO, T_FUNCAO, yylineno);
        }
        else if(c == 'c'){
            adicionaSimboloNaTabela(tabela, strdup(yytext), tipo, T_CONSTANTE, yylineno);
            adicionaSimboloNaTabela(global, strdup(yytext), tipo, T_CONSTANTE, yylineno);
        }
        else if(c == 'p'){
            adicionaSimboloNaTabela(tabela, strdup(yytext), T_DESCONHECIDO, T_PALAVRACHAVE, yylineno);
            adicionaSimboloNaTabela(global, strdup(yytext), T_DESCONHECIDO, T_PALAVRACHAVE, yylineno);
        }
        else {
            adicionaSimboloNaTabela(tabela, strdup(yytext), T_DESCONHECIDO, T_DESCONHECIDO_TOKEN, yylineno);
            adicionaSimboloNaTabela(global, strdup(yytext), T_DESCONHECIDO, T_DESCONHECIDO_TOKEN, yylineno );
        }
    }
}

EscopoPonteiro aprofundarEscopo(EscopoPonteiro escopoAcima){
    EscopoPonteiro escp = criarEscopo(escopoAcima);
    return escp;
}

EscopoPonteiro voltarEscopo(EscopoPonteiro escopo){
    if(ImprimirFechamentoEscopo) {imprimirTabeladeSimbolos(escopo->tabela);}
    return escopo->prev;
}

int main(){
    tabelaGlobal = criaTabelaDeSimbolos();
    escopoAtual = criarEscopo(NULL);
    
    #ifdef YYDEBUG
    yydebug = 0;
    #endif
    yyparse();
    printf("\n\nCódigo compilado com sucesso!\n\n");
    printf("\n\n\n Tabela de Símbolos no Escopo Master:\n");
    imprimirTabeladeSimbolos(escopoAtual->tabela);
    printf("\n\n\n Tabela de Símbolos Global:\n");
    imprimirTabeladeSimbolos(tabelaGlobal);

    printf("\n Árvore de Sintaxe Abstrata: \n\n");
    printf(" ");
    imprimirArvore(raiz);
    printf("______________________________________________\n");
    return 0;
}

