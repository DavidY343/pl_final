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
#line 1 "back4.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;
char arg[64] = "";
// Definitions for explicit attributes

typedef struct s_attr {
		int value ;
		char *code ;
} t_attr ;

#define YYSTYPE t_attr


#line 100 "back4.tab.c"

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
    STRING = 260,                  /* STRING  */
    MAIN = 261,                    /* MAIN  */
    WHILE = 262,                   /* WHILE  */
    SETQ = 263,                    /* SETQ  */
    DEFUN = 264,                   /* DEFUN  */
    PRINT = 265,                   /* PRINT  */
    PRIN1 = 266,                   /* PRIN1  */
    SETF = 267,                    /* SETF  */
    LOOP = 268,                    /* LOOP  */
    DO = 269,                      /* DO  */
    IF = 270,                      /* IF  */
    PROGN = 271,                   /* PROGN  */
    OR = 272,                      /* OR  */
    AND = 273,                     /* AND  */
    DIFF = 274,                    /* DIFF  */
    LESSEQ = 275,                  /* LESSEQ  */
    MOREEQ = 276,                  /* MOREEQ  */
    MOD = 277,                     /* MOD  */
    NOT = 278,                     /* NOT  */
    RETURN = 279,                  /* RETURN  */
    FROM = 280,                    /* FROM  */
    UNARY_SIGN = 281               /* UNARY_SIGN  */
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
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_MAIN = 6,                       /* MAIN  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_SETQ = 8,                       /* SETQ  */
  YYSYMBOL_DEFUN = 9,                      /* DEFUN  */
  YYSYMBOL_PRINT = 10,                     /* PRINT  */
  YYSYMBOL_PRIN1 = 11,                     /* PRIN1  */
  YYSYMBOL_SETF = 12,                      /* SETF  */
  YYSYMBOL_LOOP = 13,                      /* LOOP  */
  YYSYMBOL_DO = 14,                        /* DO  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_PROGN = 16,                     /* PROGN  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_DIFF = 19,                      /* DIFF  */
  YYSYMBOL_LESSEQ = 20,                    /* LESSEQ  */
  YYSYMBOL_MOREEQ = 21,                    /* MOREEQ  */
  YYSYMBOL_MOD = 22,                       /* MOD  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_FROM = 25,                      /* FROM  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '<'  */
  YYSYMBOL_28_ = 28,                       /* '>'  */
  YYSYMBOL_29_ = 29,                       /* '+'  */
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '*'  */
  YYSYMBOL_32_ = 32,                       /* '/'  */
  YYSYMBOL_UNARY_SIGN = 33,                /* UNARY_SIGN  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_axioma = 37,                    /* axioma  */
  YYSYMBOL_axioma_aux = 38,                /* axioma_aux  */
  YYSYMBOL_decl_variables = 39,            /* decl_variables  */
  YYSYMBOL_40_1 = 40,                      /* @1  */
  YYSYMBOL_maybeparen = 41,                /* maybeparen  */
  YYSYMBOL_r_exprvar = 42,                 /* r_exprvar  */
  YYSYMBOL_def_funciones = 43,             /* def_funciones  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_main_call = 46,                 /* main_call  */
  YYSYMBOL_list_funciones = 47,            /* list_funciones  */
  YYSYMBOL_main_func = 48,                 /* main_func  */
  YYSYMBOL_funcion = 49,                   /* funcion  */
  YYSYMBOL_50_4 = 50,                      /* $@4  */
  YYSYMBOL_maybe_param = 51,               /* maybe_param  */
  YYSYMBOL_sentencias = 52,                /* sentencias  */
  YYSYMBOL_sentencia = 53,                 /* sentencia  */
  YYSYMBOL_maybe_arg = 54,                 /* maybe_arg  */
  YYSYMBOL_else_expresion = 55,            /* else_expresion  */
  YYSYMBOL_expresion = 56,                 /* expresion  */
  YYSYMBOL_termino = 57,                   /* termino  */
  YYSYMBOL_operando = 58                   /* operando  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   148

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
      34,    35,    31,    29,     2,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      27,    26,    28,     2,     2,     2,     2,     2,     2,     2,
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
      25,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    70,    71,    74,    74,    80,    81,    84,
      85,    88,    88,    90,    91,    91,    95,    96,    98,    99,
     102,   106,   106,   111,   113,   116,   118,   122,   124,   126,
     128,   132,   134,   136,   138,   142,   144,   147,   149,   153,
     154,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     176,   178,   180,   184,   185,   187,   189,   193,   198,   200,
     202
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
  "STRING", "MAIN", "WHILE", "SETQ", "DEFUN", "PRINT", "PRIN1", "SETF",
  "LOOP", "DO", "IF", "PROGN", "OR", "AND", "DIFF", "LESSEQ", "MOREEQ",
  "MOD", "NOT", "RETURN", "FROM", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "UNARY_SIGN", "'('", "')'", "$accept", "axioma", "axioma_aux",
  "decl_variables", "@1", "maybeparen", "r_exprvar", "def_funciones",
  "$@2", "$@3", "main_call", "list_funciones", "main_func", "funcion",
  "$@4", "maybe_param", "sentencias", "sentencia", "maybe_arg",
  "else_expresion", "expresion", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -32,    -4,     6,     3,    -3,   -75,     1,   -75,     1,   -75,
     -75,   -75,   107,   -23,   -22,   -75,   -75,   -75,   -21,   -75,
     -75,     5,     5,     5,    74,   -18,   -75,   -75,    14,   -16,
     -21,    15,   -75,   109,   -75,   -75,   -75,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   -15,   -11,   -75,   -75,   -10,   -75,    10,    11,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,    24,
     107,    28,   107,   107,   -75,   -75,   -75,    29,   110,    32,
     -75,   -75,    35,    36,    37,    40,    41,    44,    45,    46,
      47,    48,    49,    51,    53,    81,   -10,   107,    93,    39,
      95,   100,   107,    79,    82,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,    83,   -75,   -75,   -75,   -75,   -75,   107,   107,    85,
      99,   -10,    92,   -75,   113,   112,   127,   -75,   -75,   -10,
     -10,   107,   -75,    98,   -75,   101,   124,   -75,   -10,   111,
     -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    13,     0,     0,     0,     2,    13,     4,     0,    14,
      19,     1,     0,     0,     0,     3,    11,    18,    17,    59,
      57,     0,     0,     0,     0,     0,    39,    53,    23,     0,
      17,     0,    15,     0,    56,    54,    55,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    24,    21,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,    53,     0,     0,    60,     7,     5,     0,     0,     0,
      16,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,    35,     0,     0,
       0,     0,     0,     0,     0,    20,    47,    46,    48,    50,
      51,    52,    49,    44,    45,    40,    41,    42,    43,    10,
       6,     0,    34,    36,    27,    28,    29,     0,     0,     0,
       0,    25,     0,    30,     0,     0,     0,    26,    22,     0,
       0,     0,    31,     0,    33,    37,     0,    32,     0,     0,
      38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,    50,   -75,   -75,   -75,   136,   -75,   -75,
     114,   -75,   139,   140,   -75,   -75,   -74,   -75,   -75,   -75,
     -12,   -75,    -7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     5,     6,    95,    76,   120,     7,    30,    18,
      32,     8,     9,    10,    77,    54,    79,   104,   122,   147,
      51,    26,    27
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    13,     1,    14,     3,     4,    11,    12,    19,    20,
       4,    28,    29,    31,    34,    35,    36,    52,    53,    55,
      74,    57,   121,    75,    78,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    72,    73,    33,
      69,    71,    19,    20,   125,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   137,    92,   -54,
      93,    94,    21,   -55,    96,   142,   143,   105,    22,    23,
     106,   107,   108,    24,   149,   109,   110,    19,    37,   111,
     112,   113,   114,   115,   116,   123,   117,   126,   118,     3,
     129,    38,    39,    40,    41,    42,    43,    21,   124,   127,
      44,    45,    46,    47,    48,    49,    50,   128,    24,   130,
      19,    20,    19,    37,    97,   133,   134,   131,   132,   135,
      98,    99,   100,   101,   136,   102,   138,   139,   140,   144,
      21,   141,    21,   145,   103,   146,    22,    23,    22,    23,
     148,    24,    15,    24,    56,   119,   150,    16,    17
};

static const yytype_uint8 yycheck[] =
{
      12,     4,    34,     6,     8,     9,     0,     4,     3,     4,
       9,    34,    34,    34,    21,    22,    23,    35,     4,    35,
      35,     6,    96,    34,    34,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    34,
      47,    48,     3,     4,     5,    35,    35,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   131,    70,    35,
      72,    73,    23,    35,    35,   139,   140,    35,    29,    30,
      35,    35,    35,    34,   148,    35,    35,     3,     4,    35,
      35,    35,    35,    35,    35,    97,    35,    99,    35,     8,
     102,    17,    18,    19,    20,    21,    22,    23,     5,     4,
      26,    27,    28,    29,    30,    31,    32,     7,    34,    30,
       3,     4,     3,     4,     4,   127,   128,    35,    35,    34,
      10,    11,    12,    13,    25,    15,    34,    14,    16,   141,
      23,     4,    23,    35,    24,    34,    29,    30,    29,    30,
      16,    34,     6,    34,    30,    95,    35,     8,     8
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    37,     8,     9,    38,    39,    43,    47,    48,
      49,     0,     4,     4,     6,    43,    48,    49,    45,     3,
       4,    23,    29,    30,    34,    56,    57,    58,    34,    34,
      44,    34,    46,    34,    58,    58,    58,     4,    17,    18,
      19,    20,    21,    22,    26,    27,    28,    29,    30,    31,
      32,    56,    35,     4,    51,    35,    46,     6,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    58,
      56,    58,    56,    56,    35,    34,    41,    50,    34,    52,
      35,    35,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    40,    35,     4,    10,    11,
      12,    13,    15,    24,    53,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    39,
      42,    52,    54,    56,     5,     5,    56,     4,     7,    56,
      30,    35,    35,    56,    56,    34,    25,    52,    34,    14,
      16,     4,    52,    52,    56,    35,    34,    55,    16,    52,
      35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    40,    39,    41,    41,    42,
      42,    44,    43,    43,    45,    43,    46,    46,    47,    47,
      48,    50,    49,    51,    51,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    58,    58,    58,
      58
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     7,     1,     0,     0,
       1,     0,     4,     0,     0,     3,     3,     0,     2,     1,
       6,     0,     9,     0,     1,     3,     4,     2,     2,     2,
       3,     5,     7,     5,     2,     0,     1,     0,     4,     1,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     1,     2,     2,     2,     1,     4,     1,
       3
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
  case 2: /* axioma: '(' axioma_aux  */
#line 66 "back4.y"
                                                                                                { printf("bye\n"); }
#line 1296 "back4.tab.c"
    break;

  case 3: /* axioma_aux: decl_variables def_funciones  */
#line 70 "back4.y"
                                                                                { ; }
#line 1302 "back4.tab.c"
    break;

  case 4: /* axioma_aux: def_funciones  */
#line 71 "back4.y"
                                                                                                                { ; }
#line 1308 "back4.tab.c"
    break;

  case 5: /* @1: %empty  */
#line 74 "back4.y"
                                                                        { sprintf (temp, "variable %s\n%s %s !\n", yyvsp[-3].code, yyvsp[-2].code, yyvsp[-3].code) ; 
																	yyval.code = gen_code (temp) ;
																	printf("%s", yyval.code); }
#line 1316 "back4.tab.c"
    break;

  case 7: /* maybeparen: '('  */
#line 80 "back4.y"
                                                                                { ; }
#line 1322 "back4.tab.c"
    break;

  case 8: /* maybeparen: %empty  */
#line 81 "back4.y"
                                                                                                        { ; }
#line 1328 "back4.tab.c"
    break;

  case 9: /* r_exprvar: %empty  */
#line 84 "back4.y"
                                                                                                                { ; }
#line 1334 "back4.tab.c"
    break;

  case 10: /* r_exprvar: decl_variables  */
#line 85 "back4.y"
                                                                                                                { ; }
#line 1340 "back4.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 88 "back4.y"
                                                                                        { printf ("%s\n", yyvsp[0].code) ; }
#line 1346 "back4.tab.c"
    break;

  case 13: /* def_funciones: %empty  */
#line 90 "back4.y"
                                                                                        { ; }
#line 1352 "back4.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 91 "back4.y"
                                                                                                                { printf ("%s\n", yyvsp[0].code) ; }
#line 1358 "back4.tab.c"
    break;

  case 16: /* main_call: '(' MAIN ')'  */
#line 95 "back4.y"
                                                                                        { printf("%s\n", yyvsp[-1].code) ; }
#line 1364 "back4.tab.c"
    break;

  case 17: /* main_call: %empty  */
#line 96 "back4.y"
                                                                                                { ; }
#line 1370 "back4.tab.c"
    break;

  case 18: /* list_funciones: list_funciones funcion  */
#line 98 "back4.y"
                                                                        {printf ("%s\n", yyvsp[0].code);}
#line 1376 "back4.tab.c"
    break;

  case 19: /* list_funciones: funcion  */
#line 99 "back4.y"
                                                                                                                        {printf ("%s\n", yyvsp[0].code);}
#line 1382 "back4.tab.c"
    break;

  case 20: /* main_func: DEFUN MAIN '(' ')' sentencias ')'  */
#line 102 "back4.y"
                                                                        { sprintf(temp, ": main\n%s;", yyvsp[-1].code); 
																	yyval.code = gen_code(temp); }
#line 1389 "back4.tab.c"
    break;

  case 21: /* $@4: %empty  */
#line 106 "back4.y"
                                                                                { sprintf(arg, "%s", yyvsp[0].code) ;}
#line 1395 "back4.tab.c"
    break;

  case 22: /* funcion: DEFUN IDENTIF '(' maybe_param $@4 ')' sentencias ')' '('  */
#line 107 "back4.y"
                                                                                                        { sprintf(temp, ": %s\n%s;", yyvsp[-7].code, yyvsp[-2].code); 
																	yyval.code = gen_code(temp); }
#line 1402 "back4.tab.c"
    break;

  case 23: /* maybe_param: %empty  */
#line 111 "back4.y"
                                                                                                                { strcpy(temp, ""); 
																		yyval.code = gen_code (temp) ; }
#line 1409 "back4.tab.c"
    break;

  case 24: /* maybe_param: IDENTIF  */
#line 113 "back4.y"
                                                                                                                                {sprintf (temp, "%s", yyvsp[0].code);
																		yyval.code = gen_code(temp) ; }
#line 1416 "back4.tab.c"
    break;

  case 25: /* sentencias: '(' sentencia ')'  */
#line 116 "back4.y"
                                                                                                        { sprintf (temp, "%s\n", yyvsp[-1].code) ;  
																	yyval.code = gen_code (temp) ;}
#line 1423 "back4.tab.c"
    break;

  case 26: /* sentencias: '(' sentencia ')' sentencias  */
#line 118 "back4.y"
                                                                                                { sprintf (temp, "%s\n%s", yyvsp[-2].code, yyvsp[0].code) ;  
																	yyval.code = gen_code (temp) ;}
#line 1430 "back4.tab.c"
    break;

  case 27: /* sentencia: PRINT STRING  */
#line 122 "back4.y"
                                                                                {sprintf (temp, ".\" %s\" cr", yyvsp[0].code);
																			yyval.code = gen_code(temp);}
#line 1437 "back4.tab.c"
    break;

  case 28: /* sentencia: PRIN1 STRING  */
#line 124 "back4.y"
                                                                                                {sprintf (temp, ".\" %s\"", yyvsp[0].code);
																			yyval.code = gen_code(temp);}
#line 1444 "back4.tab.c"
    break;

  case 29: /* sentencia: PRIN1 expresion  */
#line 126 "back4.y"
                                                                                                        {sprintf (temp, "%s .", yyvsp[0].code);
																			yyval.code = gen_code(temp);}
#line 1451 "back4.tab.c"
    break;

  case 30: /* sentencia: SETF IDENTIF expresion  */
#line 128 "back4.y"
                                                                                                {if (strcmp(yyvsp[-1].code, arg) == 0){
																			sprintf (temp, "%s", yyvsp[0].code) ;}
																	 	else{sprintf (temp, "%s %s !", yyvsp[0].code, yyvsp[-1].code);}
																			yyval.code = gen_code(temp);}
#line 1460 "back4.tab.c"
    break;

  case 31: /* sentencia: LOOP WHILE expresion DO sentencias  */
#line 132 "back4.y"
                                                                                                { sprintf (temp, "begin\n%s\nwhile\n%srepeat", yyvsp[-2].code, yyvsp[0].code);
																			yyval.code = gen_code(temp);}
#line 1467 "back4.tab.c"
    break;

  case 32: /* sentencia: IF expresion '(' PROGN sentencias ')' else_expresion  */
#line 134 "back4.y"
                                                                                       {sprintf (temp, "%s\nif\n%s%sthen", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code);
																			yyval.code = gen_code(temp) ;}
#line 1474 "back4.tab.c"
    break;

  case 33: /* sentencia: RETURN '-' FROM IDENTIF expresion  */
#line 136 "back4.y"
                                                                                                                {sprintf (temp, "%s", yyvsp[0].code);
																			yyval.code = gen_code(temp) ;}
#line 1481 "back4.tab.c"
    break;

  case 34: /* sentencia: IDENTIF maybe_arg  */
#line 138 "back4.y"
                                                                                                                                {sprintf (temp, "%s %s", yyvsp[0].code, yyvsp[-1].code);
																		yyval.code = gen_code(temp) ; }
#line 1488 "back4.tab.c"
    break;

  case 35: /* maybe_arg: %empty  */
#line 142 "back4.y"
                                                                                                                        { strcpy(temp, ""); 
																		yyval.code = gen_code (temp) ; }
#line 1495 "back4.tab.c"
    break;

  case 36: /* maybe_arg: expresion  */
#line 144 "back4.y"
                                                                                                                                {sprintf (temp, "%s", yyvsp[0].code);
																		yyval.code = gen_code(temp) ; }
#line 1502 "back4.tab.c"
    break;

  case 37: /* else_expresion: %empty  */
#line 147 "back4.y"
                                                                                { strcpy(temp, ""); 
																		yyval.code = gen_code (temp) ; }
#line 1509 "back4.tab.c"
    break;

  case 38: /* else_expresion: '(' PROGN sentencias ')'  */
#line 149 "back4.y"
                                                                                        {sprintf (temp, "else\n%s", yyvsp[-1].code);
																		yyval.code = gen_code(temp) ; }
#line 1516 "back4.tab.c"
    break;

  case 39: /* expresion: termino  */
#line 153 "back4.y"
                                                                                                { yyval = yyvsp[0] ; }
#line 1522 "back4.tab.c"
    break;

  case 40: /* expresion: '(' '+' expresion expresion ')'  */
#line 154 "back4.y"
                                                                                                { if (strcmp(yyvsp[-2].code, "dup") == 0){
																		sprintf (temp, "%s +", yyvsp[-1].code) ;}
																	 else{sprintf (temp, "%s %s +", yyvsp[-2].code, yyvsp[-1].code) ;}
																		yyval.code = gen_code (temp) ; }
#line 1531 "back4.tab.c"
    break;

  case 41: /* expresion: '(' '-' expresion expresion ')'  */
#line 158 "back4.y"
                                                                                                { sprintf (temp, "%s %s -", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1538 "back4.tab.c"
    break;

  case 42: /* expresion: '(' '*' expresion expresion ')'  */
#line 160 "back4.y"
                                                                                                { sprintf (temp, "%s %s *", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1545 "back4.tab.c"
    break;

  case 43: /* expresion: '(' '/' expresion expresion ')'  */
#line 162 "back4.y"
                                                                                                { sprintf (temp, "%s %s /", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1552 "back4.tab.c"
    break;

  case 44: /* expresion: '(' '<' expresion expresion ')'  */
#line 164 "back4.y"
                                                                                                { sprintf (temp, "%s %s <", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1559 "back4.tab.c"
    break;

  case 45: /* expresion: '(' '>' expresion expresion ')'  */
#line 166 "back4.y"
                                                                                                { sprintf (temp, "%s %s >", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1566 "back4.tab.c"
    break;

  case 46: /* expresion: '(' AND expresion expresion ')'  */
#line 168 "back4.y"
                                                                                                { sprintf (temp, "%s %s and", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1573 "back4.tab.c"
    break;

  case 47: /* expresion: '(' OR expresion expresion ')'  */
#line 170 "back4.y"
                                                                                                { sprintf (temp, "%s %s or", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1580 "back4.tab.c"
    break;

  case 48: /* expresion: '(' DIFF expresion expresion ')'  */
#line 172 "back4.y"
                                                                                                { sprintf (temp, "%s %s = 0=", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1587 "back4.tab.c"
    break;

  case 49: /* expresion: '(' '=' expresion expresion ')'  */
#line 174 "back4.y"
                                                                                                { sprintf (temp, "%s %s =", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1594 "back4.tab.c"
    break;

  case 50: /* expresion: '(' LESSEQ expresion expresion ')'  */
#line 176 "back4.y"
                                                                                                { sprintf (temp, "%s %s <=", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1601 "back4.tab.c"
    break;

  case 51: /* expresion: '(' MOREEQ expresion expresion ')'  */
#line 178 "back4.y"
                                                                                                { sprintf (temp, "%s %s >=", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1608 "back4.tab.c"
    break;

  case 52: /* expresion: '(' MOD expresion expresion ')'  */
#line 180 "back4.y"
                                                                                                { sprintf (temp, "%s %s mod", yyvsp[-2].code, yyvsp[-1].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1615 "back4.tab.c"
    break;

  case 53: /* termino: operando  */
#line 184 "back4.y"
                                                                                        { yyval = yyvsp[0] ; }
#line 1621 "back4.tab.c"
    break;

  case 54: /* termino: '+' operando  */
#line 185 "back4.y"
                                                                                                { sprintf (temp, "%s", yyvsp[0].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1628 "back4.tab.c"
    break;

  case 55: /* termino: '-' operando  */
#line 187 "back4.y"
                                                                                                { sprintf (temp, "%s negate", yyvsp[0].code) ;
																		yyval.code = gen_code (temp) ; }
#line 1635 "back4.tab.c"
    break;

  case 56: /* termino: NOT operando  */
#line 189 "back4.y"
                                                                                                        { sprintf(temp, "%s 0=", yyvsp[0].code); 
																		yyval.code = gen_code(temp) ; }
#line 1642 "back4.tab.c"
    break;

  case 57: /* operando: IDENTIF  */
#line 193 "back4.y"
                                                                                                { if (strcmp(yyvsp[0].code, arg) == 0){
																		sprintf (temp, "dup") ;}
																	 else{
																		sprintf (temp, "%s @", yyvsp[0].code) ;}
																		yyval.code = gen_code (temp) ; }
#line 1652 "back4.tab.c"
    break;

  case 58: /* operando: '(' IDENTIF expresion ')'  */
#line 198 "back4.y"
                                                                                                                                { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[-2].code) ;
																		yyval.code = gen_code (temp) ;}
#line 1659 "back4.tab.c"
    break;

  case 59: /* operando: NUMBER  */
#line 200 "back4.y"
                                                                                                        { sprintf (temp, "%d", yyvsp[0].value) ;
																		yyval.code = gen_code (temp) ; }
#line 1666 "back4.tab.c"
    break;

  case 60: /* operando: '(' expresion ')'  */
#line 202 "back4.y"
                                                                                                        { yyval = yyvsp[-1] ; }
#line 1672 "back4.tab.c"
    break;


#line 1676 "back4.tab.c"

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

#line 206 "back4.y"
                            // SECCION 4    Codigo en C

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
	"main",         MAIN,           // y los token asociados
	"setq",         SETQ,
	"defun",        DEFUN,
	"print",        PRINT,
	"prin1",        PRIN1,
	"setf",         SETF,
	"while",        WHILE,
	"loop",         LOOP,
	"do",           DO,
	"if",           IF,
	"progn",        PROGN,
	"or",  			OR, 
	"and",  		AND, 
	"/=",  			DIFF,
	"<=", 			LESSEQ, 
	">=",			MOREEQ,
	"mod",          MOD,
	"not",          NOT,
	"return",	RETURN,
	"from",		FROM,
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
//              printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
			return (IDENTIF) ;
		} else {
//              printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
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
