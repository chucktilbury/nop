/**
 * @file break_statement.c
 *
 * $$ = createBreakStatement();
 */
#include "memory.h"
#include "ast.h"

BreakStatement* createBreakStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createBreakStatement\\n");
#endif /* ENABLE_DUMP */

    BreakStatement* ptr = _alloc_ds(BreakStatement);
    initAst(&ptr->ast, NULL, AST_BREAK_STATEMENT);

    return ptr;
}

void destroyBreakStatement(BreakStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpBreakStatement(BreakStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
