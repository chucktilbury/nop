/**
 * @file while_statement.c
 *
 * $$ = createWhileStatement();
 */
#include "memory.h"
#include "ast.h"

WhileStatement* createWhileStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createWhileStatement\\n");
#endif /* ENABLE_DUMP */

    WhileStatement* ptr = _alloc_ds(WhileStatement);
    initAst(&ptr->ast, NULL, AST_WHILE_STATEMENT);

    return ptr;
}

void destroyWhileStatement(WhileStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpWhileStatement(WhileStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
