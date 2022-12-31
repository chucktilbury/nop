/**
 * @file func_body_statement_list.h
 *
 */
#ifndef _FUNC_BODY_STATEMENT_LIST_H_
#define _FUNC_BODY_STATEMENT_LIST_H_

#include "ast.h"

typedef enum {
    FUNC_BODY_STATEMENT_LIST_OK,
    FUNC_BODY_STATEMENT_LIST_ERROR,
} FuncBodyStatementListType;

struct _func_body_statement_list_ {
    Ast ast;
    FuncBodyStatementListType type;
    FuncBodyStatement* func_body_statement;
    FuncBodyStatementList* func_body_statement_list;
};

FuncBodyStatementList* createFuncBodyStatementList(FuncBodyStatement*, FuncBodyStatementList*);
void destroyFuncBodyStatementList(FuncBodyStatementList*);

#ifdef ENABLE_DUMP
void dumpFuncBodyStatementList(FuncBodyStatementList* ptr);
#endif

#endif
