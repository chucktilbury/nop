/**
 * @file return_statement.h
 *
 */
#ifndef _RETURN_STATEMENT_H_
#define _RETURN_STATEMENT_H_

#include "ast.h"

typedef enum {
    RETURN_STATEMENT_OK,
    RETURN_STATEMENT_ERROR,
} ReturnStatementType;

struct _return_statement_ {
    Ast ast;
    ReturnStatementType type;
    ExpressionInParensRule* expression_in_parens_rule;
};

ReturnStatement* createReturnStatement(ExpressionInParensRule*);
void destroyReturnStatement(ReturnStatement*);

#ifdef ENABLE_DUMP
void dumpReturnStatement(ReturnStatement* ptr);
#endif

#endif
