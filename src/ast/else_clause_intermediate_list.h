/**
 * @file else_clause_intermediate_list.h
 *
 */
#ifndef _ELSE_CLAUSE_INTERMEDIATE_LIST_H_
#define _ELSE_CLAUSE_INTERMEDIATE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_ELSE_CLAUSE_INTERMEDIATE_LIST,
} ElseClauseIntermediateListType;

typedef struct {
    Ast ast;
    ElseClauseIntermediateListType type;
} ElseClauseIntermediateList;

ElseClauseIntermediateList* createElseClauseIntermediateList();
void destroyElseClauseIntermediateList(ElseClauseIntermediateList*);

#ifdef ENABLE_DUMP
void dumpElseClauseIntermediateList(ElseClauseIntermediateList* ptr);
#endif

#endif
