/**
 * @file case_clause_intermediate_list.c
 *
 * $$ = createCaseClauseIntermediateList();
 */
#include "memory.h"
#include "ast.h"

CaseClauseIntermediateList* createCaseClauseIntermediateList() {

#ifdef ENABLE_TRACE
    printf("parser: createCaseClauseIntermediateList\\n");
#endif /* ENABLE_DUMP */

    CaseClauseIntermediateList* ptr = _alloc_ds(CaseClauseIntermediateList);
    initAst(&ptr->ast, NULL, AST_CASE_CLAUSE_INTERMEDIATE_LIST);

    return ptr;
}

void destroyCaseClauseIntermediateList(CaseClauseIntermediateList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCaseClauseIntermediateList(CaseClauseIntermediateList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
