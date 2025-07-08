/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 171 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
