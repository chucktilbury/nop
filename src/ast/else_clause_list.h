/**
 * @file else_clause_list.h
 *
 */
#ifndef _ELSE_CLAUSE_LIST_H_
#define _ELSE_CLAUSE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_ELSE_CLAUSE_LIST,
} ElseClauseListType;

typedef struct {
    Ast ast;
    ElseClauseListType type;
} ElseClauseList;

ElseClauseList* createElseClauseList();
void destroyElseClauseList(ElseClauseList*);

#ifdef ENABLE_DUMP
void dumpElseClauseList(ElseClauseList* ptr);
#endif

#endif
