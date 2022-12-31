/**
 * @file case_clause_intermediate_list.h
 *
 */
#ifndef _CASE_CLAUSE_INTERMEDIATE_LIST_H_
#define _CASE_CLAUSE_INTERMEDIATE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_CASE_CLAUSE_INTERMEDIATE_LIST,
} CaseClauseIntermediateListType;

typedef struct {
    Ast ast;
    CaseClauseIntermediateListType type;
} CaseClauseIntermediateList;

CaseClauseIntermediateList* createCaseClauseIntermediateList();
void destroyCaseClauseIntermediateList(CaseClauseIntermediateList*);

#ifdef ENABLE_DUMP
void dumpCaseClauseIntermediateList(CaseClauseIntermediateList* ptr);
#endif

#endif
