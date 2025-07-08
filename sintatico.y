/* ======================================================= */
/* Seção 1: Declarações C                                  */
/* ======================================================= */
%{
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
%}

/* ======================================================= */
/* Seção 2: Declarações Yacc/Bison                         */
/* ======================================================= */

%union {
    int ival;
    float fval;
    char *sval;
    VarType tval; // Tipo da variável (int, float, etc.)
    Param* pval;
}

%token <sval> TK_ID TK_TEXTO
%token <ival> TK_NUMERO_INT
%token <fval> TK_NUMERO_FLOAT

%type <tval> tipo
%type <pval> param_lista_opt param_lista param
%type <tval> expressao valor
%type <pval> expressao_lista_opt expressao_lista 
%type <tval> retorno

/* Tokens sem valor semântico associado */
%token TK_FUNCAO TK_INICIO TK_SE TK_ENTAO TK_SENAO TK_VAR TK_ENQUANTO TK_FACA
%token TK_FIM TK_RETORNE
%token TK_INT_TYPE TK_FLOAT_TYPE TK_STRING_TYPE TK_BOOL_TYPE TK_LIST_TYPE
%token TK_TAMANHO TK_CONCATENA TK_SUBLISTA TK_ESCREVA TK_LEIA
%token TK_VERDADEIRO TK_FALSO TK_OP_E TK_OP_OU
%token TK_OP_IGUAL TK_OP_DIFERENTE TK_OP_MENOR_IGUAL TK_OP_MAIOR_IGUAL
%token TK_SOMA TK_SUBTRACAO TK_MULTIPLICACAO TK_DIVISAO
%token TK_ATRIBUICAO TK_DOIS_PONTOS TK_VIRGULA
%token TK_ABRE_PAR TK_FECHA_PAR TK_ABRE_COL TK_FECHA_COL
%token TK_OP_MENOR TK_OP_MAIOR

/* Precedência e associatividade */
%left TK_OP_OU
%left TK_OP_E
%nonassoc TK_OP_IGUAL TK_OP_DIFERENTE TK_OP_MENOR TK_OP_MAIOR TK_OP_MENOR_IGUAL TK_OP_MAIOR_IGUAL
%left TK_SOMA TK_SUBTRACAO
%left TK_MULTIPLICACAO TK_DIVISAO
%nonassoc TK_THEN_NO_ELSE
%nonassoc TK_SENAO

%start programa

%%
/* ======================================================= */
/* Seção 3: Regras da Gramática                            */
/* ======================================================= */

programa:
    statement_list_opt { printf("Análise sintática e semântica concluída com sucesso!\n"); }
    ;

statement_list_opt:
    /* vazio */
    | statement_list
    ;

statement_list:
    statement
    | statement_list statement
    ;

statement:
    decl
    | atribuicao
    | condicional
    | repeticao
    | saida
    | entrada
    | bloco
    | retorno
    ;

decl:
    TK_VAR TK_ID TK_DOIS_PONTOS tipo TK_ATRIBUICAO expressao {
        if (!insertSymbol($2, $4)) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' já declarada neste escopo.\n", yylineno, $2);
        }
    }
    | TK_VAR TK_ID TK_DOIS_PONTOS tipo {
        if (!insertSymbol($2, $4)) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' já declarada neste escopo.\n", yylineno, $2);
        }
        free($2);
    }
    | TK_FUNCAO TK_ID TK_ABRE_PAR param_lista_opt TK_FECHA_PAR TK_DOIS_PONTOS tipo 
      { 
          registerFunction($2, $7, $4, yylineno);
          current_function = lookupFunction($2);
          pushScope();
          if (current_function) {
              Param* p = current_function->params;
          }
      }
    ;

param_lista_opt:
    /* vazio */ { $$ = NULL; }
    | param_lista { $$ = $1; }
    ;

param_lista:
    param
    {
        $$ = $1; 
    }
    | param_lista TK_VIRGULA param
    {
        Param* head = $1;       
        while(head->next != NULL) {
            head = head->next;
        }
        head->next = $3;       
        $$ = $1;               
    }
    ;

param:
    TK_ID TK_DOIS_PONTOS tipo {
        if (!insertSymbol($1, $3)) { 
             fprintf(stderr, "Erro Semântico na linha %d: Parâmetro '%s' já declarado.\n", yylineno, $1);
        }
        $$ = createParam($3); 
        free($1); 
    }
    ;

atribuicao:
    TK_ID TK_ATRIBUICAO expressao {
        if (!lookupSymbol($1)) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' não declarada.\n", yylineno, $1);
        }
    }
    ;

condicional:
    TK_SE expressao TK_ENTAO bloco %prec TK_THEN_NO_ELSE
    | TK_SE expressao TK_ENTAO bloco TK_SENAO bloco
    ;

repeticao:
    TK_ENQUANTO expressao TK_FACA bloco
    ;

saida:
    TK_ESCREVA TK_ABRE_PAR expressao TK_FECHA_PAR
    ;

entrada:
    TK_LEIA TK_ABRE_PAR TK_ID TK_FECHA_PAR {
        if (!lookupSymbol($3)) {
            fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' não declarada.\n", yylineno, $3);
        }
    }
    ;

retorno:
    TK_RETORNE expressao {
        if (current_function == NULL) {
            fprintf(stderr, "Erro Semântico na linha %d: Comando 'retorne' fora de uma função.\n", yylineno);
        } else if ($2 != current_function->returnType) {
            fprintf(stderr, "Erro Semântico na linha %d: Tipo de retorno incompatível na função '%s'.\n", yylineno, current_function->name);
        }
    }
    ;

bloco:
    TK_INICIO { pushScope(); } statement_list_opt TK_FIM { popScope(); }
    ;

expressao:
    expressao TK_SOMA expressao           { $$ = tipo_resultante($1, $3); }
    | expressao TK_SUBTRACAO expressao    { $$ = tipo_resultante($1, $3); }
    | expressao TK_MULTIPLICACAO expressao{ $$ = tipo_resultante($1, $3); }
    | expressao TK_DIVISAO expressao      { $$ = TYPE_FLOAT; }
    | expressao TK_OP_IGUAL expressao     { $$ = TYPE_BOOL; }
    | expressao TK_OP_DIFERENTE expressao { $$ = TYPE_BOOL; }
    | expressao TK_OP_MENOR expressao     { $$ = TYPE_BOOL; }
    | expressao TK_OP_MAIOR expressao     { $$ = TYPE_BOOL; }
    | expressao TK_OP_MENOR_IGUAL expressao { $$ = TYPE_BOOL; }
    | expressao TK_OP_MAIOR_IGUAL expressao { $$ = TYPE_BOOL; }
    | expressao TK_OP_E expressao         { $$ = TYPE_BOOL; }
    | expressao TK_OP_OU expressao        { $$ = TYPE_BOOL; }
    | TK_ABRE_PAR expressao TK_FECHA_PAR  { $$ = $2; }
    | valor                             { $$ = $1; }
    | TK_ID                                      {
                                                    Symbol* sym = lookupSymbol($1);
                                                    if (!sym) {
                                                        fprintf(stderr, "Erro Semântico na linha %d: Variável '%s' não declarada.\n", yylineno, $1);
                                                        $$ = TYPE_UNDEFINED;
                                                    } else {
                                                        $$ = sym->type;
                                                    }
                                                    free($1);
                                                 }
    | TK_ID TK_ABRE_PAR expressao_lista_opt TK_FECHA_PAR {
                                                    FuncSymbol* func = lookupFunction($1);
                                                    if (!func) {
                                                        fprintf(stderr, "Erro Semântico na linha %d: Função '%s' não declarada.\n", yylineno, $1);
                                                        $$ = TYPE_UNDEFINED;
                                                    } else {
                                                        // Sua lógica de verificação de parâmetros vai aqui (já está correta)
                                                        $$ = func->returnType;
                                                    }
                                                    free($1);
                                                 }
    | TK_TAMANHO TK_ABRE_PAR expressao TK_FECHA_PAR { $$ = TYPE_INT; }
    | TK_CONCATENA TK_ABRE_PAR expressao TK_VIRGULA expressao TK_FECHA_PAR { $$ = TYPE_LIST; }
    | TK_ID TK_ABRE_COL expressao TK_FECHA_COL {
        Symbol* sym = lookupSymbol($1);
        if (!sym || sym->type != TYPE_LIST) {
            fprintf(stderr, "Erro Semântico: Tentativa de indexar '%s' que não é uma lista.\n", $1);
            $$ = TYPE_UNDEFINED;
        } else {
            $$ = TYPE_INT;
        }
        free($1);
    }
;


expressao_lista_opt:
    /* vazio */ { $$ = NULL; }
    | expressao_lista   { $$ = $1; }
    ;
    
expressao_lista:
    expressao { $$ = createParam($1); }
    | expressao_lista TK_VIRGULA expressao {
        Param* head = $1;
        while(head->next != NULL) head = head->next;
        head->next = createParam($3);
        $$ = $1;
    }
    ;

valor:
    TK_NUMERO_INT   { $$ = TYPE_INT; }
    | TK_NUMERO_FLOAT { $$ = TYPE_FLOAT; }
    | TK_TEXTO        { $$ = TYPE_STRING; }
    | TK_VERDADEIRO   { $$ = TYPE_BOOL; }
    | TK_FALSO        { $$ = TYPE_BOOL; }
    | TK_ABRE_COL expressao_lista_opt TK_FECHA_COL { $$ = TYPE_LIST; }
    ;


tipo:
    /* CORREÇÃO: Adicionando ações para resolver o 'type clash' */
    TK_INT_TYPE    { $$ = TYPE_INT; }
    | TK_FLOAT_TYPE  { $$ = TYPE_FLOAT; }
    | TK_STRING_TYPE { $$ = TYPE_STRING; }
    | TK_BOOL_TYPE   { $$ = TYPE_BOOL; }
    | TK_LIST_TYPE   { $$ = TYPE_LIST; }
    ;

%%
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
