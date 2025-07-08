#ifndef FUNC_TABLE_H
#define FUNC_TABLE_H

#include "symbol_table_scoped.h"

typedef struct Param {
    VarType type;
    struct Param* next;
} Param;

typedef struct FuncSymbol {
    char* name;
    VarType returnType;
    int num_params;
    Param* params;
    struct FuncSymbol* next;
} FuncSymbol;

void registerFunction(char* name, VarType returnType, Param* params, int lineno);

Param* createParam(VarType type);

void freeParams(Param* params);

void printFunctionTable();

FuncSymbol* lookupFunction(char* name);

void clearFunctionTable();

#endif