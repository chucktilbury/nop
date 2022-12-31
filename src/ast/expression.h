/**
 * @file expression.h
 *
 */
#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

#include "ast.h"

typedef enum {
    EXPRESSION_OK,
    EXPRESSION_ERROR,
} ExpressionType;

struct _expression_ {
    Ast ast;
    ExpressionType type;
    ExpressionFactor* expression_factor;
    Expression* expression;
    CastSpecifier* cast_specifier;
    ExpressionInParensRule* expression_in_parens_rule;
};

Expression* createExpression(ExpressionFactor*, Expression*, CastSpecifier*, ExpressionInParensRule*);
void destroyExpression(Expression*);

#ifdef ENABLE_DUMP
void dumpExpression(Expression* ptr);
#endif

#endif
