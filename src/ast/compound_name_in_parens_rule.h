/**
 * @file compound_name_in_parens_rule.h
 *
 */
#ifndef _COMPOUND_NAME_IN_PARENS_RULE_H_
#define _COMPOUND_NAME_IN_PARENS_RULE_H_

#include "ast.h"

typedef enum {
    INVALID_COMPOUND_NAME_IN_PARENS_RULE,
} CompoundNameInParensRuleType;

typedef struct {
    Ast ast;
    CompoundNameInParensRuleType type;
} CompoundNameInParensRule;

CompoundNameInParensRule* createCompoundNameInParensRule();
void destroyCompoundNameInParensRule(CompoundNameInParensRule*);

#ifdef ENABLE_DUMP
void dumpCompoundNameInParensRule(CompoundNameInParensRule* ptr);
#endif

#endif
