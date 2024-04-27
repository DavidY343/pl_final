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
#line 3 "trad3.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata
#define MAX_LOCAL_VARS 64
int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;
// funcoines propias
void addLocalVar(char *var_name);
void print_localvar_list() ;
void free_localvar_list() ;
void updateLocalVarNFun(const char *fun_name) ;
char *addNameFun(const char *fun_name) ;
//
char temp [2048] ;
char identifactual [64];
char funactual [64];
char identifprev [64];
// Definitions for explicit attributes

typedef struct s_attr {
		int value ;
		char *code ;
} t_attr ;

#define YYSTYPE t_attr

typedef struct s_localvar
{
	char var[MAX_LOCAL_VARS];
	char n_fun[MAX_LOCAL_VARS];
	struct s_localvar *next;
} t_localvar;

t_localvar *tablaLocalVar = NULL;

#line 116 "trad3.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    PUTS = 264,                    /* PUTS  */
    PRINTF = 265,                  /* PRINTF  */
    FOR = 266,                     /* FOR  */
    OR = 267,                      /* OR  */
    AND = 268,                     /* AND  */
    EQUAL = 269,                   /* EQUAL  */
    DIFF = 270,                    /* DIFF  */
    LESSEQ = 271,                  /* LESSEQ  */
    MOREEQ = 272,                  /* MOREEQ  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    RETURN = 275,                  /* RETURN  */
    UNARY_SIGN = 276               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_PUTS = 9,                       /* PUTS  */
  YYSYMBOL_PRINTF = 10,                    /* PRINTF  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_OR = 12,                        /* OR  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_EQUAL = 14,                     /* EQUAL  */
  YYSYMBOL_DIFF = 15,                      /* DIFF  */
  YYSYMBOL_LESSEQ = 16,                    /* LESSEQ  */
  YYSYMBOL_MOREEQ = 17,                    /* MOREEQ  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_21_ = 21,                       /* '='  */
  YYSYMBOL_22_ = 22,                       /* '<'  */
  YYSYMBOL_23_ = 23,                       /* '>'  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 29,                /* UNARY_SIGN  */
  YYSYMBOL_30_ = 30,                       /* '!'  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* '['  */
  YYSYMBOL_38_ = 38,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_axioma = 40,                    /* axioma  */
  YYSYMBOL_DeclVariables = 41,             /* DeclVariables  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_r_exprvar = 43,                 /* r_exprvar  */
  YYSYMBOL_DefFunciones = 44,              /* DefFunciones  */
  YYSYMBOL_ListFunciones = 45,             /* ListFunciones  */
  YYSYMBOL_Funcion = 46,                   /* Funcion  */
  YYSYMBOL_47_2 = 47,                      /* $@2  */
  YYSYMBOL_params = 48,                    /* params  */
  YYSYMBOL_param_list = 49,                /* param_list  */
  YYSYMBOL_MainFunc = 50,                  /* MainFunc  */
  YYSYMBOL_51_3 = 51,                      /* $@3  */
  YYSYMBOL_sentencias = 52,                /* sentencias  */
  YYSYMBOL_sentencia = 53,                 /* sentencia  */
  YYSYMBOL_54_4 = 54,                      /* $@4  */
  YYSYMBOL_varofun = 55,                   /* varofun  */
  YYSYMBOL_56_5 = 56,                      /* $@5  */
  YYSYMBOL_sentencias_if = 57,             /* sentencias_if  */
  YYSYMBOL_else_statement = 58,            /* else_statement  */
  YYSYMBOL_aux_equalador = 59,             /* aux_equalador  */
  YYSYMBOL_equalador = 60,                 /* equalador  */
  YYSYMBOL_exprs = 61,                     /* exprs  */
  YYSYMBOL_expresionostring = 62,          /* expresionostring  */
  YYSYMBOL_expresion = 63,                 /* expresion  */
  YYSYMBOL_termino = 64,                   /* termino  */
  YYSYMBOL_operando = 65,                  /* operando  */
  YYSYMBOL_66_6 = 66,                      /* $@6  */
  YYSYMBOL_maybe = 67,                     /* maybe  */
  YYSYMBOL_68_7 = 68,                      /* $@7  */
  YYSYMBOL_arguments = 69,                 /* arguments  */
  YYSYMBOL_arguments_list = 70             /* arguments_list  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   476

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


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
       2,     2,     2,    30,     2,     2,     2,    28,     2,     2,
      32,    33,    26,    24,    36,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      22,    21,    23,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    83,    87,    87,    90,    91,    94,    97,
      98,   101,   101,   109,   111,   114,   116,   119,   119,   127,
     129,   134,   134,   136,   138,   140,   142,   144,   145,   147,
     151,   153,   155,   155,   159,   161,   164,   166,   170,   173,
     178,   180,   182,   186,   188,   192,   194,   197,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   226,   227,   229,   231,   234,   234,   236,   238,   241,
     243,   245,   245,   249,   251,   254,   256
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "STRING", "MAIN", "WHILE", "PUTS", "PRINTF", "FOR", "OR",
  "AND", "EQUAL", "DIFF", "LESSEQ", "MOREEQ", "IF", "ELSE", "RETURN",
  "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY_SIGN",
  "'!'", "';'", "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "$accept",
  "axioma", "DeclVariables", "$@1", "r_exprvar", "DefFunciones",
  "ListFunciones", "Funcion", "$@2", "params", "param_list", "MainFunc",
  "$@3", "sentencias", "sentencia", "$@4", "varofun", "$@5",
  "sentencias_if", "else_statement", "aux_equalador", "equalador", "exprs",
  "expresionostring", "expresion", "termino", "operando", "$@6", "maybe",
  "$@7", "arguments", "arguments_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-93)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     3,    24,   -93,   -93,    66,   -16,   -23,   -93,   -93,
     -93,   -93,   -93,   -93,   164,   164,   -93,   -93,    36,    18,
      20,   -93,   -93,     7,     7,     7,   164,   404,   -93,   -93,
     185,     1,   -16,    53,    27,   -17,   -93,   -93,   -93,   236,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   -93,   -93,   -93,   -93,    61,    41,    43,
      50,   164,   -93,   -93,   -93,   420,   435,   448,   448,    84,
      84,    84,    84,   -10,   -10,   -93,   -93,   -93,   -93,    56,
      87,   173,   404,    64,    60,   164,   173,    90,   -93,     3,
      67,    71,    81,    85,    89,   164,    37,   -93,   -93,   164,
     202,    58,   -93,   -18,    28,   164,    92,   116,   123,   164,
     324,   -93,   -93,   404,   -93,   -93,   164,   164,   -93,   -93,
     -93,   258,    95,    93,   109,   280,   -93,   344,    99,   164,
     100,   107,    19,   136,   110,   -93,   112,   219,   173,   -93,
     -93,    47,   -93,   404,   118,   173,   -93,   130,    96,   121,
      19,   164,   -93,   115,   164,   -93,   -93,   -93,   364,   134,
     -93,   384,   152,   124,   -93,   -93,   140,   173,   164,   137,
     302,   -93,   128,   173,   155,   -93
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,     9,     3,     0,    40,     0,     1,     2,
      11,    17,    10,     8,     0,     0,    38,     4,     0,     0,
       0,    67,    65,     0,     0,     0,     0,    41,    47,    61,
       0,     6,    40,    13,     0,    69,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     7,     5,    39,     0,     0,    14,
       0,    73,    71,    66,    68,    55,    54,    56,    57,    58,
      59,    52,    53,    48,    49,    50,    51,    60,    15,     0,
       0,     0,    75,     0,    74,     0,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    19,    70,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    20,    76,    72,    12,     0,    73,    32,    22,
      27,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,    24,
      46,     0,    43,    45,     0,     0,    31,     0,     0,     0,
       0,     0,    34,     0,     0,    25,    23,    44,     0,    37,
      35,     0,     0,     0,    28,    33,     0,     0,     0,     0,
       0,    36,     0,     0,     0,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,   138,   -93,   -93,   167,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -84,   -92,   -93,   -93,   -93,     4,   -93,
      91,   142,   -93,    26,   -14,   -93,    63,   -93,   -93,   -93,
      62,   -93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    31,    55,     4,     5,    12,    19,    58,
      59,    13,    20,    96,    97,   103,   119,   129,   153,   164,
       7,    16,   141,   142,    82,    28,    29,    35,    63,    85,
      83,    84
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    30,   101,   116,   112,    14,     1,     6,    17,   112,
      21,    22,    39,    18,   117,    61,    50,    51,    52,   118,
      62,    15,    21,    22,     8,   140,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    26,
      32,    88,    89,    23,    24,    90,    91,    92,    93,    25,
      33,    26,    34,   152,   148,    94,   112,    95,    57,   120,
      60,   160,    88,    89,    18,    78,    90,    91,    92,    93,
      10,   100,   111,    11,    79,   152,    94,   160,    95,    80,
     149,   110,   112,   150,    81,   113,    36,    37,    38,   174,
      86,   121,    87,   115,   102,   125,    99,    98,   122,   105,
      88,    89,   127,   106,    90,    91,    92,    93,    48,    49,
      50,    51,    52,   107,    94,   137,    95,   108,   143,    88,
      89,   109,   123,    90,    91,    92,    93,   124,   131,   132,
     133,   155,   136,    94,   138,    95,   143,   158,   139,   144,
     161,    88,    89,   146,   145,    90,    91,    92,    93,   151,
     159,   154,   156,   163,   170,    94,   166,    95,   167,    88,
      89,   168,   173,    90,    91,    92,    93,    21,    22,    54,
       9,   169,   171,    94,    56,    95,   157,    88,    89,   128,
     104,    90,    91,    92,    93,     0,     0,     0,    23,    24,
     175,    94,     0,    95,    25,     0,    26,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,    46,    47,    48,
      49,    50,    51,    52,    40,    41,    42,    43,    44,    45,
       0,     0,     0,    53,    46,    47,    48,    49,    50,    51,
      52,    40,    41,    42,    43,    44,    45,     0,     0,     0,
     114,    46,    47,    48,    49,    50,    51,    52,    40,    41,
      42,    43,    44,    45,     0,     0,     0,   147,    46,    47,
      48,    49,    50,    51,    52,     0,     0,     0,     0,    64,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,   130,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,   134,    40,    41,    42,    43,    44,    45,
       0,     0,     0,     0,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,   172,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,     0,     0,   126,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,     0,     0,   135,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,     0,     0,   162,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,     0,     0,   165,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,    46,    47,    48,    49,
      50,    51,    52,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    42,
      43,    44,    45,     0,     0,     0,     0,    46,    47,    48,
      49,    50,    51,    52,    44,    45,     0,     0,     0,     0,
      46,    47,    48,    49,    50,    51,    52
};

static const yytype_int16 yycheck[] =
{
      14,    15,    86,    21,    96,    21,     5,     4,    31,   101,
       3,     4,    26,    36,    32,    32,    26,    27,    28,    37,
      37,    37,     3,     4,     0,     6,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    32,
       4,     4,     5,    24,    25,     8,     9,    10,    11,    30,
      32,    32,    32,   145,   138,    18,   148,    20,     5,    31,
      33,   153,     4,     5,    36,     4,     8,     9,    10,    11,
       4,    85,    35,     7,    33,   167,    18,   169,    20,    36,
      33,    95,   174,    36,    34,    99,    23,    24,    25,   173,
      34,   105,     5,    35,     4,   109,    36,    33,     6,    32,
       4,     5,   116,    32,     8,     9,    10,    11,    24,    25,
      26,    27,    28,    32,    18,   129,    20,    32,   132,     4,
       5,    32,     6,     8,     9,    10,    11,     4,    33,    36,
      21,    35,    33,    18,    34,    20,   150,   151,    31,     3,
     154,     4,     5,    31,    34,     8,     9,    10,    11,    31,
      35,    21,    31,    19,   168,    18,     4,    20,    34,     4,
       5,    21,    34,     8,     9,    10,    11,     3,     4,    31,
       3,   167,    35,    18,    32,    20,   150,     4,     5,   117,
      89,     8,     9,    10,    11,    -1,    -1,    -1,    24,    25,
      35,    18,    -1,    20,    30,    -1,    32,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    38,    22,    23,    24,    25,    26,    27,
      28,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      38,    22,    23,    24,    25,    26,    27,    28,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    38,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    16,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    40,    41,    44,    45,     4,    59,     0,    44,
       4,     7,    46,    50,    21,    37,    60,    31,    36,    47,
      51,     3,     4,    24,    25,    30,    32,    63,    64,    65,
      63,    42,     4,    32,    32,    66,    65,    65,    65,    63,
      12,    13,    14,    15,    16,    17,    22,    23,    24,    25,
      26,    27,    28,    38,    41,    43,    60,     5,    48,    49,
      33,    32,    37,    67,    33,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,     4,    33,
      36,    34,    63,    69,    70,    68,    34,     5,     4,     5,
       8,     9,    10,    11,    18,    20,    52,    53,    33,    36,
      63,    52,     4,    54,    59,    32,    32,    32,    32,    32,
      63,    35,    53,    63,    38,    35,    21,    32,    37,    55,
      31,    63,     6,     6,     4,    63,    31,    63,    69,    56,
      33,    33,    36,    21,    33,    31,    33,    63,    34,    31,
       6,    61,    62,    63,     3,    34,    31,    38,    52,    33,
      36,    31,    53,    57,    21,    35,    31,    62,    63,    35,
      53,    63,    31,    19,    58,    31,     4,    34,    21,    57,
      63,    35,    33,    34,    52,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    42,    41,    43,    43,    44,    45,
      45,    47,    46,    48,    48,    49,    49,    51,    50,    52,
      52,    54,    53,    53,    53,    53,    53,    53,    53,    53,
      55,    55,    56,    55,    57,    57,    58,    58,    59,    59,
      60,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    66,    65,    65,    65,    67,
      67,    68,    67,    69,    69,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     5,     0,     1,     2,     0,
       2,     0,     8,     0,     1,     2,     4,     0,     7,     1,
       2,     0,     3,     7,     5,     7,    15,     3,     8,     3,
       3,     4,     0,     7,     1,     2,     4,     0,     2,     4,
       0,     2,     3,     1,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     0,     3,     1,     3,     0,
       3,     0,     4,     0,     1,     1,     3
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
  case 2: /* axioma: DeclVariables DefFunciones  */
#line 82 "trad3.y"
                                         { ; }
#line 1397 "trad3.tab.c"
    break;

  case 3: /* axioma: DefFunciones  */
#line 83 "trad3.y"
                               { ; }
#line 1403 "trad3.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 87 "trad3.y"
                                          { updateLocalVarNFun("GLOBAL");printf ("%s\n", yyvsp[-1].code) ;}
#line 1409 "trad3.tab.c"
    break;

  case 6: /* r_exprvar: %empty  */
#line 90 "trad3.y"
                                                                        { ; }
#line 1415 "trad3.tab.c"
    break;

  case 7: /* r_exprvar: DeclVariables  */
#line 91 "trad3.y"
                                                                        { ; }
#line 1421 "trad3.tab.c"
    break;

  case 8: /* DefFunciones: ListFunciones MainFunc  */
#line 94 "trad3.y"
                                         { printf ("%s\n", yyvsp[0].code) ;  }
#line 1427 "trad3.tab.c"
    break;

  case 9: /* ListFunciones: %empty  */
#line 97 "trad3.y"
                                        { ; }
#line 1433 "trad3.tab.c"
    break;

  case 10: /* ListFunciones: ListFunciones Funcion  */
#line 98 "trad3.y"
                                                    { printf ("%s\n", yyvsp[0].code) ;}
#line 1439 "trad3.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 101 "trad3.y"
                    {  sprintf(funactual, "%s", yyvsp[0].code) ; }
#line 1445 "trad3.tab.c"
    break;

  case 12: /* Funcion: IDENTIF $@2 '(' params ')' '{' sentencias '}'  */
#line 101 "trad3.y"
                                                                                              { updateLocalVarNFun(yyvsp[-7].code);
										 sprintf (temp, "(defun %s (%s)\n%s)", yyvsp[-7].code, yyvsp[-4].code, yyvsp[-1].code) ;
										 char *my_temp = addNameFun(yyvsp[-7].code);
										strcpy(temp, my_temp);
										yyval.code = gen_code (temp) ; 
										free(my_temp); }
#line 1456 "trad3.tab.c"
    break;

  case 13: /* params: %empty  */
#line 109 "trad3.y"
                                                        { strcpy(temp, ""); 
											yyval.code = gen_code (temp) ; }
#line 1463 "trad3.tab.c"
    break;

  case 14: /* params: param_list  */
#line 111 "trad3.y"
                                        { sprintf (temp, "%s", yyvsp[0].code);
								yyval.code = gen_code (temp) ; }
#line 1470 "trad3.tab.c"
    break;

  case 15: /* param_list: INTEGER IDENTIF  */
#line 114 "trad3.y"
                                                                                         { sprintf (temp, "%s", yyvsp[0].code);
															yyval.code = gen_code (temp) ;}
#line 1477 "trad3.tab.c"
    break;

  case 16: /* param_list: param_list ',' INTEGER IDENTIF  */
#line 116 "trad3.y"
                                                                                { sprintf (temp, "%s %s", yyvsp[-3].code, yyvsp[0].code);
															yyval.code = gen_code (temp); }
#line 1484 "trad3.tab.c"
    break;

  case 17: /* $@3: %empty  */
#line 119 "trad3.y"
                {  sprintf(funactual, "%s", yyvsp[0].code) ; }
#line 1490 "trad3.tab.c"
    break;

  case 18: /* MainFunc: MAIN $@3 '(' ')' '{' sentencias '}'  */
#line 119 "trad3.y"
                                                                                    { updateLocalVarNFun("main"); 
										sprintf (temp, "(defun main ()\n%s)", yyvsp[-1].code) ; 
										char *my_temp = addNameFun("main");
										strcpy(temp, my_temp);
										yyval.code = gen_code (temp) ; 
										free(my_temp); }
#line 1501 "trad3.tab.c"
    break;

  case 19: /* sentencias: sentencia  */
#line 127 "trad3.y"
                                                        { sprintf (temp, "%s\n", yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ; }
#line 1508 "trad3.tab.c"
    break;

  case 20: /* sentencias: sentencias sentencia  */
#line 129 "trad3.y"
                                                { sprintf (temp, "%s%s\n", yyvsp[-1].code, yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ;}
#line 1515 "trad3.tab.c"
    break;

  case 21: /* $@4: %empty  */
#line 134 "trad3.y"
                      {  sprintf(identifactual, "%s", yyvsp[0].code) ; }
#line 1521 "trad3.tab.c"
    break;

  case 22: /* sentencia: IDENTIF $@4 varofun  */
#line 134 "trad3.y"
                                                                                                                                                        { sprintf (temp, "%s", yyvsp[0].code) ; 
																													yyval.code = gen_code (temp) ; }
#line 1528 "trad3.tab.c"
    break;

  case 23: /* sentencia: PRINTF '(' STRING ',' exprs ')' ';'  */
#line 136 "trad3.y"
                                                                                                                                                                                        {  sprintf (temp, "%s", yyvsp[-2].code) ; 
																													yyval.code = gen_code (temp) ; }
#line 1535 "trad3.tab.c"
    break;

  case 24: /* sentencia: PUTS '(' STRING ')' ';'  */
#line 138 "trad3.y"
                                                                                                                                                                                                        { sprintf (temp, "(print \"%s\")", yyvsp[-2].code) ; 
																													yyval.code = gen_code (temp) ; }
#line 1542 "trad3.tab.c"
    break;

  case 25: /* sentencia: WHILE '(' expresion ')' '{' sentencias '}'  */
#line 140 "trad3.y"
                                                                                                                                                                                {sprintf (temp, "(loop while %s do \n%s)", yyvsp[-4].code, yyvsp[-1].code) ; 
																													yyval.code = gen_code (temp) ;}
#line 1549 "trad3.tab.c"
    break;

  case 26: /* sentencia: FOR '(' IDENTIF '=' NUMBER ';' expresion ';' IDENTIF '=' expresion ')' '{' sentencias '}'  */
#line 142 "trad3.y"
                                                                                                                                        {sprintf (temp, "(setf %s %d)\n(loop while %s do \n%s(setf %s %s))", yyvsp[-12].code, yyvsp[-10].value, yyvsp[-8].code, yyvsp[-1].code, yyvsp[-6].code, yyvsp[-4].code) ; 
																													yyval.code = gen_code (temp) ;}
#line 1556 "trad3.tab.c"
    break;

  case 27: /* sentencia: INTEGER aux_equalador ';'  */
#line 144 "trad3.y"
                                                                                                                                                                                                        {  yyval = yyvsp[-1]; }
#line 1562 "trad3.tab.c"
    break;

  case 28: /* sentencia: IF '(' expresion ')' '{' sentencias_if '}' else_statement  */
#line 145 "trad3.y"
                                                                                                                                                                        {sprintf (temp, "(if %s\n%s%s)", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ; 
																													yyval.code = gen_code (temp) ;}
#line 1569 "trad3.tab.c"
    break;

  case 29: /* sentencia: RETURN expresion ';'  */
#line 147 "trad3.y"
                                                                                                                                                                                                        {sprintf (temp, "return-from %s %s", funactual, yyvsp[-1].code) ; 
																													yyval.code = gen_code (temp) ; }
#line 1576 "trad3.tab.c"
    break;

  case 30: /* varofun: '=' expresion ';'  */
#line 151 "trad3.y"
                                                                                {sprintf (temp, "(setf %s %s)", identifactual, yyvsp[-1].code) ;
											yyval.code = gen_code (temp) ;}
#line 1583 "trad3.tab.c"
    break;

  case 31: /* varofun: '(' arguments ')' ';'  */
#line 153 "trad3.y"
                                                                                { sprintf (temp, "%s %s", identifactual, yyvsp[-2].code);
												yyval.code = gen_code (temp) ; }
#line 1590 "trad3.tab.c"
    break;

  case 32: /* $@5: %empty  */
#line 155 "trad3.y"
               {  sprintf(identifprev, "%s", identifactual) ; }
#line 1596 "trad3.tab.c"
    break;

  case 33: /* varofun: '[' $@5 expresion ']' '=' expresion ';'  */
#line 155 "trad3.y"
                                                                                                                { sprintf (temp, "(setf (aref %s %s) %s)", identifprev, yyvsp[-4].code, yyvsp[-1].code) ; 
											yyval.code = gen_code (temp) ;}
#line 1603 "trad3.tab.c"
    break;

  case 34: /* sentencias_if: sentencia  */
#line 159 "trad3.y"
                                                        { sprintf (temp, "%s\n", yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ; }
#line 1610 "trad3.tab.c"
    break;

  case 35: /* sentencias_if: sentencias_if sentencia  */
#line 161 "trad3.y"
                                                   { sprintf (temp, "(progn(%s%s\n)", yyvsp[-1].code, yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ;}
#line 1617 "trad3.tab.c"
    break;

  case 36: /* else_statement: ELSE '{' sentencias_if '}'  */
#line 164 "trad3.y"
                                           { sprintf (temp, "%s", yyvsp[-1].code) ; 
											yyval.code = gen_code (temp) ;}
#line 1624 "trad3.tab.c"
    break;

  case 37: /* else_statement: %empty  */
#line 166 "trad3.y"
                                                                                { strcpy(temp, ""); 
											yyval.code = gen_code (temp) ;}
#line 1631 "trad3.tab.c"
    break;

  case 38: /* aux_equalador: IDENTIF equalador  */
#line 170 "trad3.y"
                                                                        { sprintf (temp, "(setq %s %s)", yyvsp[-1].code, yyvsp[0].code) ; 
													yyval.code = gen_code (temp) ;
													addLocalVar(yyvsp[-1].code) ;}
#line 1639 "trad3.tab.c"
    break;

  case 39: /* aux_equalador: aux_equalador ',' IDENTIF equalador  */
#line 173 "trad3.y"
                                                                 { sprintf (temp, "%s (setq %s %s)", yyvsp[-3].code, yyvsp[-1].code, yyvsp[0].code) ; 
													yyval.code = gen_code (temp) ;
													addLocalVar(yyvsp[-1].code) ;}
#line 1647 "trad3.tab.c"
    break;

  case 40: /* equalador: %empty  */
#line 178 "trad3.y"
                                                                { sprintf (temp, "0") ; 
										yyval.code = gen_code (temp) ; }
#line 1654 "trad3.tab.c"
    break;

  case 41: /* equalador: '=' expresion  */
#line 180 "trad3.y"
                                                                { sprintf (temp, "%s", yyvsp[0].code) ;
										yyval.code = gen_code (temp) ;}
#line 1661 "trad3.tab.c"
    break;

  case 42: /* equalador: '[' expresion ']'  */
#line 182 "trad3.y"
                                                                { sprintf (temp, "(make-array %s)", yyvsp[-1].code) ; 
											yyval.code = gen_code (temp) ;}
#line 1668 "trad3.tab.c"
    break;

  case 43: /* exprs: expresionostring  */
#line 186 "trad3.y"
                                                                        { sprintf (temp, "(prin1 %s)", yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ;}
#line 1675 "trad3.tab.c"
    break;

  case 44: /* exprs: exprs ',' expresionostring  */
#line 188 "trad3.y"
                                                                { sprintf (temp, "%s (prin1 %s)", yyvsp[-2].code, yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ;}
#line 1682 "trad3.tab.c"
    break;

  case 45: /* expresionostring: expresion  */
#line 192 "trad3.y"
                            { sprintf (temp, "%s", yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ;}
#line 1689 "trad3.tab.c"
    break;

  case 46: /* expresionostring: STRING  */
#line 194 "trad3.y"
                                                { sprintf (temp, "%s", yyvsp[0].code) ;  
										yyval.code = gen_code (temp) ;}
#line 1696 "trad3.tab.c"
    break;

  case 47: /* expresion: termino  */
#line 197 "trad3.y"
                                         { yyval = yyvsp[0] ; }
#line 1702 "trad3.tab.c"
    break;

  case 48: /* expresion: expresion '+' expresion  */
#line 198 "trad3.y"
                                                     { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1709 "trad3.tab.c"
    break;

  case 49: /* expresion: expresion '-' expresion  */
#line 200 "trad3.y"
                                                     { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1716 "trad3.tab.c"
    break;

  case 50: /* expresion: expresion '*' expresion  */
#line 202 "trad3.y"
                                                     { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1723 "trad3.tab.c"
    break;

  case 51: /* expresion: expresion '/' expresion  */
#line 204 "trad3.y"
                                                     { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1730 "trad3.tab.c"
    break;

  case 52: /* expresion: expresion '<' expresion  */
#line 206 "trad3.y"
                                                     { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1737 "trad3.tab.c"
    break;

  case 53: /* expresion: expresion '>' expresion  */
#line 208 "trad3.y"
                                                     { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1744 "trad3.tab.c"
    break;

  case 54: /* expresion: expresion AND expresion  */
#line 210 "trad3.y"
                                                     { sprintf (temp, "(&& %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1751 "trad3.tab.c"
    break;

  case 55: /* expresion: expresion OR expresion  */
#line 212 "trad3.y"
                                                    { sprintf (temp, "(|| %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1758 "trad3.tab.c"
    break;

  case 56: /* expresion: expresion EQUAL expresion  */
#line 214 "trad3.y"
                                                       { sprintf (temp, "(== %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1765 "trad3.tab.c"
    break;

  case 57: /* expresion: expresion DIFF expresion  */
#line 216 "trad3.y"
                                                      { sprintf (temp, "(!= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1772 "trad3.tab.c"
    break;

  case 58: /* expresion: expresion LESSEQ expresion  */
#line 218 "trad3.y"
                                                        { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1779 "trad3.tab.c"
    break;

  case 59: /* expresion: expresion MOREEQ expresion  */
#line 220 "trad3.y"
                                                        { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1786 "trad3.tab.c"
    break;

  case 60: /* expresion: expresion '%' expresion  */
#line 222 "trad3.y"
                                                     { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1793 "trad3.tab.c"
    break;

  case 61: /* termino: operando  */
#line 226 "trad3.y"
                                                   { yyval = yyvsp[0] ; }
#line 1799 "trad3.tab.c"
    break;

  case 62: /* termino: '+' operando  */
#line 227 "trad3.y"
                                                               { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
													yyval.code = gen_code (temp) ; }
#line 1806 "trad3.tab.c"
    break;

  case 63: /* termino: '-' operando  */
#line 229 "trad3.y"
                                                               { sprintf (temp, "(- %s)", yyvsp[0].code) ;
													yyval.code = gen_code (temp) ; }
#line 1813 "trad3.tab.c"
    break;

  case 64: /* termino: '!' operando  */
#line 231 "trad3.y"
                                                           { sprintf(temp, "(! %s)", yyvsp[0].code); yyval.code = gen_code(temp); }
#line 1819 "trad3.tab.c"
    break;

  case 65: /* $@6: %empty  */
#line 234 "trad3.y"
                        {  sprintf(identifactual, "%s", yyvsp[0].code) ; }
#line 1825 "trad3.tab.c"
    break;

  case 66: /* operando: IDENTIF $@6 maybe  */
#line 234 "trad3.y"
                                                                              { sprintf (temp, "%s%s", yyvsp[-2].code, yyvsp[0].code) ;
										yyval.code = gen_code (temp) ; }
#line 1832 "trad3.tab.c"
    break;

  case 67: /* operando: NUMBER  */
#line 236 "trad3.y"
                                                     { sprintf (temp, "%d", yyvsp[0].value) ;
										yyval.code = gen_code (temp) ; }
#line 1839 "trad3.tab.c"
    break;

  case 68: /* operando: '(' expresion ')'  */
#line 238 "trad3.y"
                                                     { yyval = yyvsp[-1] ; }
#line 1845 "trad3.tab.c"
    break;

  case 69: /* maybe: %empty  */
#line 241 "trad3.y"
                                                        { strcpy(temp, ""); 
											yyval.code = gen_code (temp) ; }
#line 1852 "trad3.tab.c"
    break;

  case 70: /* maybe: '(' arguments ')'  */
#line 243 "trad3.y"
                                                                { sprintf (temp, " %s", yyvsp[-1].code);
								yyval.code = gen_code (temp) ; }
#line 1859 "trad3.tab.c"
    break;

  case 71: /* $@7: %empty  */
#line 245 "trad3.y"
                               {  sprintf(identifprev, "%s", identifactual) ; }
#line 1865 "trad3.tab.c"
    break;

  case 72: /* maybe: '[' $@7 expresion ']'  */
#line 245 "trad3.y"
                                                                                                                { sprintf (temp, "(aref %s %s)", identifprev, yyvsp[-1].code) ; 
											yyval.code = gen_code (temp) ;}
#line 1872 "trad3.tab.c"
    break;

  case 73: /* arguments: %empty  */
#line 249 "trad3.y"
                                                        { strcpy(temp, ""); 
											yyval.code = gen_code (temp) ; }
#line 1879 "trad3.tab.c"
    break;

  case 74: /* arguments: arguments_list  */
#line 251 "trad3.y"
                                                { sprintf (temp, "%s", yyvsp[0].code);
								yyval.code = gen_code (temp) ; }
#line 1886 "trad3.tab.c"
    break;

  case 75: /* arguments_list: expresion  */
#line 254 "trad3.y"
                                                                                         { sprintf (temp, "%s", yyvsp[0].code);
															yyval.code = gen_code (temp) ;}
#line 1893 "trad3.tab.c"
    break;

  case 76: /* arguments_list: arguments_list ',' expresion  */
#line 256 "trad3.y"
                                                                                        { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code);
															yyval.code = gen_code (temp); }
#line 1900 "trad3.tab.c"
    break;


#line 1904 "trad3.tab.c"

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

#line 261 "trad3.y"
                            // SECCION 4    Codigo en C

//Funciones añadidas
void print_localvar_list() {
    t_localvar *current = tablaLocalVar;
    printf("Lista de variables locales:\n");
    while (current != NULL) {
        printf("Variable: %s, Función: %s\n", current->var, current->n_fun);
        current = current->next;
    }
}

void addLocalVar(char *var_name) {
    t_localvar *new_localvar = (t_localvar *)malloc(sizeof(t_localvar));
    if (new_localvar == NULL) {
        printf("Error: No se pudo asignar memoria para la variable local.\n");
        return;
    }
    strcpy(new_localvar->var, var_name);
    new_localvar->next = NULL;

    if (tablaLocalVar == NULL) {
        tablaLocalVar = new_localvar;
    } else {
        t_localvar *current = tablaLocalVar;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_localvar;
    }
}

void updateLocalVarNFun(const char *fun_name) {
    t_localvar *current = tablaLocalVar;
    while (current != NULL) {
        if (current->n_fun[0] == '\0') {
            strcpy(current->n_fun, fun_name);
        }
        current = current->next;
    }
}

void free_localvar_list() {
    t_localvar *current = tablaLocalVar;
    while (current != NULL) {
        t_localvar *temp = current;
        current = current->next;
        free(temp);
    }
    tablaLocalVar = NULL; // Establecer el puntero de la lista a NULL para indicar que la lista está vacía
}

char *addNameFun(const char *fun_name)
{
    size_t initial_len = strlen(temp);
    size_t buffer_size = initial_len + 500; // Tamaño inicial del buffer
    
    // Asignar memoria para el resultado
    char *result = (char *)malloc(buffer_size);
    if (result == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para el resultado.\n");
        return NULL;
    }

    strncpy(result, temp, buffer_size); // Copiar el texto original al resultado
    result[buffer_size - 1] = '\0'; // Asegurar nulidad

    t_localvar *current = tablaLocalVar;
    while (current != NULL) {
			// printf("%s %s %d\n", current->n_fun, fun_name, strcmp(current->n_fun, fun_name));
        if (strcmp(current->n_fun, fun_name) == 0) {
			
            // Crear el nuevo nombre de la variable con el prefijo del nombre de la función
            char prefixed_var[MAX_LOCAL_VARS + MAX_LOCAL_VARS];
            snprintf(prefixed_var, sizeof(prefixed_var), "%s_%s", fun_name, current->var);

            // Reemplazar todas las ocurrencias de la variable en el texto
            char *pos = result;
			int in_quote = 0;
            while ((pos = strstr(pos, current->var)) != NULL) {
				
                // Verificar si no está en medio de otra palabra
                if ((pos == result || !isalnum(*(pos - 1))) &&
                    !isalnum(*(pos + strlen(current->var)))) {
                    // Mueve el resto del texto para insertar el nuevo nombre
                    size_t pos_index = pos - result;
                    char *new_result = (char *)malloc(buffer_size); // Buffer temporal para copiar el contenido
                    if (new_result == NULL) {
                        fprintf(stderr, "Error: No se pudo asignar memoria para el buffer temporal.\n");
                        free(result); // Liberar el resultado original
                        return NULL;
                    }
                    strncpy(new_result, result, pos_index); // Copiar hasta antes de la coincidencia
                    snprintf(new_result + pos_index, buffer_size - pos_index, "%s%s", prefixed_var, pos + strlen(current->var));
                    free(result); // Liberar el resultado original
                    result = new_result; // Apuntar al nuevo resultado
                    pos = result + pos_index + strlen(prefixed_var); // Mover el puntero para continuar buscando
                } else {
                    pos += strlen(current->var);
                }
				/*char *quote_pos = strchr(pos, '"');
				char *next_pos = strstr(pos, current->var);
				if ((quote_pos < next_pos) && quote_pos != NULL && next_pos != NULL)
				{
					char *next_quote_pos = strchr(quote_pos, '"');
					pos = next_quote_pos;
				}*/
            }
        }
        current = current->next;
    }

    return result;
}
//
int n_line = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
	fprintf (stderr, "%s en la linea %d\n", mensaje, n_line) ;
	printf ( "\n") ;	// bye
}

char *int_to_string (int n)
{
	sprintf (temp, "%d", n) ;
	return gen_code (temp) ;
}

char *char_to_string (char c)
{
	sprintf (temp, "%c", c) ;
	return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
	char *p ;
	static long int nb = 0;        // sirven para contabilizar la memoria
	static int nv = 0 ;            // solicitada en total

	p = malloc (nbytes) ;
	if (p == NULL) {
		fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
		fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
		exit (0) ;
	}
	nb += (long) nbytes ;
	nv++ ;

	return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
	char *name ;
	int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
	"main",        MAIN,           // y los token asociados
	"int",         INTEGER,
	"puts",		   PUTS,
	"printf",      PRINTF,
	"||",  		OR, 
	"&&",  		AND, 
	"==",  		EQUAL,
	"!=",  		DIFF,
	"<=", 		LESSEQ, 
	">=",		MOREEQ,
	"while", 	WHILE,
	"if", 		IF, 
	"else",		ELSE,
	"for",		FOR,
	"return",	RETURN,
	NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
								// y devuelve puntero a registro (simbolo)
	int i ;
	t_keyword *sim ;

	i = 0 ;
	sim = keywords ;
	while (sim [i].name != NULL) {
		if (strcmp (sim [i].name, symbol_name) == 0) {
									// strcmp(a, b) devuelve == 0 si a==b
			return &(sim [i]) ;
		}
		i++ ;
	}

	return NULL ;
}


/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
	char *p ;
	int l ;
	
	l = strlen (name)+1 ;
	p = (char *) my_malloc (l) ;
	strcpy (p, name) ;
	
	return p ;
}


int yylex ()
{
	int i ;
	unsigned char c ;
	unsigned char cc ;
	char ops_expandibles [] = "!<=>|%/&+-*" ;
	char temp_str [256] ;
	t_keyword *symbol ;

	do {
		c = getchar () ;

		if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
			do {		//	OJO que puede funcionar mal si una linea contiene #
				c = getchar () ;
			} while (c != '\n') ;
		}

		if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
			cc = getchar () ;
			if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
				ungetc (cc, stdin) ;
			} else {
				c = getchar () ;	// ...
				if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
					do {		// Se trata de codigo inline (Codigo embebido en C)
						c = getchar () ;
						putchar (c) ;
					} while (c != '\n') ;
				} else {		// ==> comentario, ignorar la linea
					while (c != '\n') {
						c = getchar () ;
					}
				}
			}
		} else if (c == '\\') c = getchar () ;
		
		if (c == '\n')
			n_line++ ;

	} while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

	if (c == '\"') {
		i = 0 ;
		do {
			c = getchar () ;
			temp_str [i++] = c ;
		} while (c != '\"' && i < 255) ;
		if (i == 256) {
			printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_line) ;
		}		 	// habria que leer hasta el siguiente " , pero, y si falta?
		temp_str [--i] = '\0' ;
		yylval.code = gen_code (temp_str) ;
		return (STRING) ;
	}

	if (c == '.' || (c >= '0' && c <= '9')) {
		ungetc (c, stdin) ;
		scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
		return NUMBER ;
	}

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
		i = 0 ;
		while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9') || c == '_') && i < 255) {
			temp_str [i++] = tolower (c) ;
			c = getchar () ;
		}
		temp_str [i] = '\0' ;
		ungetc (c, stdin) ;

		yylval.code = gen_code (temp_str) ;
		symbol = search_keyword (yylval.code) ;
		if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
			return (IDENTIF) ;
		} else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
			return (symbol->token) ;
		}
	}

	if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
		cc = getchar () ;
		sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
		symbol = search_keyword (temp_str) ;
		if (symbol == NULL) {
			ungetc (cc, stdin) ;
			yylval.code = NULL ;
			return (c) ;
		} else {
			yylval.code = gen_code (temp_str) ; // aunque no se use
			return (symbol->token) ;
		}
	}

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
	if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
		return (0) ;
	}

	return c ;
}


int main ()
{
	yyparse () ;
}
