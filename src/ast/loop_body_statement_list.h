/**
 * @file loop_body_statement_list.h
 *
 */
#ifndef _LOOP_BODY_STATEMENT_LIST_H_
#define _LOOP_BODY_STATEMENT_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_LOOP_BODY_STATEMENT_LIST,
} LoopBodyStatementListType;

typedef struct {
    Ast ast;
    LoopBodyStatementListType type;
} LoopBodyStatementList;

LoopBodyStatementList* createLoopBodyStatementList();
void destroyLoopBodyStatementList(LoopBodyStatementList*);

#ifdef ENABLE_DUMP
void dumpLoopBodyStatementList(LoopBodyStatementList* ptr);
#endif

#endif
