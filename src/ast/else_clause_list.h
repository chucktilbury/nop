/**
 * @file else_clause_list.h
 *
 */
#ifndef _ELSE_CLAUSE_LIST_H_
#define _ELSE_CLAUSE_LIST_H_

#include "ast.h"

typedef enum {
    ELSE_CLAUSE_LIST_OK,
    ELSE_CLAUSE_LIST_ERROR,
} ElseClauseListType;

struct _else_clause_list_ {
    Ast ast;
    ElseClauseListType type;
    ElseClauseIntermediateList* else_clause_intermediate_list;
    ElseClauseFinal* else_clause_final;
};

ElseClauseList* createElseClauseList(ElseClauseIntermediateList*, ElseClauseFinal*);
void destroyElseClauseList(ElseClauseList*);

#ifdef ENABLE_DUMP
void dumpElseClauseList(ElseClauseList* ptr);
#endif

#endif
