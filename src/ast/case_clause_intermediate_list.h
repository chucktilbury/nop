/**
 * @file case_clause_intermediate_list.h
 *
 */
#ifndef _CASE_CLAUSE_INTERMEDIATE_LIST_H_
#define _CASE_CLAUSE_INTERMEDIATE_LIST_H_

#include "ast.h"

typedef enum {
    CASE_CLAUSE_INTERMEDIATE_LIST_OK,
    CASE_CLAUSE_INTERMEDIATE_LIST_ERROR,
} CaseClauseIntermediateListType;

struct _case_clause_intermediate_list_ {
    Ast ast;
    CaseClauseIntermediateListType type;
    CaseClause* case_clause;
    CaseClauseIntermediateList* case_clause_intermediate_list;
};

CaseClauseIntermediateList* createCaseClauseIntermediateList(CaseClause*, CaseClauseIntermediateList*);
void destroyCaseClauseIntermediateList(CaseClauseIntermediateList*);

#ifdef ENABLE_DUMP
void dumpCaseClauseIntermediateList(CaseClauseIntermediateList* ptr);
#endif

#endif
