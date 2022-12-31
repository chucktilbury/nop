/**
 * @file loop_body_statement.h
 *
 */
#ifndef _LOOP_BODY_STATEMENT_H_
#define _LOOP_BODY_STATEMENT_H_

#include "ast.h"

typedef enum {
    LOOP_BODY_STATEMENT_OK,
    LOOP_BODY_STATEMENT_ERROR,
} LoopBodyStatementType;

struct _loop_body_statement_ {
    Ast ast;
    LoopBodyStatementType type;
    FuncBodyStatement* func_body_statement;
    BreakStatement* break_statement;
    ContinueStatement* continue_statement;
    YieldStatement* yield_statement;
};

LoopBodyStatement* createLoopBodyStatement(FuncBodyStatement*, BreakStatement*, ContinueStatement*, YieldStatement*);
void destroyLoopBodyStatement(LoopBodyStatement*);

#ifdef ENABLE_DUMP
void dumpLoopBodyStatement(LoopBodyStatement* ptr);
#endif

#endif
