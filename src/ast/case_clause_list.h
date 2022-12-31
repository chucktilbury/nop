/**
 * @file case_clause_list.h
 *
 */
#ifndef _CASE_CLAUSE_LIST_H_
#define _CASE_CLAUSE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_CASE_CLAUSE_LIST,
} CaseClauseListType;

typedef struct {
    Ast ast;
    CaseClauseListType type;
} CaseClauseList;

CaseClauseList* createCaseClauseList();
void destroyCaseClauseList(CaseClauseList*);

#ifdef ENABLE_DUMP
void dumpCaseClauseList(CaseClauseList* ptr);
#endif

#endif
