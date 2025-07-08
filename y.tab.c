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
#line 4 "sintatico.y"

#include <stdio.h>
#include <stdlib.h>
#include "symbol_table_scoped.h" // <-- coloque ANTES do uso de VarType
#include "func_table.h"
#include "semantica.h"

extern int yylex();
extern int yylineno;
extern char* yytext;
void yyerror(const char *s);
FuncSymbol* current_function = NULL; 

#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    TK_ID = 258,                   /* TK_ID  */
    TK_TEXTO = 259,                /* TK_TEXTO  */
    TK_NUMERO_INT = 260,           /* TK_NUMERO_INT  */
    TK_NUMERO_FLOAT = 261,         /* TK_NUMERO_FLOAT  */
    TK_FUNCAO = 262,               /* TK_FUNCAO  */
    TK_INICIO = 263,               /* TK_INICIO  */
    TK_SE = 264,                   /* TK_SE  */
    TK_ENTAO = 265,                /* TK_ENTAO  */
    TK_SENAO = 266,                /* TK_SENAO  */
    TK_VAR = 267,                  /* TK_VAR  */
    TK_ENQUANTO = 268,             /* TK_ENQUANTO  */
    TK_FACA = 269,                 /* TK_FACA  */
    TK_FIM = 270,                  /* TK_FIM  */
    TK_RETORNE = 271,              /* TK_RETORNE  */
    TK_INT_TYPE = 272,             /* TK_INT_TYPE  */
    TK_FLOAT_TYPE = 273,           /* TK_FLOAT_TYPE  */
    TK_STRING_TYPE = 274,          /* TK_STRING_TYPE  */
    TK_BOOL_TYPE = 275,            /* TK_BOOL_TYPE  */
    TK_LIST_TYPE = 276,            /* TK_LIST_TYPE  */
    TK_TAMANHO = 277,              /* TK_TAMANHO  */
    TK_CONCATENA = 278,            /* TK_CONCATENA  */
    TK_SUBLISTA = 279,             /* TK_SUBLISTA  */
    TK_ESCREVA = 280,              /* TK_ESCREVA  */
    TK_LEIA = 281,                 /* TK_LEIA  */
    TK_VERDADEIRO = 282,           /* TK_VERDADEIRO  */
    TK_FALSO = 283,                /* TK_FALSO  */
    TK_OP_E = 284,                 /* TK_OP_E  */
    TK_OP_OU = 285,                /* TK_OP_OU  */
    TK_OP_IGUAL = 286,             /* TK_OP_IGUAL  */
    TK_OP_DIFERENTE = 287,         /* TK_OP_DIFERENTE  */
    TK_OP_MENOR_IGUAL = 288,       /* TK_OP_MENOR_IGUAL  */
    TK_OP_MAIOR_IGUAL = 289,       /* TK_OP_MAIOR_IGUAL  */
    TK_SOMA = 290,                 /* TK_SOMA  */
    TK_SUBTRACAO = 291,            /* TK_SUBTRACAO  */
    TK_MULTIPLICACAO = 292,        /* TK_MULTIPLICACAO  */
    TK_DIVISAO = 293,              /* TK_DIVISAO  */
    TK_ATRIBUICAO = 294,           /* TK_ATRIBUICAO  */
    TK_DOIS_PONTOS = 295,          /* TK_DOIS_PONTOS  */
    TK_VIRGULA = 296,              /* TK_VIRGULA  */
    TK_ABRE_PAR = 297,             /* TK_ABRE_PAR  */
    TK_FECHA_PAR = 298,            /* TK_FECHA_PAR  */
    TK_ABRE_COL = 299,             /* TK_ABRE_COL  */
    TK_FECHA_COL = 300,            /* TK_FECHA_COL  */
    TK_OP_MENOR = 301,             /* TK_OP_MENOR  */
    TK_OP_MAIOR = 302,             /* TK_OP_MAIOR  */
    TK_THEN_NO_ELSE = 303          /* TK_THEN_NO_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TK_ID 258
#define TK_TEXTO 259
#define TK_NUMERO_INT 260
#define TK_NUMERO_FLOAT 261
#define TK_FUNCAO 262
#define TK_INICIO 263
#define TK_SE 264
#define TK_ENTAO 265
#define TK_SENAO 266
#define TK_VAR 267
#define TK_ENQUANTO 268
#define TK_FACA 269
#define TK_FIM 270
#define TK_RETORNE 271
#define TK_INT_TYPE 272
#define TK_FLOAT_TYPE 273
#define TK_STRING_TYPE 274
#define TK_BOOL_TYPE 275
#define TK_LIST_TYPE 276
#define TK_TAMANHO 277
#define TK_CONCATENA 278
#define TK_SUBLISTA 279
#define TK_ESCREVA 280
#define TK_LEIA 281
#define TK_VERDADEIRO 282
#define TK_FALSO 283
#define TK_OP_E 284
#define TK_OP_OU 285
#define TK_OP_IGUAL 286
#define TK_OP_DIFERENTE 287
#define TK_OP_MENOR_IGUAL 288
#define TK_OP_MAIOR_IGUAL 289
#define TK_SOMA 290
#define TK_SUBTRACAO 291
#define TK_MULTIPLICACAO 292
#define TK_DIVISAO 293
#define TK_ATRIBUICAO 294
#define TK_DOIS_PONTOS 295
#define TK_VIRGULA 296
#define TK_ABRE_PAR 297
#define TK_FECHA_PAR 298
#define TK_ABRE_COL 299
#define TK_FECHA_COL 300
#define TK_OP_MENOR 301
#define TK_OP_MAIOR 302
#define TK_THEN_NO_ELSE 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "sintatico.y"

    int ival;
    float fval;
    char *sval;
    VarType tval; // Tipo da variável (int, float, etc.)
    Param* pval;

#line 242 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_ID = 3,                      /* TK_ID  */
  YYSYMBOL_TK_TEXTO = 4,                   /* TK_TEXTO  */
  YYSYMBOL_TK_NUMERO_INT = 5,              /* TK_NUMERO_INT  */
  YYSYMBOL_TK_NUMERO_FLOAT = 6,            /* TK_NUMERO_FLOAT  */
  YYSYMBOL_TK_FUNCAO = 7,                  /* TK_FUNCAO  */
  YYSYMBOL_TK_INICIO = 8,                  /* TK_INICIO  */
  YYSYMBOL_TK_SE = 9,                      /* TK_SE  */
  YYSYMBOL_TK_ENTAO = 10,                  /* TK_ENTAO  */
  YYSYMBOL_TK_SENAO = 11,                  /* TK_SENAO  */
  YYSYMBOL_TK_VAR = 12,                    /* TK_VAR  */
  YYSYMBOL_TK_ENQUANTO = 13,               /* TK_ENQUANTO  */
  YYSYMBOL_TK_FACA = 14,                   /* TK_FACA  */
  YYSYMBOL_TK_FIM = 15,                    /* TK_FIM  */
  YYSYMBOL_TK_RETORNE = 16,                /* TK_RETORNE  */
  YYSYMBOL_TK_INT_TYPE = 17,               /* TK_INT_TYPE  */
  YYSYMBOL_TK_FLOAT_TYPE = 18,             /* TK_FLOAT_TYPE  */
  YYSYMBOL_TK_STRING_TYPE = 19,            /* TK_STRING_TYPE  */
  YYSYMBOL_TK_BOOL_TYPE = 20,              /* TK_BOOL_TYPE  */
  YYSYMBOL_TK_LIST_TYPE = 21,              /* TK_LIST_TYPE  */
  YYSYMBOL_TK_TAMANHO = 22,                /* TK_TAMANHO  */
  YYSYMBOL_TK_CONCATENA = 23,              /* TK_CONCATENA  */
  YYSYMBOL_TK_SUBLISTA = 24,               /* TK_SUBLISTA  */
  YYSYMBOL_TK_ESCREVA = 25,                /* TK_ESCREVA  */
  YYSYMBOL_TK_LEIA = 26,                   /* TK_LEIA  */
  YYSYMBOL_TK_VERDADEIRO = 27,             /* TK_VERDADEIRO  */
  YYSYMBOL_TK_FALSO = 28,                  /* TK_FALSO  */
  YYSYMBOL_TK_OP_E = 29,                   /* TK_OP_E  */
  YYSYMBOL_TK_OP_OU = 30,                  /* TK_OP_OU  */
  YYSYMBOL_TK_OP_IGUAL = 31,               /* TK_OP_IGUAL  */
  YYSYMBOL_TK_OP_DIFERENTE = 32,           /* TK_OP_DIFERENTE  */
  YYSYMBOL_TK_OP_MENOR_IGUAL = 33,         /* TK_OP_MENOR_IGUAL  */
  YYSYMBOL_TK_OP_MAIOR_IGUAL = 34,         /* TK_OP_MAIOR_IGUAL  */
  YYSYMBOL_TK_SOMA = 35,                   /* TK_SOMA  */
  YYSYMBOL_TK_SUBTRACAO = 36,              /* TK_SUBTRACAO  */
  YYSYMBOL_TK_MULTIPLICACAO = 37,          /* TK_MULTIPLICACAO  */
  YYSYMBOL_TK_DIVISAO = 38,                /* TK_DIVISAO  */
  YYSYMBOL_TK_ATRIBUICAO = 39,             /* TK_ATRIBUICAO  */
  YYSYMBOL_TK_DOIS_PONTOS = 40,            /* TK_DOIS_PONTOS  */
  YYSYMBOL_TK_VIRGULA = 41,                /* TK_VIRGULA  */
  YYSYMBOL_TK_ABRE_PAR = 42,               /* TK_ABRE_PAR  */
  YYSYMBOL_TK_FECHA_PAR = 43,              /* TK_FECHA_PAR  */
  YYSYMBOL_TK_ABRE_COL = 44,               /* TK_ABRE_COL  */
  YYSYMBOL_TK_FECHA_COL = 45,              /* TK_FECHA_COL  */
  YYSYMBOL_TK_OP_MENOR = 46,               /* TK_OP_MENOR  */
  YYSYMBOL_TK_OP_MAIOR = 47,               /* TK_OP_MAIOR  */
  YYSYMBOL_TK_THEN_NO_ELSE = 48,           /* TK_THEN_NO_ELSE  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_programa = 50,                  /* programa  */
  YYSYMBOL_statement_list_opt = 51,        /* statement_list_opt  */
  YYSYMBOL_statement_list = 52,            /* statement_list  */
  YYSYMBOL_statement = 53,                 /* statement  */
  YYSYMBOL_decl = 54,                      /* decl  */
  YYSYMBOL_param_lista_opt = 55,           /* param_lista_opt  */
  YYSYMBOL_param_lista = 56,               /* param_lista  */
  YYSYMBOL_param = 57,                     /* param  */
  YYSYMBOL_atribuicao = 58,                /* atribuicao  */
  YYSYMBOL_condicional = 59,               /* condicional  */
  YYSYMBOL_repeticao = 60,                 /* repeticao  */
  YYSYMBOL_saida = 61,                     /* saida  */
  YYSYMBOL_entrada = 62,                   /* entrada  */
  YYSYMBOL_retorno = 63,                   /* retorno  */
  YYSYMBOL_bloco = 64,                     /* bloco  */
  YYSYMBOL_65_1 = 65,                      /* $@1  */
  YYSYMBOL_expressao = 66,                 /* expressao  */
  YYSYMBOL_expressao_lista_opt = 67,       /* expressao_lista_opt  */
  YYSYMBOL_expressao_lista = 68,           /* expressao_lista  */
  YYSYMBOL_valor = 69,                     /* valor  */
  YYSYMBOL_tipo = 70                       /* tipo  */
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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    72,    74,    78,    79,    83,    84,    85,
      86,    87,    88,    89,    90,    94,    99,   105,   117,   118,
     122,   126,   138,   148,   156,   157,   161,   165,   169,   177,
     187,   187,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   215,   226,   227,
     228,   242,   243,   247,   248,   257,   258,   259,   260,   261,
     262,   268,   269,   270,   271,   272
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_ID", "TK_TEXTO",
  "TK_NUMERO_INT", "TK_NUMERO_FLOAT", "TK_FUNCAO", "TK_INICIO", "TK_SE",
  "TK_ENTAO", "TK_SENAO", "TK_VAR", "TK_ENQUANTO", "TK_FACA", "TK_FIM",
  "TK_RETORNE", "TK_INT_TYPE", "TK_FLOAT_TYPE", "TK_STRING_TYPE",
  "TK_BOOL_TYPE", "TK_LIST_TYPE", "TK_TAMANHO", "TK_CONCATENA",
  "TK_SUBLISTA", "TK_ESCREVA", "TK_LEIA", "TK_VERDADEIRO", "TK_FALSO",
  "TK_OP_E", "TK_OP_OU", "TK_OP_IGUAL", "TK_OP_DIFERENTE",
  "TK_OP_MENOR_IGUAL", "TK_OP_MAIOR_IGUAL", "TK_SOMA", "TK_SUBTRACAO",
  "TK_MULTIPLICACAO", "TK_DIVISAO", "TK_ATRIBUICAO", "TK_DOIS_PONTOS",
  "TK_VIRGULA", "TK_ABRE_PAR", "TK_FECHA_PAR", "TK_ABRE_COL",
  "TK_FECHA_COL", "TK_OP_MENOR", "TK_OP_MAIOR", "TK_THEN_NO_ELSE",
  "$accept", "programa", "statement_list_opt", "statement_list",
  "statement", "decl", "param_lista_opt", "param_lista", "param",
  "atribuicao", "condicional", "repeticao", "saida", "entrada", "retorno",
  "bloco", "$@1", "expressao", "expressao_lista_opt", "expressao_lista",
  "valor", "tipo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-106)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     109,   -32,    12,  -106,     5,    13,     5,     5,   -25,   -17,
      26,  -106,   109,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,     5,   -12,   109,   -38,  -106,  -106,  -106,   -11,
      -8,  -106,  -106,     5,     5,    38,  -106,    -5,    63,   221,
       5,    34,  -106,  -106,   221,    35,    24,     5,     5,     5,
       5,   107,   221,    -3,    -1,    33,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     3,    33,
     126,     0,    10,     8,    25,  -106,  -106,    22,   145,   164,
     183,  -106,  -106,     5,    67,   257,   240,   274,   274,   274,
     274,   -24,   -24,  -106,  -106,   274,   274,  -106,  -106,  -106,
    -106,  -106,    41,  -106,  -106,  -106,     3,    42,    35,  -106,
    -106,  -106,     5,   221,    33,     5,  -106,     3,  -106,   202,
    -106,   221,  -106,  -106
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     2,     4,     5,     7,     8,     9,    10,    11,    12,
      14,    13,     0,     0,     3,    46,    57,    55,    56,     0,
       0,    58,    59,     0,    51,     0,    45,     0,     0,    29,
       0,     0,     1,     6,    23,    18,     0,    51,     0,     0,
       0,     0,    53,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    20,    31,     0,     0,     0,
       0,    44,    60,     0,    24,    42,    43,    36,    37,    40,
      41,    32,    33,    34,    35,    38,    39,    61,    62,    63,
      64,    65,    16,    26,    27,    28,     0,     0,     0,    47,
      50,    48,     0,    54,     0,     0,    22,     0,    21,     0,
      25,    15,    17,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -106,  -106,    57,  -106,    71,  -106,  -106,  -106,   -22,  -106,
    -106,  -106,  -106,  -106,  -106,   -50,  -106,    -4,    40,  -106,
    -106,  -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    14,    73,    74,    75,    15,
      16,    17,    18,    19,    20,    21,    24,    52,    53,    54,
      36,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      35,   116,    38,    39,    47,    84,    48,    22,    25,    26,
      27,    28,   122,    64,    65,    23,    37,    40,    44,   103,
      97,    98,    99,   100,   101,    41,    42,    29,    30,    51,
      45,    49,    31,    32,    50,    68,    70,    71,    72,    76,
      83,     3,    82,   105,    78,    79,    80,    33,    55,    34,
     106,   107,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   120,   109,   108,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    69,   114,   113,
     115,    46,   117,    43,    66,    67,   118,    77,     0,     0,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,   119,    66,
      67,   121,     1,     0,     0,     0,     2,     3,     4,     0,
       0,     5,     6,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
      81,     0,     0,    66,    67,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,   104,
       0,     0,    66,    67,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
     110,    66,    67,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,     0,     0,     0,   111,     0,     0,
      66,    67,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,   112,     0,     0,     0,     0,    66,
      67,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,     0,     0,     0,   123,     0,     0,    66,    67,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,    66,    67,    56,
       0,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,    66,    67,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
      -1,    -1
};

static const yytype_int8 yycheck[] =
{
       4,   106,     6,     7,    42,    55,    44,    39,     3,     4,
       5,     6,   117,    37,    38,     3,     3,    42,    22,    69,
      17,    18,    19,    20,    21,    42,     0,    22,    23,    33,
      42,    42,    27,    28,    42,    40,    40,     3,     3,    15,
      41,     8,    45,    43,    48,    49,    50,    42,    10,    44,
      40,    43,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   114,    43,    41,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    14,    11,    83,
      39,    24,    40,    12,    46,    47,   108,    47,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,   112,    46,
      47,   115,     3,    -1,    -1,    -1,     7,     8,     9,    -1,
      -1,    12,    13,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    47,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    47,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    47,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    47,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,     9,    12,    13,    16,    25,    26,
      50,    51,    52,    53,    54,    58,    59,    60,    61,    62,
      63,    64,    39,     3,    65,     3,     4,     5,     6,    22,
      23,    27,    28,    42,    44,    66,    69,     3,    66,    66,
      42,    42,     0,    53,    66,    42,    51,    42,    44,    42,
      42,    66,    66,    67,    68,    10,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    46,    47,    40,    14,
      66,     3,     3,    55,    56,    57,    15,    67,    66,    66,
      66,    43,    45,    41,    64,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    17,    18,    19,
      20,    21,    70,    64,    43,    43,    40,    43,    41,    43,
      45,    43,    41,    66,    11,    39,    70,    40,    57,    66,
      64,    66,    70,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    55,    55,
      56,    56,    57,    58,    59,    59,    60,    61,    62,    63,
      65,    64,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     4,     7,     0,     1,
       1,     3,     3,     3,     4,     6,     4,     4,     4,     2,
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     4,     4,     6,
       4,     0,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1
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
  case 2: /* programa: statement_list_opt  */
#line 69 "sintatico.y"
                       { printf("Análise sintática e semântica concluída com sucesso!\n"); }
#line 1418 "y.tab.c"
    break;

  case 15: /* decl: TK_VAR TK_ID TK_DOIS_PONTOS tipo TK_ATRIBUICAO expressao  */
#line 94 "sintatico.y"
                                                             {
        if (!insertSymbol((yyvsp[-4].sval), (yyvsp[-2].tval))) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' já declarada neste escopo.\n", yylineno, (yyvsp[-4].sval));
        }
    }
#line 1428 "y.tab.c"
    break;

  case 16: /* decl: TK_VAR TK_ID TK_DOIS_PONTOS tipo  */
#line 99 "sintatico.y"
                                       {
        if (!insertSymbol((yyvsp[-2].sval), (yyvsp[0].tval))) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' já declarada neste escopo.\n", yylineno, (yyvsp[-2].sval));
        }
        free((yyvsp[-2].sval));
    }
#line 1439 "y.tab.c"
    break;

  case 17: /* decl: TK_FUNCAO TK_ID TK_ABRE_PAR param_lista_opt TK_FECHA_PAR TK_DOIS_PONTOS tipo  */
#line 106 "sintatico.y"
      { 
          registerFunction((yyvsp[-5].sval), (yyvsp[0].tval), (yyvsp[-3].pval), yylineno);
          current_function = lookupFunction((yyvsp[-5].sval));
          pushScope();
          if (current_function) {
              Param* p = current_function->params;
          }
      }
#line 1452 "y.tab.c"
    break;

  case 18: /* param_lista_opt: %empty  */
#line 117 "sintatico.y"
                { (yyval.pval) = NULL; }
#line 1458 "y.tab.c"
    break;

  case 19: /* param_lista_opt: param_lista  */
#line 118 "sintatico.y"
                  { (yyval.pval) = (yyvsp[0].pval); }
#line 1464 "y.tab.c"
    break;

  case 20: /* param_lista: param  */
#line 123 "sintatico.y"
    {
        (yyval.pval) = (yyvsp[0].pval); 
    }
#line 1472 "y.tab.c"
    break;

  case 21: /* param_lista: param_lista TK_VIRGULA param  */
#line 127 "sintatico.y"
    {
        Param* head = (yyvsp[-2].pval);       
        while(head->next != NULL) {
            head = head->next;
        }
        head->next = (yyvsp[0].pval);       
        (yyval.pval) = (yyvsp[-2].pval);               
    }
#line 1485 "y.tab.c"
    break;

  case 22: /* param: TK_ID TK_DOIS_PONTOS tipo  */
#line 138 "sintatico.y"
                              {
        if (!insertSymbol((yyvsp[-2].sval), (yyvsp[0].tval))) { 
             fprintf(stderr, "Erro Semântico na linha %d: Parâmetro '%s' já declarado.\n", yylineno, (yyvsp[-2].sval));
        }
        (yyval.pval) = createParam((yyvsp[0].tval)); 
        free((yyvsp[-2].sval)); 
    }
#line 1497 "y.tab.c"
    break;

  case 23: /* atribuicao: TK_ID TK_ATRIBUICAO expressao  */
#line 148 "sintatico.y"
                                  {
        if (!lookupSymbol((yyvsp[-2].sval))) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' não declarada.\n", yylineno, (yyvsp[-2].sval));
        }
    }
#line 1507 "y.tab.c"
    break;

  case 28: /* entrada: TK_LEIA TK_ABRE_PAR TK_ID TK_FECHA_PAR  */
#line 169 "sintatico.y"
                                           {
        if (!lookupSymbol((yyvsp[-1].sval))) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' não declarada.\n", yylineno, (yyvsp[-1].sval));
        }
    }
#line 1517 "y.tab.c"
    break;

  case 29: /* retorno: TK_RETORNE expressao  */
#line 177 "sintatico.y"
                         {
        if (current_function == NULL) {
            fprintf(stderr, "Erro Semântico na linha %d: Comando 'retorne' fora de uma função.\n", yylineno);
        } else if ((yyvsp[0].tval) != current_function->returnType) {
            fprintf(stderr, "Erro Semântico na linha %d: Tipo de retorno incompatível na função '%s'.\n", yylineno, current_function->name);
        }
    }
#line 1529 "y.tab.c"
    break;

  case 30: /* $@1: %empty  */
#line 187 "sintatico.y"
              { pushScope(); }
#line 1535 "y.tab.c"
    break;

  case 31: /* bloco: TK_INICIO $@1 statement_list_opt TK_FIM  */
#line 187 "sintatico.y"
                                                         { popScope(); }
#line 1541 "y.tab.c"
    break;

  case 32: /* expressao: expressao TK_SOMA expressao  */
#line 191 "sintatico.y"
                                          { (yyval.tval) = tipo_resultante((yyvsp[-2].tval), (yyvsp[0].tval)); }
#line 1547 "y.tab.c"
    break;

  case 33: /* expressao: expressao TK_SUBTRACAO expressao  */
#line 192 "sintatico.y"
                                          { (yyval.tval) = tipo_resultante((yyvsp[-2].tval), (yyvsp[0].tval)); }
#line 1553 "y.tab.c"
    break;

  case 34: /* expressao: expressao TK_MULTIPLICACAO expressao  */
#line 193 "sintatico.y"
                                          { (yyval.tval) = tipo_resultante((yyvsp[-2].tval), (yyvsp[0].tval)); }
#line 1559 "y.tab.c"
    break;

  case 35: /* expressao: expressao TK_DIVISAO expressao  */
#line 194 "sintatico.y"
                                          { (yyval.tval) = TYPE_FLOAT; }
#line 1565 "y.tab.c"
    break;

  case 36: /* expressao: expressao TK_OP_IGUAL expressao  */
#line 195 "sintatico.y"
                                          { (yyval.tval) = TYPE_BOOL; }
#line 1571 "y.tab.c"
    break;

  case 37: /* expressao: expressao TK_OP_DIFERENTE expressao  */
#line 196 "sintatico.y"
                                          { (yyval.tval) = TYPE_BOOL; }
#line 1577 "y.tab.c"
    break;

  case 38: /* expressao: expressao TK_OP_MENOR expressao  */
#line 197 "sintatico.y"
                                          { (yyval.tval) = TYPE_BOOL; }
#line 1583 "y.tab.c"
    break;

  case 39: /* expressao: expressao TK_OP_MAIOR expressao  */
#line 198 "sintatico.y"
                                          { (yyval.tval) = TYPE_BOOL; }
#line 1589 "y.tab.c"
    break;

  case 40: /* expressao: expressao TK_OP_MENOR_IGUAL expressao  */
#line 199 "sintatico.y"
                                            { (yyval.tval) = TYPE_BOOL; }
#line 1595 "y.tab.c"
    break;

  case 41: /* expressao: expressao TK_OP_MAIOR_IGUAL expressao  */
#line 200 "sintatico.y"
                                            { (yyval.tval) = TYPE_BOOL; }
#line 1601 "y.tab.c"
    break;

  case 42: /* expressao: expressao TK_OP_E expressao  */
#line 201 "sintatico.y"
                                          { (yyval.tval) = TYPE_BOOL; }
#line 1607 "y.tab.c"
    break;

  case 43: /* expressao: expressao TK_OP_OU expressao  */
#line 202 "sintatico.y"
                                          { (yyval.tval) = TYPE_BOOL; }
#line 1613 "y.tab.c"
    break;

  case 44: /* expressao: TK_ABRE_PAR expressao TK_FECHA_PAR  */
#line 203 "sintatico.y"
                                          { (yyval.tval) = (yyvsp[-1].tval); }
#line 1619 "y.tab.c"
    break;

  case 45: /* expressao: valor  */
#line 204 "sintatico.y"
                                        { (yyval.tval) = (yyvsp[0].tval); }
#line 1625 "y.tab.c"
    break;

  case 46: /* expressao: TK_ID  */
#line 205 "sintatico.y"
                                                 {
                                                    Symbol* sym = lookupSymbol((yyvsp[0].sval));
                                                    if (!sym) {
                                                        fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' não declarada.\n", yylineno, (yyvsp[0].sval));
                                                        (yyval.tval) = TYPE_UNDEFINED;
                                                    } else {
                                                        (yyval.tval) = sym->type;
                                                    }
                                                    free((yyvsp[0].sval));
                                                 }
#line 1640 "y.tab.c"
    break;

  case 47: /* expressao: TK_ID TK_ABRE_PAR expressao_lista_opt TK_FECHA_PAR  */
#line 215 "sintatico.y"
                                                         {
                                                    FuncSymbol* func = lookupFunction((yyvsp[-3].sval));
                                                    if (!func) {
                                                        fprintf(stderr, "Erro Semântico na linha %d: Função '%s' não declarada.\n", yylineno, (yyvsp[-3].sval));
                                                        (yyval.tval) = TYPE_UNDEFINED;
                                                    } else {
                                                        // Sua lógica de verificação de parâmetros vai aqui (já está correta)
                                                        (yyval.tval) = func->returnType;
                                                    }
                                                    free((yyvsp[-3].sval));
                                                 }
#line 1656 "y.tab.c"
    break;

  case 48: /* expressao: TK_TAMANHO TK_ABRE_PAR expressao TK_FECHA_PAR  */
#line 226 "sintatico.y"
                                                    { (yyval.tval) = TYPE_INT; }
#line 1662 "y.tab.c"
    break;

  case 49: /* expressao: TK_CONCATENA TK_ABRE_PAR expressao TK_VIRGULA expressao TK_FECHA_PAR  */
#line 227 "sintatico.y"
                                                                           { (yyval.tval) = TYPE_LIST; }
#line 1668 "y.tab.c"
    break;

  case 50: /* expressao: TK_ID TK_ABRE_COL expressao TK_FECHA_COL  */
#line 228 "sintatico.y"
                                               {
        Symbol* sym = lookupSymbol((yyvsp[-3].sval));
        if (!sym || sym->type != TYPE_LIST) {
            fprintf(stderr, "Erro Semântico: Tentativa de indexar '%s' que não é uma lista.\n", (yyvsp[-3].sval));
            (yyval.tval) = TYPE_UNDEFINED;
        } else {
            (yyval.tval) = TYPE_INT;
        }
        free((yyvsp[-3].sval));
    }
#line 1683 "y.tab.c"
    break;

  case 51: /* expressao_lista_opt: %empty  */
#line 242 "sintatico.y"
                { (yyval.pval) = NULL; }
#line 1689 "y.tab.c"
    break;

  case 52: /* expressao_lista_opt: expressao_lista  */
#line 243 "sintatico.y"
                        { (yyval.pval) = (yyvsp[0].pval); }
#line 1695 "y.tab.c"
    break;

  case 53: /* expressao_lista: expressao  */
#line 247 "sintatico.y"
              { (yyval.pval) = createParam((yyvsp[0].tval)); }
#line 1701 "y.tab.c"
    break;

  case 54: /* expressao_lista: expressao_lista TK_VIRGULA expressao  */
#line 248 "sintatico.y"
                                           {
        Param* head = (yyvsp[-2].pval);
        while(head->next != NULL) head = head->next;
        head->next = createParam((yyvsp[0].tval));
        (yyval.pval) = (yyvsp[-2].pval);
    }
#line 1712 "y.tab.c"
    break;

  case 55: /* valor: TK_NUMERO_INT  */
#line 257 "sintatico.y"
                    { (yyval.tval) = TYPE_INT; }
#line 1718 "y.tab.c"
    break;

  case 56: /* valor: TK_NUMERO_FLOAT  */
#line 258 "sintatico.y"
                      { (yyval.tval) = TYPE_FLOAT; }
#line 1724 "y.tab.c"
    break;

  case 57: /* valor: TK_TEXTO  */
#line 259 "sintatico.y"
                      { (yyval.tval) = TYPE_STRING; }
#line 1730 "y.tab.c"
    break;

  case 58: /* valor: TK_VERDADEIRO  */
#line 260 "sintatico.y"
                      { (yyval.tval) = TYPE_BOOL; }
#line 1736 "y.tab.c"
    break;

  case 59: /* valor: TK_FALSO  */
#line 261 "sintatico.y"
                      { (yyval.tval) = TYPE_BOOL; }
#line 1742 "y.tab.c"
    break;

  case 60: /* valor: TK_ABRE_COL expressao_lista_opt TK_FECHA_COL  */
#line 262 "sintatico.y"
                                                   { (yyval.tval) = TYPE_LIST; }
#line 1748 "y.tab.c"
    break;

  case 61: /* tipo: TK_INT_TYPE  */
#line 268 "sintatico.y"
                   { (yyval.tval) = TYPE_INT; }
#line 1754 "y.tab.c"
    break;

  case 62: /* tipo: TK_FLOAT_TYPE  */
#line 269 "sintatico.y"
                     { (yyval.tval) = TYPE_FLOAT; }
#line 1760 "y.tab.c"
    break;

  case 63: /* tipo: TK_STRING_TYPE  */
#line 270 "sintatico.y"
                     { (yyval.tval) = TYPE_STRING; }
#line 1766 "y.tab.c"
    break;

  case 64: /* tipo: TK_BOOL_TYPE  */
#line 271 "sintatico.y"
                     { (yyval.tval) = TYPE_BOOL; }
#line 1772 "y.tab.c"
    break;

  case 65: /* tipo: TK_LIST_TYPE  */
#line 272 "sintatico.y"
                     { (yyval.tval) = TYPE_LIST; }
#line 1778 "y.tab.c"
    break;


#line 1782 "y.tab.c"

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

#line 275 "sintatico.y"

/* ======================================================= */
/* Seção 4: Código C Adicional                             */
/* ======================================================= */

void yyerror(const char *s) {
    fprintf(stderr, "Erro Sintático na linha %d perto de '%s': %s\n", yylineno, yytext, s);
}

int main(int argc, char *argv[]) {
    // Inicializa o escopo global
    pushScope(); 

    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Erro ao abrir arquivo");
            return 1;
        }
        extern FILE *yyin;
        yyin = file;
    }

    yyparse();
    
    printf("\n--- Tabela de Símbolos Final ---\n");
    printSymbolTable();
    printFunctionTable();
    clearFunctionTable();
    clearSymbolTable(); // Limpa a memória
    return 0;
}
