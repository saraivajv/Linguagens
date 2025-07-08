#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func_table.h"

FuncSymbol* function_list = NULL;

int countParams(Param* params) {
    int count = 0;
    Param* current = params;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void registerFunction(char* name, VarType returnType, Param* params, int lineno) {
    if (lookupFunction(name) != NULL) {
        fprintf(stderr, "Erro Semântico na linha %d: Função '%s' já foi declarada.\n", lineno, name);
        free(name);
        freeParams(params);
        return;
    }

    FuncSymbol* newFunc = (FuncSymbol*) malloc(sizeof(FuncSymbol));
    if (!newFunc) {
        fprintf(stderr, "Erro: Falha ao alocar memória para nova função.\n");
        exit(1);
    }
    
    newFunc->name = name;
    newFunc->returnType = returnType;
    newFunc->params = params;
    newFunc->num_params = countParams(params);
    newFunc->next = function_list;
    function_list = newFunc;
}

FuncSymbol* lookupFunction(char* name) {
    FuncSymbol* current = function_list;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

Param* createParam(VarType type) {
    Param* newParam = (Param*) malloc(sizeof(Param));
    if (!newParam) {
        fprintf(stderr, "Erro: Falha ao alocar memória para novo parâmetro.\n");
        exit(1);
    }
    newParam->type = type;
    newParam->next = NULL;
    return newParam;
}

void freeParams(Param* params) {
    Param *current = params;
    while (current != NULL) {
        Param *next = current->next;
        free(current);
        current = next;
    }
}

const char* typeToString(VarType type) {
    switch (type) {
        case TYPE_INT: return "int";
        case TYPE_FLOAT: return "float";
        case TYPE_STRING: return "string";
        case TYPE_BOOL: return "bool";
        case TYPE_LIST: return "list";
        case TYPE_FUNC: return "function";
        case TYPE_UNDEFINED: return "undefined";
        default: return "unknown";
    }
}

void printFunctionTable() {
    printf("--- Tabela de Funções ---\n");
    FuncSymbol* current = function_list;
    if (current == NULL) {
        printf("Nenhuma função declarada.\n");
        return;
    }
    while (current != NULL) {
        printf("Função: %s, Retorno: %s, Parâmetros: %d\n", 
            current->name, typeToString(current->returnType), current->num_params);
        
        Param* p = current->params;
        int i = 1;
        while (p != NULL) {
            printf("  - Param %d: %s\n", i++, typeToString(p->type));
            p = p->next;
        }
        current = current->next;
    }
    printf("-------------------------\n");
}

void clearFunctionTable() {
    FuncSymbol* current = function_list;
    while (current != NULL) {
        FuncSymbol* next = current->next;
        free(current->name);
        freeParams(current->params);
        free(current);
        current = next;
    }
    function_list = NULL;
}