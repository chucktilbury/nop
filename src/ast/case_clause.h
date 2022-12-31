/**
 * @file case_clause.h
 *
 */
#ifndef _CASE_CLAUSE_H_
#define _CASE_CLAUSE_H_

#include "ast.h"

typedef enum {
    CASE_CLAUSE_OK,
    CASE_CLAUSE_ERROR,
} CaseClauseType;

struct _case_clause_ {
    Ast ast;
    CaseClauseType type;
    ConstantExpression* constant_expression;
    FuncBody* func_body;
};

CaseClause* createCaseClause(ConstantExpression*, FuncBody*);
void destroyCaseClause(CaseClause*);

#ifdef ENABLE_DUMP
void dumpCaseClause(CaseClause* ptr);
#endif

#endif
