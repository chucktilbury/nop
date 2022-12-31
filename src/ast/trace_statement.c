/**
 * @file trace_statement.c
 *
 * $$ = createTraceStatement();
 */
#include "memory.h"
#include "ast.h"

TraceStatement* createTraceStatement(int trace,
		const char* strg) {

#ifdef ENABLE_TRACE
    printf("parser: createTraceStatement\\n");
#endif /* ENABLE_DUMP */

    TraceStatement* ptr = _alloc_ds(TraceStatement);
    initAst(&ptr->ast, NULL, AST_TRACE_STATEMENT);
    ptr->trace = trace;
    ptr->strg = strg;

    return ptr;
}

void destroyTraceStatement(TraceStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpTraceStatement(TraceStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
