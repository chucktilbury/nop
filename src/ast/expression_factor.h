/**
 * @file expression_factor.h
 *
 */
#ifndef _EXPRESSION_FACTOR_H_
#define _EXPRESSION_FACTOR_H_

#include "ast.h"

typedef enum {
    EXPRESSION_FACTOR_OK,
    EXPRESSION_FACTOR_ERROR,
} ExpressionFactorType;

struct _expression_factor_ {
    Ast ast;
    ExpressionFactorType type;
    ConstantExpression* constant_expression;
    CompoundName* compound_name;
    ArrayReference* array_reference;
    FuncReference* func_reference;
};

ExpressionFactor* createExpressionFactor(ConstantExpression*, CompoundName*, ArrayReference*, FuncReference*);
void destroyExpressionFactor(ExpressionFactor*);

#ifdef ENABLE_DUMP
void dumpExpressionFactor(ExpressionFactor* ptr);
#endif

#endif
