/**
 * @file expression.h
 *
 */
#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

#include "ast.h"

typedef enum {
    INVALID_EXPRESSION,
} ExpressionType;

typedef struct {
    Ast ast;
    ExpressionType type;
} Expression;

Expression* createExpression();
void destroyExpression(Expression*);

#ifdef ENABLE_DUMP
void dumpExpression(Expression* ptr);
#endif

#endif
