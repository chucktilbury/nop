/**
 * @file try_statement.c
 *
 * $$ = createTryStatement();
 */
#include "memory.h"
#include "ast.h"

TryStatement* createTryStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createTryStatement\\n");
#endif /* ENABLE_DUMP */

    TryStatement* ptr = _alloc_ds(TryStatement);
    initAst(&ptr->ast, NULL, AST_TRY_STATEMENT);

    return ptr;
}

void destroyTryStatement(TryStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpTryStatement(TryStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
