/**
 * @file except_clause_intermediate_list.c
 *
 * $$ = createExceptClauseIntermediateList();
 */
#include "memory.h"
#include "ast.h"

ExceptClauseIntermediateList* createExceptClauseIntermediateList() {

#ifdef ENABLE_TRACE
    printf("parser: createExceptClauseIntermediateList\\n");
#endif /* ENABLE_DUMP */

    ExceptClauseIntermediateList* ptr = _alloc_ds(ExceptClauseIntermediateList);
    initAst(&ptr->ast, NULL, AST_EXCEPT_CLAUSE_INTERMEDIATE_LIST);

    return ptr;
}

void destroyExceptClauseIntermediateList(ExceptClauseIntermediateList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExceptClauseIntermediateList(ExceptClauseIntermediateList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
