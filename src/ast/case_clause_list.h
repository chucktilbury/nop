/**
 * @file case_clause_list.h
 *
 */
#ifndef _CASE_CLAUSE_LIST_H_
#define _CASE_CLAUSE_LIST_H_

#include "ast.h"

typedef enum {
    CASE_CLAUSE_LIST_OK,
    CASE_CLAUSE_LIST_ERROR,
} CaseClauseListType;

struct _case_clause_list_ {
    Ast ast;
    CaseClauseListType type;
    CaseClauseIntermediateList* case_clause_intermediate_list;
    FuncBody* func_body;
};

CaseClauseList* createCaseClauseList(CaseClauseIntermediateList*, FuncBody*);
void destroyCaseClauseList(CaseClauseList*);

#ifdef ENABLE_DUMP
void dumpCaseClauseList(CaseClauseList* ptr);
#endif

#endif
