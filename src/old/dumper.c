/**
 * @file dumper.c
 *
 * @brief Functions that implement the AST dumper infrastructure.
 *
 */
#ifdef ENABLE_DUMP
#include "ast.h"
#include "parser.h"
#include <stdarg.h>

const static int increment = 2;
static int padding = 0;

const char* scopeToStr(int scope) {

    return (scope == PUBLIC)? "PUBLIC":
            (scope == PRIVATE)? "PRIVATE":
            (scope == PROTECTED)? "PROTECTED": "UNKNOWN";
}

const char* typeToStr(int type) {

    return (type == NUMBER)? "NUMBER" :
            (type == NOTHING)? "NOTHING" :
            (type == STRING)? "STRING" :
            (type == LIST)? "LIST" :
            (type == DICT)? "DICT" :
            (type == BOOLEAN)? "BOOLEAN" : "UNKNOWN";
}

const char* astTypeToStr(AstType t) {

    return (t == AST_UNKNOWN)? "UNKNOWN":
        (t == AST_NAMESPACE)? "NAMESPACE":
        (t == AST_CLASS_DEF)? "CLASS":
        (t == AST_STRUCT_DECL)? "STRUCT":
        (t == AST_FUNC_DECL)? "FUNC_DECL":
        (t == AST_FUNC_DEF)? "FUNC_DEF":
        (t == AST_CONSTR_DECL)? "CONSTR_DECL":
        (t == AST_DESTR_DECL)? "DESTR_DECL":
        (t == AST_DATA_DECL)? "DATA_DECL":
        (t == AST_DATA_DEF)? "DATA_DEF":
        (t == AST_SYMBOL_DECL)? "SYMBOL_DECL":
        (t == AST_COMPOUND_NAME)? "COMPOUND_NAME":
        (t == AST_TYPE_NAME)? "TYPE_NAME":
        (t == AST_SCOPE)? "SCOPE": "INVALID";
}

void dump_line(const char* fmt, ...) {

    for(int i = 0; i < padding; i++)
        printf(" ");

    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}

void dump_inc() {

    padding += increment;
}

void dump_dec() {

    padding -= increment;
    if(padding < 0)
        padding = 0;
}

#endif
