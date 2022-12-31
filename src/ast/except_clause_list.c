/**
 * @file except_clause_list.c
 *
 * $$ = createExceptClauseList();
 */
#include "memory.h"
#include "ast.h"

ExceptClauseList* createExceptClauseList() {

#ifdef ENABLE_TRACE
    printf("parser: createExceptClauseList\\n");
#endif /* ENABLE_DUMP */

    ExceptClauseList* ptr = _alloc_ds(ExceptClauseList);
    initAst(&ptr->ast, NULL, AST_EXCEPT_CLAUSE_LIST);

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
