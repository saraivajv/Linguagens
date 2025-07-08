%{
#include <stdio.h>
#include <string.h>
#include "symbol_table_scoped.h"
#include "func_table.h"
#include "y.tab.h" 
%}

digit   [0-9]
letter  [a-zA-Z_]
id      {letter}({letter}|{digit})*
num_int {digit}+
num_float {digit}+"."{digit}+
string  \"(\\.|[^\\\"\n])*\" 
comentario_linha \/\/[^\n]*
comentario_bloco \/\*([^*]|\*+[^*/])*\*+\/

%%

[ \t\r]+                { /* Ignora espaços em branco */ }
\n                      { yylineno++; }
{comentario_linha}      { /* Ignora comentário */ }
{comentario_bloco}      { int i; for(i=0; yytext[i]; i++) if(yytext[i] == '\n') yylineno++; }

"funcao"                { return TK_FUNCAO; }
"var"                   { return TK_VAR; }
"int"                   { return TK_INT_TYPE; }
"float"                 { return TK_FLOAT_TYPE; }
"bool"                  { return TK_BOOL_TYPE; }
"string"                { return TK_STRING_TYPE; }
"list"                  { return TK_LIST_TYPE; }
"se"                    { return TK_SE; }
"senao"                 { return TK_SENAO; }
"enquanto"              { return TK_ENQUANTO; }
"faca"                  { return TK_FACA; }
"entao"                 { return TK_ENTAO; }
"inicio"                { return TK_INICIO; }
"fim"                   { return TK_FIM; }
"retorne"               { return TK_RETORNE; }
"escreva"               { return TK_ESCREVA; }
"leia"                  { return TK_LEIA; }
"tamanho"               { return TK_TAMANHO; }
"sublista"              { return TK_SUBLISTA; }
"concatena"             { return TK_CONCATENA; }
"verdadeiro"            { return TK_VERDADEIRO; }
"falso"                 { return TK_FALSO; }
"e"                     { return TK_OP_E; }
"ou"                    { return TK_OP_OU; }

{num_float}             { yylval.fval = atof(yytext); return TK_NUMERO_FLOAT; }
{num_int}               { yylval.ival = atoi(yytext); return TK_NUMERO_INT; }
{string}                { yylval.sval = strdup(yytext); return TK_TEXTO; }
{id}                    { yylval.sval = strdup(yytext); return TK_ID; }

":"                     { return TK_DOIS_PONTOS; }
"("                     { return TK_ABRE_PAR; }
")"                     { return TK_FECHA_PAR; }
","                     { return TK_VIRGULA; }
"["                     { return TK_ABRE_COL; }
"]"                     { return TK_FECHA_COL; }
"+"                     { return TK_SOMA; }
"-"                     { return TK_SUBTRACAO; }
"*"                     { return TK_MULTIPLICACAO; }
"/"                     { return TK_DIVISAO; }
"="                     { return TK_ATRIBUICAO; }
"=="                    { return TK_OP_IGUAL; }
"!="                    { return TK_OP_DIFERENTE; }
"<"                     { return TK_OP_MENOR; }
">"                     { return TK_OP_MAIOR; }
"<="                    { return TK_OP_MENOR_IGUAL; }
">="                    { return TK_OP_MAIOR_IGUAL; }

.                       { fprintf(stderr, "Erro Léxico na linha %d: Caractere inválido '%s'\n", yylineno, yytext); }

%%

int yywrap() {
    return 1; 
}
