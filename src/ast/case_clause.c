/**
 * @file case_clause.c
 *
 * $$ = createCaseClause();
 */
#include "memory.h"
#include "ast.h"

CaseClause* createCaseClause() {

#ifdef ENABLE_TRACE
    printf("parser: createCaseClause\\n");
#endif /* ENABLE_DUMP */

    CaseClause* ptr = _alloc_ds(CaseClause);
    initAst(&ptr->ast, NULL, AST_CASE_CLAUSE);

    return ptr;
}

void destroyCaseClause(CaseClause* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCaseClause(CaseClause* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
