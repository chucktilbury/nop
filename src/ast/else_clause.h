/**
 * @file else_clause.h
 *
 */
#ifndef _ELSE_CLAUSE_H_
#define _ELSE_CLAUSE_H_

#include "ast.h"

typedef enum {
    INVALID_ELSE_CLAUSE,
} ElseClauseType;

typedef struct {
    Ast ast;
    ElseClauseType type;
} ElseClause;

ElseClause* createElseClause();
void destroyElseClause(ElseClause*);

#ifdef ENABLE_DUMP
void dumpElseClause(ElseClause* ptr);
#endif

#endif
