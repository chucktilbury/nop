/**
 * @file compound_name_in_parens_rule.h
 *
 */
#ifndef _COMPOUND_NAME_IN_PARENS_RULE_H_
#define _COMPOUND_NAME_IN_PARENS_RULE_H_

#include "ast.h"

typedef enum {
    COMPOUND_NAME_IN_PARENS_RULE_OK,
    COMPOUND_NAME_IN_PARENS_RULE_ERROR,
} CompoundNameInParensRuleType;

struct _compound_name_in_parens_rule_ {
    Ast ast;
    CompoundNameInParensRuleType type;
    CompoundName* compound_name;
};

CompoundNameInParensRule* createCompoundNameInParensRule(CompoundName*);
void destroyCompoundNameInParensRule(CompoundNameInParensRule*);

#ifdef ENABLE_DUMP
void dumpCompoundNameInParensRule(CompoundNameInParensRule* ptr);
#endif

#endif
