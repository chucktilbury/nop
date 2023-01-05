/**
 * @file switch_statement.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
 */
#ifndef _SWITCH_STATEMENT_H_
#define _SWITCH_STATEMENT_H_

#include "ast.h"

typedef enum {
    SWITCH_STATEMENT_OK,
    SWITCH_STATEMENT_ERROR,
} SwitchStatementType;

struct _switch_statement_ {
    Ast ast;
    SwitchStatementType type;
    CompoundNameInParensRule* compound_name_in_parens_rule;
    CaseClauseList* case_clause_list;
};

SwitchStatement* createSwitchStatement(CompoundNameInParensRule*, CaseClauseList*);
AstResult pass1SwitchStatement(SwitchStatement*);
AstResult pass2SwitchStatement(SwitchStatement*);
AstResult pass3SwitchStatement(SwitchStatement*);
AstResult emitSwitchStatement(SwitchStatement*);
AstResult destroySwitchStatement(SwitchStatement*);

#ifdef ENABLE_DUMP
AstResult dumpSwitchStatement(SwitchStatement* ptr);
#endif

#endif
