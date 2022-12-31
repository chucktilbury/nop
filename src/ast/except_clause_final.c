/**
 * @file except_clause_final.c
 *
 * $$ = createExceptClauseFinal();
 */
#include "memory.h"
#include "ast.h"

ExceptClauseFinal* createExceptClauseFinal() {

#ifdef ENABLE_TRACE
    printf("parser: createExceptClauseFinal\\n");
#endif /* ENABLE_DUMP */

    ExceptClauseFinal* ptr = _alloc_ds(ExceptClauseFinal);
    initAst(&ptr->ast, NULL, AST_EXCEPT_CLAUSE_FINAL);

    return ptr;
}

void destroyExceptClauseFinal(ExceptClauseFinal* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExceptClauseFinal(ExceptClauseFinal* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
