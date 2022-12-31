/**
 * @file func_body.h
 *
 */
#ifndef _FUNC_BODY_H_
#define _FUNC_BODY_H_

#include "ast.h"

typedef enum {
    FUNC_BODY_OK,
    FUNC_BODY_ERROR,
} FuncBodyType;

struct _func_body_ {
    Ast ast;
    FuncBodyType type;
    FuncBodyStatementList* func_body_statement_list;
};

FuncBody* createFuncBody(FuncBodyStatementList*);
void destroyFuncBody(FuncBody*);

#ifdef ENABLE_DUMP
void dumpFuncBody(FuncBody* ptr);
#endif

#endif
