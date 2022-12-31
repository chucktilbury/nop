/**
 * @file expression_list.h
 *
 */
#ifndef _EXPRESSION_LIST_H_
#define _EXPRESSION_LIST_H_

#include "ast.h"

typedef enum {
    EXPRESSION_LIST_OK,
    EXPRESSION_LIST_ERROR,
} ExpressionListType;

struct _expression_list_ {
    Ast ast;
    ExpressionListType type;
    Expression* expression;
    ExpressionList* expression_list;
};

ExpressionList* createExpressionList(Expression*, ExpressionList*);
void destroyExpressionList(ExpressionList*);

#ifdef ENABLE_DUMP
void dumpExpressionList(ExpressionList* ptr);
#endif

#endif
