/**
 * @file if_statement.h
 *
 */
#ifndef _IF_STATEMENT_H_
#define _IF_STATEMENT_H_

#include "ast.h"

typedef enum {
    IF_STATEMENT_OK,
    IF_STATEMENT_ERROR,
} IfStatementType;

struct _if_statement_ {
    Ast ast;
    IfStatementType type;
    IfClause* if_clause;
    ElseClauseList* else_clause_list;
};

IfStatement* createIfStatement(IfClause*, ElseClauseList*);
void destroyIfStatement(IfStatement*);

#ifdef ENABLE_DUMP
void dumpIfStatement(IfStatement* ptr);
#endif

#endif
