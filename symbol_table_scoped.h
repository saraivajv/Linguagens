// Ficheiro: symbol_table_scoped.h (Versão Corrigida e Final)

#ifndef SYMBOL_TABLE_SCOPED_H
#define SYMBOL_TABLE_SCOPED_H
#define TYPE_UNDEFINED -1
#include <stdbool.h>

typedef enum {
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_BOOL,
    TYPE_STRING,
    TYPE_LIST,
    TYPE_FUNC
} VarType;

typedef struct Symbol {
    char *name;
    VarType type;
    struct Symbol *next;
} Symbol;

/**
 * CORREÇÃO: A struct Scope agora tem campos para formar uma árvore de escopos.
 */
typedef struct Scope {
    int id;
    Symbol *symbols;
    struct Scope *parent;
    struct Scope *children;
    struct Scope *next_sibling;
} Scope;


void pushScope();
void popScope();
bool insertSymbol(const char *name, VarType type);
Symbol* lookupSymbol(const char *name);
void clearSymbolTable();
void printSymbolTable();

#endif