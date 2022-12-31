/**
 * @file else_clause.c
 *
 * $$ = createElseClause();
 */
#include "memory.h"
#include "ast.h"

ElseClause* createElseClause() {

#ifdef ENABLE_TRACE
    printf("parser: createElseClause\\n");
#endif /* ENABLE_DUMP */

    ElseClause* ptr = _alloc_ds(ElseClause);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE);

    return ptr;
}

void destroyElseClause(ElseClause* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpElseClause(ElseClause* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
