/**
 * @file empty_parens_rule.h
 *
 */
#ifndef _EMPTY_PARENS_RULE_H_
#define _EMPTY_PARENS_RULE_H_

#include "ast.h"

typedef enum {
    INVALID_EMPTY_PARENS_RULE,
} EmptyParensRuleType;

typedef struct {
    Ast ast;
    EmptyParensRuleType type;
} EmptyParensRule;

EmptyParensRule* createEmptyParensRule();
void destroyEmptyParensRule(EmptyParensRule*);

#ifdef ENABLE_DUMP
void dumpEmptyParensRule(EmptyParensRule* ptr);
#endif

#endif
