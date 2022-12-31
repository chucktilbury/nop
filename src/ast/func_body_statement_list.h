/**
 * @file func_body_statement_list.h
 *
 */
#ifndef _FUNC_BODY_STATEMENT_LIST_H_
#define _FUNC_BODY_STATEMENT_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_BODY_STATEMENT_LIST,
} FuncBodyStatementListType;

typedef struct {
    Ast ast;
    FuncBodyStatementListType type;
} FuncBodyStatementList;

FuncBodyStatementList* createFuncBodyStatementList();
void destroyFuncBodyStatementList(FuncBodyStatementList*);

#ifdef ENABLE_DUMP
void dumpFuncBodyStatementList(FuncBodyStatementList* ptr);
#endif

#endif
