/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "comp.y"
  //Definitions ------------------------------------------------------------------------------------------------------
    #include "cabecalho.h"
    #include <stdio.h>
    #include <stdlib.h>

    extern int linhas;
    extern int erros;

    void msg_sucesso(const char *regra) {
        printf("Regra próximo à linha %d: %s\n", linhas, regra);
    }

    extern void yyerror(const char *msg) {
        fprintf(stderr, "Erro de sintaxe próximo à linha %d: %s\n", linhas, msg);
        erros++;
    }


#line 90 "comp.tab.c"

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

#include "comp.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABRE_PARENTESES = 3,            /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 4,           /* FECHA_PARENTESES  */
  YYSYMBOL_ABRE_CHAVE = 5,                 /* ABRE_CHAVE  */
  YYSYMBOL_FECHA_CHAVE = 6,                /* FECHA_CHAVE  */
  YYSYMBOL_ABRE_COLCHETES = 7,             /* ABRE_COLCHETES  */
  YYSYMBOL_FECHA_COLCHETES = 8,            /* FECHA_COLCHETES  */
  YYSYMBOL_VIRGULA = 9,                    /* VIRGULA  */
  YYSYMBOL_PONTO_E_VIRGULA = 10,           /* PONTO_E_VIRGULA  */
  YYSYMBOL_TIPO_REAL = 11,                 /* TIPO_REAL  */
  YYSYMBOL_TIPO_INTEIRO = 12,              /* TIPO_INTEIRO  */
  YYSYMBOL_TIPO_CARACTERE = 13,            /* TIPO_CARACTERE  */
  YYSYMBOL_TIPO_LITERAL = 14,              /* TIPO_LITERAL  */
  YYSYMBOL_NUM_INTEIRO = 15,               /* NUM_INTEIRO  */
  YYSYMBOL_NUM_REAL = 16,                  /* NUM_REAL  */
  YYSYMBOL_CARACTERE = 17,                 /* CARACTERE  */
  YYSYMBOL_LITERAL = 18,                   /* LITERAL  */
  YYSYMBOL_ASPAS = 19,                     /* ASPAS  */
  YYSYMBOL_CONTEUDO_LITERAL = 20,          /* CONTEUDO_LITERAL  */
  YYSYMBOL_IDENTIFICADOR = 21,             /* IDENTIFICADOR  */
  YYSYMBOL_IGUAL = 22,                     /* IGUAL  */
  YYSYMBOL_OPERADOR_ARITMETICO_UNARIO = 23, /* OPERADOR_ARITMETICO_UNARIO  */
  YYSYMBOL_OPERADOR_ARITMETICO_BINARIO = 24, /* OPERADOR_ARITMETICO_BINARIO  */
  YYSYMBOL_OPERADOR_LOGICO = 25,           /* OPERADOR_LOGICO  */
  YYSYMBOL_COMPARADOR = 26,                /* COMPARADOR  */
  YYSYMBOL_NEGACAO = 27,                   /* NEGACAO  */
  YYSYMBOL_SE = 28,                        /* SE  */
  YYSYMBOL_SENAO = 29,                     /* SENAO  */
  YYSYMBOL_POR = 30,                       /* POR  */
  YYSYMBOL_ENQUANTO = 31,                  /* ENQUANTO  */
  YYSYMBOL_EXECUTE = 32,                   /* EXECUTE  */
  YYSYMBOL_MAIN = 33,                      /* MAIN  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_Programa_principal = 35,        /* Programa_principal  */
  YYSYMBOL_Corpo = 36,                     /* Corpo  */
  YYSYMBOL_Comandos = 37,                  /* Comandos  */
  YYSYMBOL_Comando = 38,                   /* Comando  */
  YYSYMBOL_Declaracao = 39,                /* Declaracao  */
  YYSYMBOL_Tipo = 40,                      /* Tipo  */
  YYSYMBOL_Lista_Var = 41,                 /* Lista_Var  */
  YYSYMBOL_Var = 42,                       /* Var  */
  YYSYMBOL_Atribuicao = 43,                /* Atribuicao  */
  YYSYMBOL_Atrib = 44,                     /* Atrib  */
  YYSYMBOL_Exp_aritmetica = 45,            /* Exp_aritmetica  */
  YYSYMBOL_Valor = 46,                     /* Valor  */
  YYSYMBOL_Exp_logica = 47,                /* Exp_logica  */
  YYSYMBOL_Exp_comparacao = 48,            /* Exp_comparacao  */
  YYSYMBOL_Condicional = 49,               /* Condicional  */
  YYSYMBOL_Senao = 50,                     /* Senao  */
  YYSYMBOL_Laco = 51,                      /* Laco  */
  YYSYMBOL_Por = 52,                       /* Por  */
  YYSYMBOL_Enquanto = 53,                  /* Enquanto  */
  YYSYMBOL_Comando_unario = 54,            /* Comando_unario  */
  YYSYMBOL_Exp_unaria = 55                 /* Exp_unaria  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   123

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    46,    50,    51,    55,    56,    57,    58,
      59,    60,    65,    69,    70,    71,    72,    76,    77,    78,
      82,    83,    84,    89,    93,    97,    98,    99,   100,   101,
     105,   106,   107,   108,   109,   114,   115,   116,   117,   121,
     126,   127,   131,   132,   137,   138,   139,   140,   144,   145,
     146,   150,   151,   156,   160,   161,   162,   163
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ABRE_PARENTESES",
  "FECHA_PARENTESES", "ABRE_CHAVE", "FECHA_CHAVE", "ABRE_COLCHETES",
  "FECHA_COLCHETES", "VIRGULA", "PONTO_E_VIRGULA", "TIPO_REAL",
  "TIPO_INTEIRO", "TIPO_CARACTERE", "TIPO_LITERAL", "NUM_INTEIRO",
  "NUM_REAL", "CARACTERE", "LITERAL", "ASPAS", "CONTEUDO_LITERAL",
  "IDENTIFICADOR", "IGUAL", "OPERADOR_ARITMETICO_UNARIO",
  "OPERADOR_ARITMETICO_BINARIO", "OPERADOR_LOGICO", "COMPARADOR",
  "NEGACAO", "SE", "SENAO", "POR", "ENQUANTO", "EXECUTE", "MAIN",
  "$accept", "Programa_principal", "Corpo", "Comandos", "Comando",
  "Declaracao", "Tipo", "Lista_Var", "Var", "Atribuicao", "Atrib",
  "Exp_aritmetica", "Valor", "Exp_logica", "Exp_comparacao", "Condicional",
  "Senao", "Laco", "Por", "Enquanto", "Comando_unario", "Exp_unaria", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-47)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -14,    32,    83,    50,   -47,    57,    25,   -47,    37,   -47,
     -47,   -47,   -47,    84,     8,    62,    68,    79,    63,    89,
      25,   -47,    22,    71,   -47,    87,   -47,   -47,    57,    57,
     -47,    88,   -47,   -47,    51,   -47,   -47,   -47,    58,   -47,
      75,   -47,    58,    74,    74,   -47,   -47,    97,    98,   101,
      86,   -47,   -47,   -47,   -47,   -47,   103,   104,    90,    58,
     -47,   -47,   -47,   -47,    58,    91,    60,   -47,     2,   -47,
     -47,    93,   107,    20,   -47,   108,    22,   -47,    22,    86,
      95,   -47,   -47,     6,    24,    92,    86,    86,    57,    58,
      58,   -47,   -47,   -47,   -47,    54,   -47,   -47,   -47,    95,
      94,   -47,    -4,    57,   -47,    21,   -47,    90,   116,   117,
     -47,   -47
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     0,    13,
      14,    15,    16,    20,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     7,     0,     8,     9,     0,     0,
      10,     0,    11,    56,     0,    57,    55,    41,     0,    50,
       0,    52,     0,     0,     0,     3,     4,     0,     0,    18,
       0,    54,    23,    44,    45,    53,     0,     0,    34,     0,
      30,    31,    32,    33,     0,    26,     0,    25,     0,    38,
      27,     0,     0,     0,    47,     0,     0,    12,     0,     0,
      24,    22,    21,     0,     0,    37,     0,     0,     0,     0,
       0,    51,    46,    19,    17,     0,    29,    35,    28,    39,
      43,    36,     0,     0,    40,     0,    42,     0,     0,     0,
      48,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -11,   102,   -47,   -47,   -47,    12,    -6,   -47,
     -38,   -46,   -47,   -39,   -47,   -47,   -47,   -47,   -47,   -32,
     -47,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,    19,    20,    21,    22,    48,    65,    24,
      25,    66,    67,    68,    69,    26,   104,    27,    28,    29,
      30,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    31,    72,    73,    80,   105,    88,    44,    36,    35,
      96,    74,    75,    83,    23,    31,    49,    53,    54,     1,
      84,    89,   107,    47,    91,    85,     8,    89,    97,    13,
      86,    -5,    87,    95,    71,     3,     9,    10,    11,    12,
      98,    99,    13,    13,    14,    89,    13,    32,    14,    89,
     101,   102,    56,    15,     5,    16,    17,    18,    96,    58,
      33,    59,     6,    37,    43,    38,    57,   108,     6,    39,
      49,    40,    49,    60,    61,    62,    63,   100,    86,    13,
      41,    14,    42,     4,    86,    64,    87,    58,    93,    79,
      94,    34,   106,    50,    51,    45,    13,    52,    55,    23,
     109,    60,    61,    62,    63,    17,    76,    13,    77,    14,
      78,    81,    82,    33,    51,    50,    90,    89,    92,    86,
     110,   111,    46,   103
};

static const yytype_int8 yycheck[] =
{
       6,     6,    40,    42,    50,     9,     4,    18,    14,     1,
       4,    43,    44,    59,    20,    20,    22,    28,    29,    33,
      59,    25,     1,     1,     4,    64,     1,    25,     4,    21,
      24,     6,    26,    79,    40,     3,    11,    12,    13,    14,
      86,    87,    21,    21,    23,    25,    21,    10,    23,    25,
      89,    90,     1,    28,     4,    30,    31,    32,     4,     1,
      23,     3,     5,     1,     1,     3,    15,   105,     5,     1,
      76,     3,    78,    15,    16,    17,    18,    88,    24,    21,
       1,    23,     3,     0,    24,    27,    26,     1,    76,     3,
      78,     7,   103,    22,    23,     6,    21,    10,    10,   105,
     105,    15,    16,    17,    18,    31,     9,    21,    10,    23,
       9,     8,     8,    23,    23,    22,     9,    25,    10,    24,
       4,     4,    20,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    35,     3,     0,     4,     5,    36,     1,    11,
      12,    13,    14,    21,    23,    28,    30,    31,    32,    37,
      38,    39,    40,    42,    43,    44,    49,    51,    52,    53,
      54,    55,    10,    23,     7,     1,    42,     1,     3,     1,
       3,     1,     3,     1,    36,     6,    37,     1,    41,    42,
      22,    23,    10,    36,    36,    10,     1,    15,     1,     3,
      15,    16,    17,    18,    27,    42,    45,    46,    47,    48,
      55,    42,    44,    47,    53,    53,     9,    10,     9,     3,
      45,     8,     8,    45,    47,    47,    24,    26,     4,    25,
       9,     4,    10,    41,    41,    45,     4,     4,    45,    45,
      36,    47,    47,    29,    50,     9,    36,     1,    44,    55,
       4,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    37,    37,    38,    38,    38,    38,
      38,    38,    39,    40,    40,    40,    40,    41,    41,    41,
      42,    42,    42,    43,    44,    45,    45,    45,    45,    45,
      46,    46,    46,    46,    46,    47,    47,    47,    47,    48,
      49,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      52,    53,    53,    54,    55,    55,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     2,     0,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     3,     1,     3,
       1,     4,     4,     2,     3,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     3,     3,     2,     1,     3,
       6,     2,     2,     0,     2,     2,     4,     3,     8,     8,
       2,     4,     2,     2,     2,     2,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* Programa_principal: MAIN ABRE_PARENTESES FECHA_PARENTESES Corpo  */
#line 42 "comp.y"
                                                { msg_sucesso("Programa principal"); }
#line 1207 "comp.tab.c"
    break;

  case 6: /* Comando: Declaracao  */
#line 55 "comp.y"
               { msg_sucesso("Comando - Declaracao"); }
#line 1213 "comp.tab.c"
    break;

  case 7: /* Comando: Atribuicao  */
#line 56 "comp.y"
                 { msg_sucesso("Comando - Atribuicao"); }
#line 1219 "comp.tab.c"
    break;

  case 8: /* Comando: Condicional  */
#line 57 "comp.y"
                  { msg_sucesso("Comando - Condicional"); }
#line 1225 "comp.tab.c"
    break;

  case 10: /* Comando: Comando_unario  */
#line 59 "comp.y"
                     { msg_sucesso("Comando - Comando unário"); }
#line 1231 "comp.tab.c"
    break;

  case 11: /* Comando: error PONTO_E_VIRGULA  */
#line 60 "comp.y"
                            { yyerror("Comando não reconhecido"); }
#line 1237 "comp.tab.c"
    break;

  case 13: /* Tipo: TIPO_REAL  */
#line 69 "comp.y"
              { msg_sucesso("Tipo - Real"); }
#line 1243 "comp.tab.c"
    break;

  case 14: /* Tipo: TIPO_INTEIRO  */
#line 70 "comp.y"
                   { msg_sucesso("Tipo - Inteiro"); }
#line 1249 "comp.tab.c"
    break;

  case 15: /* Tipo: TIPO_CARACTERE  */
#line 71 "comp.y"
                     { msg_sucesso("Tipo - Caractere"); }
#line 1255 "comp.tab.c"
    break;

  case 16: /* Tipo: TIPO_LITERAL  */
#line 72 "comp.y"
                   { msg_sucesso("Tipo - Literal"); }
#line 1261 "comp.tab.c"
    break;

  case 19: /* Lista_Var: error VIRGULA Lista_Var  */
#line 78 "comp.y"
                              { yyerror("Variável problemática"); }
#line 1267 "comp.tab.c"
    break;

  case 20: /* Var: IDENTIFICADOR  */
#line 82 "comp.y"
                  { msg_sucesso("Variável - Simples"); }
#line 1273 "comp.tab.c"
    break;

  case 21: /* Var: IDENTIFICADOR ABRE_COLCHETES NUM_INTEIRO FECHA_COLCHETES  */
#line 83 "comp.y"
                                                               { msg_sucesso("Variável - Vetor"); }
#line 1279 "comp.tab.c"
    break;

  case 22: /* Var: IDENTIFICADOR ABRE_COLCHETES error FECHA_COLCHETES  */
#line 84 "comp.y"
                                                         { yyerror("Índice de vetor deve ser um número inteiro"); }
#line 1285 "comp.tab.c"
    break;

  case 28: /* Exp_aritmetica: Exp_aritmetica OPERADOR_ARITMETICO_BINARIO Exp_aritmetica  */
#line 100 "comp.y"
                                                                { msg_sucesso("Expressão aritmética com operador binário"); }
#line 1291 "comp.tab.c"
    break;

  case 30: /* Valor: NUM_INTEIRO  */
#line 105 "comp.y"
                { msg_sucesso("Valor - Número inteiro"); }
#line 1297 "comp.tab.c"
    break;

  case 31: /* Valor: NUM_REAL  */
#line 106 "comp.y"
               { msg_sucesso("Valor - Número real"); }
#line 1303 "comp.tab.c"
    break;

  case 32: /* Valor: CARACTERE  */
#line 107 "comp.y"
                { msg_sucesso("Valor - Caractere"); }
#line 1309 "comp.tab.c"
    break;

  case 33: /* Valor: LITERAL  */
#line 108 "comp.y"
              { msg_sucesso("Valor - Literal"); }
#line 1315 "comp.tab.c"
    break;

  case 34: /* Valor: error  */
#line 109 "comp.y"
            { yyerror("Valor inválido"); }
#line 1321 "comp.tab.c"
    break;

  case 36: /* Exp_logica: Exp_logica OPERADOR_LOGICO Exp_logica  */
#line 115 "comp.y"
                                            { msg_sucesso("Expressão logica composta"); }
#line 1327 "comp.tab.c"
    break;

  case 37: /* Exp_logica: NEGACAO Exp_logica  */
#line 116 "comp.y"
                                       { msg_sucesso("Expressão logica - Negação"); }
#line 1333 "comp.tab.c"
    break;

  case 38: /* Exp_logica: Exp_comparacao  */
#line 117 "comp.y"
                     { msg_sucesso("Expressão lógica - Comparação"); }
#line 1339 "comp.tab.c"
    break;

  case 41: /* Condicional: SE error  */
#line 127 "comp.y"
               { yyerror("Expressão condicional inválida"); }
#line 1345 "comp.tab.c"
    break;

  case 44: /* Laco: Por Corpo  */
#line 137 "comp.y"
              { msg_sucesso("Laço - Por"); }
#line 1351 "comp.tab.c"
    break;

  case 45: /* Laco: Enquanto Corpo  */
#line 138 "comp.y"
                     { msg_sucesso("Laço - Enquanto"); }
#line 1357 "comp.tab.c"
    break;

  case 46: /* Laco: EXECUTE Corpo Enquanto PONTO_E_VIRGULA  */
#line 139 "comp.y"
                                             { msg_sucesso("Laço - Execute Enquanto"); }
#line 1363 "comp.tab.c"
    break;

  case 47: /* Laco: EXECUTE error Enquanto  */
#line 140 "comp.y"
                             { yyerror("Laço Execute Enquanto inválido"); }
#line 1369 "comp.tab.c"
    break;

  case 48: /* Por: POR ABRE_PARENTESES Atrib VIRGULA Exp_logica VIRGULA Atrib FECHA_PARENTESES  */
#line 144 "comp.y"
                                                                                { msg_sucesso("Por - com Atribuição"); }
#line 1375 "comp.tab.c"
    break;

  case 49: /* Por: POR ABRE_PARENTESES Atrib VIRGULA Exp_logica VIRGULA Exp_unaria FECHA_PARENTESES  */
#line 145 "comp.y"
                                                                                       { msg_sucesso("Por - com Comando unário"); }
#line 1381 "comp.tab.c"
    break;

  case 50: /* Por: POR error  */
#line 146 "comp.y"
                { yyerror("Laço Por inválido"); }
#line 1387 "comp.tab.c"
    break;

  case 52: /* Enquanto: ENQUANTO error  */
#line 151 "comp.y"
                     { yyerror("Laço Enquanto inválido"); }
#line 1393 "comp.tab.c"
    break;

  case 54: /* Exp_unaria: Var OPERADOR_ARITMETICO_UNARIO  */
#line 160 "comp.y"
                                   { msg_sucesso("Expressão unária - pós-unário"); }
#line 1399 "comp.tab.c"
    break;

  case 55: /* Exp_unaria: OPERADOR_ARITMETICO_UNARIO Var  */
#line 161 "comp.y"
                                     { msg_sucesso("Expressão unária - pré-unário"); }
#line 1405 "comp.tab.c"
    break;

  case 56: /* Exp_unaria: error OPERADOR_ARITMETICO_UNARIO  */
#line 162 "comp.y"
                                       { yyerror("Expressão unária inválida"); }
#line 1411 "comp.tab.c"
    break;

  case 57: /* Exp_unaria: OPERADOR_ARITMETICO_UNARIO error  */
#line 163 "comp.y"
                                       { yyerror("Expressão unária inválida"); }
#line 1417 "comp.tab.c"
    break;


#line 1421 "comp.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 166 "comp.y"
  //Code -------------------------------------------------------------------------------------------------------------

int main (int argc, char **argv ) {
	++argv, --argc; //desconsidera o nome do programa
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	else {
		puts("Falha ao abrir arquivo, nome incorreto ou não especificado. Digite o comando novamente."); //exibe mensagem de texto se o arquivo não for especificado ou for especificado com o nome errado
		exit(0);
	}

    //enquanto não chegar ao fim do arquivo faz as análises
	do
		yyparse();
	while (!feof(yyin));

	//Se não houver erros, imprime mensagem de fim de análise com sucesso
	if(erros==0)
		puts("Análise concluída com sucesso!");
}
