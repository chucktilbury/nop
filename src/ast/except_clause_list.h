/**
 * @file except_clause_list.h
 *
 */
#ifndef _EXCEPT_CLAUSE_LIST_H_
#define _EXCEPT_CLAUSE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_EXCEPT_CLAUSE_LIST,
} ExceptClauseListType;

typedef struct {
    Ast ast;
    ExceptClauseListType type;
} ExceptClauseList;

ExceptClauseList* createExceptClauseList();
void destroyExceptClauseList(ExceptClauseList*);

#ifdef ENABLE_DUMP
void dumpExceptClauseList(ExceptClauseList* ptr);
#endif

#endif
