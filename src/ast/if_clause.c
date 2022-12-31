/**
 * @file if_clause.c
 *
 * $$ = createIfClause();
 */
#include "memory.h"
#include "ast.h"

IfClause* createIfClause() {

#ifdef ENABLE_TRACE
    printf("parser: createIfClause\\n");
#endif /* ENABLE_DUMP */

    IfClause* ptr = _alloc_ds(IfClause);
    initAst(&ptr->ast, NULL, AST_IF_CLAUSE);

    return ptr;
}

void destroyIfClause(IfClause* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpIfClause(IfClause* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
