/**
 * @file constant_expression.h
 *
 */
#ifndef _CONSTANT_EXPRESSION_H_
#define _CONSTANT_EXPRESSION_H_

#include "ast.h"

typedef enum {
    INVALID_CONSTANT_EXPRESSION,
} ConstantExpressionType;

typedef struct {
    Ast ast;
    ConstantExpressionType type;
} ConstantExpression;

ConstantExpression* createConstantExpression();
void destroyConstantExpression(ConstantExpression*);

#ifdef ENABLE_DUMP
void dumpConstantExpression(ConstantExpression* ptr);
#endif

#endif
