/**
 * @file except_clause_intermediate_list.c
 *
 * $$ = createExceptClauseIntermediateList();
 */
#include "memory.h"
#include "ast.h"

ExceptClauseIntermediateList* createExceptClauseIntermediateList(ExceptClause* except_clause,
		ExceptClauseIntermediateList* except_clause_intermediate_list) {

#ifdef ENABLE_TRACE
    printf("parser: createExceptClauseIntermediateList\\n");
#endif /* ENABLE_DUMP */

    ExceptClauseIntermediateList* ptr = _alloc_ds(ExceptClauseIntermediateList);
    initAst(&ptr->ast, NULL, AST_EXCEPT_CLAUSE_INTERMEDIATE_LIST);
    ptr->except_clause = except_clause;
    ptr->except_clause_intermediate_list = except_clause_intermediate_list;

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
