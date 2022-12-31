/**
 * @file else_clause_intermediate_list.h
 *
 */
#ifndef _ELSE_CLAUSE_INTERMEDIATE_LIST_H_
#define _ELSE_CLAUSE_INTERMEDIATE_LIST_H_

#include "ast.h"

typedef enum {
    ELSE_CLAUSE_INTERMEDIATE_LIST_OK,
    ELSE_CLAUSE_INTERMEDIATE_LIST_ERROR,
} ElseClauseIntermediateListType;

struct _else_clause_intermediate_list_ {
    Ast ast;
    ElseClauseIntermediateListType type;
    ElseClause* else_clause;
    ElseClauseIntermediateList* else_clause_intermediate_list;
};

ElseClauseIntermediateList* createElseClauseIntermediateList(ElseClause*, ElseClauseIntermediateList*);
void destroyElseClauseIntermediateList(ElseClauseIntermediateList*);

#ifdef ENABLE_DUMP
void dumpElseClauseIntermediateList(ElseClauseIntermediateList* ptr);
#endif

#endif
