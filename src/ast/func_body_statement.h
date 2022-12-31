/**
 * @file func_body_statement.h
 *
 */
#ifndef _FUNC_BODY_STATEMENT_H_
#define _FUNC_BODY_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_BODY_STATEMENT,
} FuncBodyStatementType;

typedef struct {
    Ast ast;
    FuncBodyStatementType type;
} FuncBodyStatement;

FuncBodyStatement* createFuncBodyStatement();
void destroyFuncBodyStatement(FuncBodyStatement*);

#ifdef ENABLE_DUMP
void dumpFuncBodyStatement(FuncBodyStatement* ptr);
#endif

#endif
