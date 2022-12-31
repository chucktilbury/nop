/**
 * @file expression_in_parens_rule.h
 *
 */
#ifndef _EXPRESSION_IN_PARENS_RULE_H_
#define _EXPRESSION_IN_PARENS_RULE_H_

#include "ast.h"

typedef enum {
    EXPRESSION_IN_PARENS_RULE_OK,
    EXPRESSION_IN_PARENS_RULE_ERROR,
} ExpressionInParensRuleType;

struct _expression_in_parens_rule_ {
    Ast ast;
    ExpressionInParensRuleType type;
    Expression* expression;
    EmptyParensRule* empty_parens_rule;
};

ExpressionInParensRule* createExpressionInParensRule(Expression*, EmptyParensRule*);
void destroyExpressionInParensRule(ExpressionInParensRule*);

#ifdef ENABLE_DUMP
void dumpExpressionInParensRule(ExpressionInParensRule* ptr);
#endif

#endif
