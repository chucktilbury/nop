/**
 * @file except_clause_intermediate_list.h
 *
 */
#ifndef _EXCEPT_CLAUSE_INTERMEDIATE_LIST_H_
#define _EXCEPT_CLAUSE_INTERMEDIATE_LIST_H_

#include "ast.h"

typedef enum {
    EXCEPT_CLAUSE_INTERMEDIATE_LIST_OK,
    EXCEPT_CLAUSE_INTERMEDIATE_LIST_ERROR,
} ExceptClauseIntermediateListType;

struct _except_clause_intermediate_list_ {
    Ast ast;
    ExceptClauseIntermediateListType type;
    ExceptClause* except_clause;
    ExceptClauseIntermediateList* except_clause_intermediate_list;
};

ExceptClauseIntermediateList* createExceptClauseIntermediateList(ExceptClause*, ExceptClauseIntermediateList*);
void destroyExceptClauseIntermediateList(ExceptClauseIntermediateList*);

#ifdef ENABLE_DUMP
void dumpExceptClauseIntermediateList(ExceptClauseIntermediateList* ptr);
#endif

#endif
