/**
 * @file loop_body_statement_list.h
 *
 */
#ifndef _LOOP_BODY_STATEMENT_LIST_H_
#define _LOOP_BODY_STATEMENT_LIST_H_

#include "ast.h"

typedef enum {
    LOOP_BODY_STATEMENT_LIST_OK,
    LOOP_BODY_STATEMENT_LIST_ERROR,
} LoopBodyStatementListType;

struct _loop_body_statement_list_ {
    Ast ast;
    LoopBodyStatementListType type;
    LoopBodyStatement* loop_body_statement;
    LoopBodyStatementList* loop_body_statement_list;
};

LoopBodyStatementList* createLoopBodyStatementList(LoopBodyStatement*, LoopBodyStatementList*);
void destroyLoopBodyStatementList(LoopBodyStatementList*);

#ifdef ENABLE_DUMP
void dumpLoopBodyStatementList(LoopBodyStatementList* ptr);
#endif

#endif
