/**
 * @file except_clause_intermediate_list.h
 *
 */
#ifndef _EXCEPT_CLAUSE_INTERMEDIATE_LIST_H_
#define _EXCEPT_CLAUSE_INTERMEDIATE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_EXCEPT_CLAUSE_INTERMEDIATE_LIST,
} ExceptClauseIntermediateListType;

typedef struct {
    Ast ast;
    ExceptClauseIntermediateListType type;
} ExceptClauseIntermediateList;

ExceptClauseIntermediateList* createExceptClauseIntermediateList();
void destroyExceptClauseIntermediateList(ExceptClauseIntermediateList*);

#ifdef ENABLE_DUMP
void dumpExceptClauseIntermediateList(ExceptClauseIntermediateList* ptr);
#endif

#endif
