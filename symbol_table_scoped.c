// Ficheiro: symbol_table_scoped.c (Versão Corrigida e Final)

#include "symbol_table_scoped.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Variáveis globais para gerir a árvore de escopos
static Scope* root_scope = NULL;
static Scope* current_scope = NULL;
static int next_scope_id = 0;

// Função auxiliar para converter o tipo em string
const char* type_to_string_local(VarType type) {
    switch (type) {
        case TYPE_INT:    return "int";
        case TYPE_FLOAT:  return "float";
        case TYPE_STRING: return "string";
        case TYPE_BOOL:   return "bool";
        case TYPE_LIST:   return "list";
        case TYPE_FUNC:   return "funcao";
        default:          return "desconhecido";
    }
}

/**
 * CORREÇÃO: pushScope agora cria um novo escopo como filho do escopo atual.
 * Se nenhum escopo existir, ele cria o escopo raiz (global).
 */
void pushScope() {
    Scope *newScope = (Scope *)malloc(sizeof(Scope));
    if (!newScope) exit(1);
    
    newScope->id = next_scope_id++;
    newScope->symbols = NULL;
    newScope->parent = current_scope;
    newScope->children = NULL;
    newScope->next_sibling = NULL;

    if (current_scope == NULL) { // É a primeira chamada, cria a raiz.
        root_scope = newScope;
    } else {
        // Anexa o novo escopo como filho do atual.
        if (current_scope->children == NULL) {
            current_scope->children = newScope;
        } else {
            Scope* sibling = current_scope->children;
            while (sibling->next_sibling != NULL) {
                sibling = sibling->next_sibling;
            }
            sibling->next_sibling = newScope;
        }
    }
    current_scope = newScope;
}

/**
 * CORREÇÃO: popScope agora é NÃO-DESTRUTIVO. Ele apenas move o ponteiro
 * 'current_scope' de volta para o pai, sem apagar nenhum dado.
 */
void popScope() {
    if (current_scope != NULL && current_scope->parent != NULL) {
        current_scope = current_scope->parent;
    }
}

// Lógica de inserção (permanece a mesma, insere no escopo atual)
bool insertSymbol(const char *name, VarType type) {
    if (current_scope == NULL) {
         // Esta chamada inicializa o escopo global (raiz) se ainda não existir.
        pushScope();
    }
    Symbol *sym = current_scope->symbols;
    while (sym != NULL) {
        if (strcmp(sym->name, name) == 0) {
            return false;
        }
        sym = sym->next;
    }
    Symbol *newSym = (Symbol *)malloc(sizeof(Symbol));
    newSym->name = strdup(name);
    newSym->type = type;
    newSym->next = current_scope->symbols;
    current_scope->symbols = newSym;
    return true;
}

// Lógica de procura (permanece a mesma, sobe a árvore através dos pais)
Symbol* lookupSymbol(const char *name) {
    Scope *scope = current_scope;
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


// Função auxiliar recursiva para imprimir a árvore de escopos.
void print_scope_recursive(Scope* scope) {
    if (scope == NULL) return;

    printf("Escopo %d:\n", scope->id);
    if (scope->symbols == NULL) {
        printf("  (nenhuma variável declarada)\n");
    } else {
        Symbol* sym = scope->symbols;
        Symbol* reversed_list = NULL;
        while (sym != NULL) {
            Symbol* temp = (Symbol*)malloc(sizeof(Symbol));
            temp->name = sym->name;
            temp->type = sym->type;
            temp->next = reversed_list;
            reversed_list = temp;
            sym = sym->next;
        }
        
        while (reversed_list != NULL) {
            printf("  %s : %s\n", reversed_list->name, type_to_string_local(reversed_list->type));
            Symbol* to_free = reversed_list;
            reversed_list = reversed_list->next;
            free(to_free);
        }
    }
    printf("\n");

    print_scope_recursive(scope->children);
    print_scope_recursive(scope->next_sibling);
}

/**
 * CORREÇÃO: printSymbolTable agora inicia a impressão recursiva a partir da raiz.
 */
void printSymbolTable() {
    printf("\n[Tabela de Símbolos]\n");
    print_scope_recursive(root_scope);
    printf("---------------------\n");
}


// Função auxiliar recursiva para libertar toda a memória.
void clear_scope_recursive(Scope* scope) {
    if (scope == NULL) return;

    clear_scope_recursive(scope->children);
    clear_scope_recursive(scope->next_sibling);

    Symbol *sym = scope->symbols;
    while (sym != NULL) {
        Symbol *next = sym->next;
        free(sym->name);
        free(sym);
        sym = next;
    }
    free(scope);
}

/**
 * CORREÇÃO: clearSymbolTable agora inicia a limpeza recursiva a partir da raiz.
 */
void clearSymbolTable() {
    clear_scope_recursive(root_scope);
    root_scope = NULL;
    current_scope = NULL;
    next_scope_id = 0;
}