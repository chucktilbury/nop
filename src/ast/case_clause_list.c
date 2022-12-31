/**
 * @file case_clause_list.c
 *
 * $$ = createCaseClauseList();
 */
#include "memory.h"
#include "ast.h"

CaseClauseList* createCaseClauseList(CaseClauseIntermediateList* case_clause_intermediate_list,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createCaseClauseList\\n");
#endif /* ENABLE_DUMP */

    CaseClauseList* ptr = _alloc_ds(CaseClauseList);
    initAst(&ptr->ast, NULL, AST_CASE_CLAUSE_LIST);
    ptr->case_clause_intermediate_list = case_clause_intermediate_list;
    ptr->func_body = func_body;

    return ptr;
}

void destroyCaseClauseList(CaseClauseList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCaseClauseList(CaseClauseList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
