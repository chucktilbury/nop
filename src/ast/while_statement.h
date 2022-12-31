/**
 * @file while_statement.h
 *
 */
#ifndef _WHILE_STATEMENT_H_
#define _WHILE_STATEMENT_H_

#include "ast.h"

typedef enum {
    WHILE_STATEMENT_OK,
    WHILE_STATEMENT_ERROR,
} WhileStatementType;

struct _while_statement_ {
    Ast ast;
    WhileStatementType type;
    ExpressionInParensRule* expression_in_parens_rule;
    LoopBody* loop_body;
};

WhileStatement* createWhileStatement(ExpressionInParensRule*, LoopBody*);
void destroyWhileStatement(WhileStatement*);

#ifdef ENABLE_DUMP
void dumpWhileStatement(WhileStatement* ptr);
#endif

#endif
