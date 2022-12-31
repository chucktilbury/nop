/**
 * @file do_statement.c
 *
 * $$ = createDoStatement();
 */
#include "memory.h"
#include "ast.h"

DoStatement* createDoStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createDoStatement\\n");
#endif /* ENABLE_DUMP */

    DoStatement* ptr = _alloc_ds(DoStatement);
    initAst(&ptr->ast, NULL, AST_DO_STATEMENT);

    return ptr;
}

void destroyDoStatement(DoStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDoStatement(DoStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
