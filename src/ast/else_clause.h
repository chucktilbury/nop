/**
 * @file else_clause.h
 *
 */
#ifndef _ELSE_CLAUSE_H_
#define _ELSE_CLAUSE_H_

#include "ast.h"

typedef enum {
    ELSE_CLAUSE_OK,
    ELSE_CLAUSE_ERROR,
} ElseClauseType;

struct _else_clause_ {
    Ast ast;
    ElseClauseType type;
    Expression* expression;
    FuncBody* func_body;
};

ElseClause* createElseClause(Expression*, FuncBody*);
void destroyElseClause(ElseClause*);

#ifdef ENABLE_DUMP
void dumpElseClause(ElseClause* ptr);
#endif

#endif
