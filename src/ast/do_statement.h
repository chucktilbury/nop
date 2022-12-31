/**
 * @file do_statement.h
 *
 */
#ifndef _DO_STATEMENT_H_
#define _DO_STATEMENT_H_

#include "ast.h"

typedef enum {
    DO_STATEMENT_OK,
    DO_STATEMENT_ERROR,
} DoStatementType;

struct _do_statement_ {
    Ast ast;
    DoStatementType type;
    LoopBody* loop_body;
    ExpressionInParensRule* expression_in_parens_rule;
};

DoStatement* createDoStatement(LoopBody*, ExpressionInParensRule*);
void destroyDoStatement(DoStatement*);

#ifdef ENABLE_DUMP
void dumpDoStatement(DoStatement* ptr);
#endif

#endif
