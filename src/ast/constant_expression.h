/**
 * @file constant_expression.h
 *
 */
#ifndef _CONSTANT_EXPRESSION_H_
#define _CONSTANT_EXPRESSION_H_

#include "ast.h"

typedef enum {
    CONSTANT_EXPRESSION_OK,
    CONSTANT_EXPRESSION_ERROR,
} ConstantExpressionType;

struct _constant_expression_ {
    Ast ast;
    ConstantExpressionType type;
    double num;
    const char* strg;
};

ConstantExpression* createConstantExpression(double, const char*);
void destroyConstantExpression(ConstantExpression*);

#ifdef ENABLE_DUMP
void dumpConstantExpression(ConstantExpression* ptr);
#endif

#endif
