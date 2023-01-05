/**
 * @file trace_statement.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
    const char* strg;
};

TraceStatement* createTraceStatement(const char*);
AstResult pass1TraceStatement(TraceStatement*);
AstResult pass2TraceStatement(TraceStatement*);
AstResult pass3TraceStatement(TraceStatement*);
AstResult emitTraceStatement(TraceStatement*);
AstResult destroyTraceStatement(TraceStatement*);

#ifdef ENABLE_DUMP
AstResult dumpTraceStatement(TraceStatement* ptr);
#endif

#endif
