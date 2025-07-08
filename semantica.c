#include <stdio.h>
#include "semantica.h"

VarType tipo_resultante(VarType t1, VarType t2) {
    if (t1 == TYPE_STRING || t2 == TYPE_STRING ||
        t1 == TYPE_BOOL   || t2 == TYPE_BOOL   ||
        t1 == TYPE_LIST   || t2 == TYPE_LIST) {
        fprintf(stderr, "Erro Semântico: tipos incompatíveis (%d + %d)\n", t1, t2);
        return TYPE_UNDEFINED;
    }

    if (t1 == TYPE_FLOAT || t2 == TYPE_FLOAT)
        return TYPE_FLOAT;

    return TYPE_INT;
}