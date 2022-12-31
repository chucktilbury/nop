/**
 * @file constant_expression.h
 *
 * @brief Constant expression value.
 *
 */
#ifndef _CONSTANT_EXPRESSION_H
#define _CONSTANT_EXPRESSION_H

#include "ast.h"

typedef enum {
    CONST_NUMBER,
    CONST_STRING,
    CONST_BOOL,
    CONST_OTHER,
} ConstType;

typedef struct {
    // this data structure has no name, but we still want to record the
    // location of the definition in case we have to publish an error.
    Ast ast;
    ConstType type;
    union {
        double number;
        char* string;
        bool boolean;
        void* other;
    } data;
} ConstExpr;

ConstExpr* createConstNum(double val);
ConstExpr* createConstStrg(const char* str);
ConstExpr* createConstBool(bool val);
ConstExpr* createConstOther(void* val);

ConstType getConstType(ConstExpr* val);

#ifdef ENABLE_DUMP
void dumpConstExpr(ConstExpr* val);
#endif

#endif /* _CONSTANT_EXPRESSION_H */
