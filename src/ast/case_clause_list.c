/**
 * @file case_clause_list.c
 *
 * $$ = createCaseClauseList();
 */
#include "memory.h"
#include "ast.h"

CaseClauseList* createCaseClauseList() {

#ifdef ENABLE_TRACE
    printf("parser: createCaseClauseList\\n");
#endif /* ENABLE_DUMP */

    CaseClauseList* ptr = _alloc_ds(CaseClauseList);
    initAst(&ptr->ast, NULL, AST_CASE_CLAUSE_LIST);

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
