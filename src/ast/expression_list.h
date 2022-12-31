/**
 * @file expression_list.h
 *
 */
#ifndef _EXPRESSION_LIST_H_
#define _EXPRESSION_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_EXPRESSION_LIST,
} ExpressionListType;

typedef struct {
    Ast ast;
    ExpressionListType type;
} ExpressionList;

ExpressionList* createExpressionList();
void destroyExpressionList(ExpressionList*);

#ifdef ENABLE_DUMP
void dumpExpressionList(ExpressionList* ptr);
#endif

#endif
