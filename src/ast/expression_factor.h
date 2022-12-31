/**
 * @file expression_factor.h
 *
 */
#ifndef _EXPRESSION_FACTOR_H_
#define _EXPRESSION_FACTOR_H_

#include "ast.h"

typedef enum {
    INVALID_EXPRESSION_FACTOR,
} ExpressionFactorType;

typedef struct {
    Ast ast;
    ExpressionFactorType type;
} ExpressionFactor;

ExpressionFactor* createExpressionFactor();
void destroyExpressionFactor(ExpressionFactor*);

#ifdef ENABLE_DUMP
void dumpExpressionFactor(ExpressionFactor* ptr);
#endif

#endif
