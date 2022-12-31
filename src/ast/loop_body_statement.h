/**
 * @file loop_body_statement.h
 *
 */
#ifndef _LOOP_BODY_STATEMENT_H_
#define _LOOP_BODY_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_LOOP_BODY_STATEMENT,
} LoopBodyStatementType;

typedef struct {
    Ast ast;
    LoopBodyStatementType type;
} LoopBodyStatement;

LoopBodyStatement* createLoopBodyStatement();
void destroyLoopBodyStatement(LoopBodyStatement*);

#ifdef ENABLE_DUMP
void dumpLoopBodyStatement(LoopBodyStatement* ptr);
#endif

#endif
