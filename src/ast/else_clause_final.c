/**
 * @file else_clause_final.c
 *
 * $$ = createElseClauseFinal();
 */
#include "memory.h"
#include "ast.h"

ElseClauseFinal* createElseClauseFinal() {

#ifdef ENABLE_TRACE
    printf("parser: createElseClauseFinal\\n");
#endif /* ENABLE_DUMP */

    ElseClauseFinal* ptr = _alloc_ds(ElseClauseFinal);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE_FINAL);

    return ptr;
}

void destroyElseClauseFinal(ElseClauseFinal* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpElseClauseFinal(ElseClauseFinal* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
