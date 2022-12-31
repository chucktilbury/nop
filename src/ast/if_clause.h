/**
 * @file if_clause.h
 *
 */
#ifndef _IF_CLAUSE_H_
#define _IF_CLAUSE_H_

#include "ast.h"

typedef enum {
    IF_CLAUSE_OK,
    IF_CLAUSE_ERROR,
} IfClauseType;

struct _if_clause_ {
    Ast ast;
    IfClauseType type;
    ExpressionInParensRule* expression_in_parens_rule;
    FuncBody* func_body;
};

IfClause* createIfClause(ExpressionInParensRule*, FuncBody*);
void destroyIfClause(IfClause*);

#ifdef ENABLE_DUMP
void dumpIfClause(IfClause* ptr);
#endif

#endif
