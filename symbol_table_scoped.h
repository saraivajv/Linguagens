
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

typedef struct Scope {
    Symbol *symbols;
    struct Scope *parent;
} Scope;

void pushScope();
void popScope();
bool insertSymbol(const char *name, VarType type);
Symbol* lookupSymbol(const char *name);
VarType getSymbolType(const char *name);
void clearSymbolTable();
void printSymbolTable();

#endif