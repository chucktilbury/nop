/**
 * @file case_clause.h
 *
 */
#ifndef _CASE_CLAUSE_H_
#define _CASE_CLAUSE_H_

#include "ast.h"

typedef enum {
    INVALID_CASE_CLAUSE,
} CaseClauseType;

typedef struct {
    Ast ast;
    CaseClauseType type;
} CaseClause;

CaseClause* createCaseClause();
void destroyCaseClause(CaseClause*);

#ifdef ENABLE_DUMP
void dumpCaseClause(CaseClause* ptr);
#endif

#endif
