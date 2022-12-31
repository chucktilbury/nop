/**
 * @file constant_expression.c
 *
 * @brief This is one of the inputs to an expression where the value is
 * determined at compile time.
 *
 */

#include "ast.h"

ConstExpr* createConstNum(double val) {

    ConstExpr* ce = _alloc_ds(ConstExpr);
    initAst(&ce->ast, NULL, AST_CONST_EXPR);

    ce->type = CONST_NUMBER;
    ce->data.number = val;

    return ce;
}

ConstExpr* createConstStrg(const char* str) {

    ConstExpr* ce = _alloc_ds(ConstExpr);
    initAst(&ce->ast, NULL, AST_CONST_EXPR);

    ce->type = CONST_STRING;
    ce->data.string = _copy_str(str);

    return ce;
}

ConstExpr* createConstBool(bool val) {

    ConstExpr* ce = _alloc_ds(ConstExpr);
    initAst(&ce->ast, NULL, AST_CONST_EXPR);

    ce->type = CONST_BOOL;
    ce->data.boolean = val;

    return ce;
}

ConstExpr* createConstOther(void* val) {

    ConstExpr* ce = _alloc_ds(ConstExpr);
    initAst(&ce->ast, NULL, AST_CONST_EXPR);

    ce->type = CONST_OTHER;
    ce->data.other = val;

    return ce;
}

ConstType getConstType(ConstExpr* val) {

    return val->type;
}

#ifdef ENABLE_DUMP
void dumpConstExpr(ConstExpr* val) {

    dump_line("CONST_EXPR: ");
    dumpAst(&val->ast);
    switch(val->type) {
        case CONST_NUMBER: dump_line("    NUMBER: %f\n", val->data.number); break;
        case CONST_STRING: dump_line("    STRING: \"%s\"\n", val->data.string); break;
        case CONST_OTHER: dump_line("     OTHER: %p\n", val->data.other); break;
        default:
            dump_line("UNKNOWN: invalid value\n");
            break;
    }
}
#endif
