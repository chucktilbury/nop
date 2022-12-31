/**
 * @file continue_statement.c
 *
 * $$ = createContinueStatement();
 */
#include "memory.h"
#include "ast.h"

ContinueStatement* createContinueStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createContinueStatement\\n");
#endif /* ENABLE_DUMP */

    ContinueStatement* ptr = _alloc_ds(ContinueStatement);
    initAst(&ptr->ast, NULL, AST_CONTINUE_STATEMENT);

    return ptr;
}

void destroyContinueStatement(ContinueStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpContinueStatement(ContinueStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
