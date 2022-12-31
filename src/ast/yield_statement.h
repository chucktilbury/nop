/**
 * @file yield_statement.h
 *
 */
#ifndef _YIELD_STATEMENT_H_
#define _YIELD_STATEMENT_H_

#include "ast.h"

typedef enum {
    YIELD_STATEMENT_OK,
    YIELD_STATEMENT_ERROR,
} YieldStatementType;

struct _yield_statement_ {
    Ast ast;
    YieldStatementType type;
};

YieldStatement* createYieldStatement();
void destroyYieldStatement(YieldStatement*);

#ifdef ENABLE_DUMP
void dumpYieldStatement(YieldStatement* ptr);
#endif

#endif
