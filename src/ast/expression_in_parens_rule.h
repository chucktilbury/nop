/**
 * @file expression_in_parens_rule.h
 *
 */
#ifndef _EXPRESSION_IN_PARENS_RULE_H_
#define _EXPRESSION_IN_PARENS_RULE_H_

#include "ast.h"

typedef enum {
    INVALID_EXPRESSION_IN_PARENS_RULE,
} ExpressionInParensRuleType;

typedef struct {
    Ast ast;
    ExpressionInParensRuleType type;
} ExpressionInParensRule;

ExpressionInParensRule* createExpressionInParensRule();
void destroyExpressionInParensRule(ExpressionInParensRule*);

#ifdef ENABLE_DUMP
void dumpExpressionInParensRule(ExpressionInParensRule* ptr);
#endif

#endif
