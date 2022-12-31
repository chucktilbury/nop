/**
 * @file except_clause_list.h
 *
 */
#ifndef _EXCEPT_CLAUSE_LIST_H_
#define _EXCEPT_CLAUSE_LIST_H_

#include "ast.h"

typedef enum {
    EXCEPT_CLAUSE_LIST_OK,
    EXCEPT_CLAUSE_LIST_ERROR,
} ExceptClauseListType;

struct _except_clause_list_ {
    Ast ast;
    ExceptClauseListType type;
    ExceptClauseIntermediateList* except_clause_intermediate_list;
    ExceptClauseFinal* except_clause_final;
};

ExceptClauseList* createExceptClauseList(ExceptClauseIntermediateList*, ExceptClauseFinal*);
void destroyExceptClauseList(ExceptClauseList*);

#ifdef ENABLE_DUMP
void dumpExceptClauseList(ExceptClauseList* ptr);
#endif

#endif
