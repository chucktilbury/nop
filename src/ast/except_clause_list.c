/**
 * @file except_clause_list.c
 *
 * $$ = createExceptClauseList();
 */
#include "memory.h"
#include "ast.h"

ExceptClauseList* createExceptClauseList(ExceptClauseIntermediateList* except_clause_intermediate_list,
		ExceptClauseFinal* except_clause_final) {

#ifdef ENABLE_TRACE
    printf("parser: createExceptClauseList\\n");
#endif /* ENABLE_DUMP */

    ExceptClauseList* ptr = _alloc_ds(ExceptClauseList);
    initAst(&ptr->ast, NULL, AST_EXCEPT_CLAUSE_LIST);
    ptr->except_clause_intermediate_list = except_clause_intermediate_list;
    ptr->except_clause_final = except_clause_final;

    return ptr;
}

void destroyExceptClauseList(ExceptClauseList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExceptClauseList(ExceptClauseList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
