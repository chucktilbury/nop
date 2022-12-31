/**
 * @file try_statement.h
 *
 */
#ifndef _TRY_STATEMENT_H_
#define _TRY_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_TRY_STATEMENT,
} TryStatementType;

typedef struct {
    Ast ast;
    TryStatementType type;
} TryStatement;

TryStatement* createTryStatement();
void destroyTryStatement(TryStatement*);

#ifdef ENABLE_DUMP
void dumpTryStatement(TryStatement* ptr);
#endif

#endif
