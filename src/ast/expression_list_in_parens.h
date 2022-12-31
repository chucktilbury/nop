/**
 * @file expression_list_in_parens.h
 *
 */
#ifndef _EXPRESSION_LIST_IN_PARENS_H_
#define _EXPRESSION_LIST_IN_PARENS_H_

#include "ast.h"

typedef enum {
    EXPRESSION_LIST_IN_PARENS_OK,
    EXPRESSION_LIST_IN_PARENS_ERROR,
} ExpressionListInParensType;

struct _expression_list_in_parens_ {
    Ast ast;
    ExpressionListInParensType type;
    ExpressionList* expression_list;
    EmptyParensRule* empty_parens_rule;
};

ExpressionListInParens* createExpressionListInParens(ExpressionList*, EmptyParensRule*);
void destroyExpressionListInParens(ExpressionListInParens*);

#ifdef ENABLE_DUMP
void dumpExpressionListInParens(ExpressionListInParens* ptr);
#endif

#endif
