/**
 * @file loop_body_statement.c
 *
 * $$ = createLoopBodyStatement();
 */
#include "memory.h"
#include "ast.h"

LoopBodyStatement* createLoopBodyStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createLoopBodyStatement\\n");
#endif /* ENABLE_DUMP */

    LoopBodyStatement* ptr = _alloc_ds(LoopBodyStatement);
    initAst(&ptr->ast, NULL, AST_LOOP_BODY_STATEMENT);

    return ptr;
}

void destroyLoopBodyStatement(LoopBodyStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpLoopBodyStatement(LoopBodyStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
