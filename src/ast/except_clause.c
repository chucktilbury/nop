/**
 * @file except_clause.c
 *
 * $$ = createExceptClause();
 */
#include "memory.h"
#include "ast.h"

ExceptClause* createExceptClause() {

#ifdef ENABLE_TRACE
    printf("parser: createExceptClause\\n");
#endif /* ENABLE_DUMP */

    ExceptClause* ptr = _alloc_ds(ExceptClause);
    initAst(&ptr->ast, NULL, AST_EXCEPT_CLAUSE);

    return ptr;
}

void destroyExceptClause(ExceptClause* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExceptClause(ExceptClause* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
