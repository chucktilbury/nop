/**
 * @file yield_statement.c
 *
 * $$ = createYieldStatement();
 */
#include "memory.h"
#include "ast.h"

YieldStatement* createYieldStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createYieldStatement\\n");
#endif /* ENABLE_DUMP */

    YieldStatement* ptr = _alloc_ds(YieldStatement);
    initAst(&ptr->ast, NULL, AST_YIELD_STATEMENT);

    return ptr;
}

void destroyYieldStatement(YieldStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpYieldStatement(YieldStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
