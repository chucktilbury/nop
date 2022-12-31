/**
 * @file empty_parens_rule.h
 *
 */
#ifndef _EMPTY_PARENS_RULE_H_
#define _EMPTY_PARENS_RULE_H_

#include "ast.h"

typedef enum {
    EMPTY_PARENS_RULE_OK,
    EMPTY_PARENS_RULE_ERROR,
} EmptyParensRuleType;

struct _empty_parens_rule_ {
    Ast ast;
    EmptyParensRuleType type;
};

EmptyParensRule* createEmptyParensRule();
void destroyEmptyParensRule(EmptyParensRule*);

#ifdef ENABLE_DUMP
void dumpEmptyParensRule(EmptyParensRule* ptr);
#endif

#endif
