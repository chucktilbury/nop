/**
 * @file trace_statement.h
 *
 */
#ifndef _TRACE_STATEMENT_H_
#define _TRACE_STATEMENT_H_

#include "ast.h"

typedef enum {
    TRACE_STATEMENT_OK,
    TRACE_STATEMENT_ERROR,
} TraceStatementType;

struct _trace_statement_ {
    Ast ast;
    TraceStatementType type;
    int trace;
    const char* strg;
};

TraceStatement* createTraceStatement(int, const char*);
void destroyTraceStatement(TraceStatement*);

#ifdef ENABLE_DUMP
void dumpTraceStatement(TraceStatement* ptr);
#endif

#endif
