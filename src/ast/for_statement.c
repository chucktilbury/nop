/**
 * @file for_statement.c
 *
 * $$ = createForStatement();
 */
#include "memory.h"
#include "ast.h"

ForStatement* createForStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createForStatement\\n");
#endif /* ENABLE_DUMP */

    ForStatement* ptr = _alloc_ds(ForStatement);
    initAst(&ptr->ast, NULL, AST_FOR_STATEMENT);

    return ptr;
}

void destroyForStatement(ForStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpForStatement(ForStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
