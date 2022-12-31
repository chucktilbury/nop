/**
 * @file except_clause.h
 *
 */
#ifndef _EXCEPT_CLAUSE_H_
#define _EXCEPT_CLAUSE_H_

#include "ast.h"

typedef enum {
    EXCEPT_CLAUSE_OK,
    EXCEPT_CLAUSE_ERROR,
} ExceptClauseType;

struct _except_clause_ {
    Ast ast;
    ExceptClauseType type;
    CompoundNameInParensRule* compound_name_in_parens_rule;
    FuncBody* func_body;
};

ExceptClause* createExceptClause(CompoundNameInParensRule*, FuncBody*);
void destroyExceptClause(ExceptClause*);

#ifdef ENABLE_DUMP
void dumpExceptClause(ExceptClause* ptr);
#endif

#endif
