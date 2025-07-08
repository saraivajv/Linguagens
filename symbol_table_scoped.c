
#include "symbol_table_scoped.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static Scope *currentScope = NULL;

void pushScope() {
    Scope *newScope = (Scope *)malloc(sizeof(Scope));
    newScope->symbols = NULL;
    newScope->parent = currentScope;
    currentScope = newScope;
}

void popScope() {
    if (currentScope == NULL) return;
    Symbol *sym = currentScope->symbols;
    while (sym != NULL) {
        Symbol *next = sym->next;
        free(sym->name);
        free(sym);
        sym = next;
    }
    Scope *prev = currentScope->parent;
    free(currentScope);
    currentScope = prev;
}

bool insertSymbol(const char *name, VarType type) {
    if (currentScope == NULL) pushScope();

    Symbol *sym = currentScope->symbols;
    while (sym != NULL) {
        if (strcmp(sym->name, name) == 0) {
            return false;
        }
        sym = sym->next;
    }
    Symbol *newSym = (Symbol *)malloc(sizeof(Symbol));
    newSym->name = strdup(name);
    newSym->type = type;
    newSym->next = currentScope->symbols;
    currentScope->symbols = newSym;
    return true;
}

Symbol* lookupSymbol(const char *name) {
    Scope *scope = currentScope;
    while (scope != NULL) {
        Symbol *sym = scope->symbols;
        while (sym != NULL) {
            if (strcmp(sym->name, name) == 0) {
                return sym;
            }
            sym = sym->next;
        }
        scope = scope->parent;
    }
    return NULL;
}

VarType getSymbolType(const char *name) {
    Scope *scope = currentScope;
    while (scope != NULL) {
        Symbol *sym = scope->symbols;
        while (sym != NULL) {
            if (strcmp(sym->name, name) == 0) {
                return sym->type;
            }
            sym = sym->next;
        }
        scope = scope->parent;
    }
    fprintf(stderr, "Erro: variável '%s' não declarada.\n", name);
    exit(1);
}

void clearSymbolTable() {
    while (currentScope != NULL) {
        popScope();
    }
}

void printSymbolTable() {
    printf("\n[Tabela de Símbolos]\n");
    Scope *scope = currentScope;
    int depth = 0;
    while (scope != NULL) {
        printf("  Escopo %d:\n", depth);
        Symbol *sym = scope->symbols;
        if (sym == NULL) {
            printf("    (vazio)\n");
        }
        while (sym != NULL) {
            const char *typeStr;
            switch (sym->type) {
                case TYPE_INT:    typeStr = "int"; break;
                case TYPE_FLOAT:  typeStr = "float"; break;
                case TYPE_STRING: typeStr = "string"; break;
                case TYPE_BOOL:   typeStr = "bool"; break;
                case TYPE_LIST:   typeStr = "list"; break;
                case TYPE_FUNC:   typeStr = "funcao"; break;
                default:          typeStr = "desconhecido"; break;
            }
            printf("    - %s : %s\n", sym->name, typeStr);
            sym = sym->next;
        }
        scope = scope->parent;
        depth++;
    }
    printf("---------------------\n");

}
