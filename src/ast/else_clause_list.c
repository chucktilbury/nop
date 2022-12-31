/**
 * @file else_clause_list.c
 *
 * $$ = createElseClauseList();
 */
#include "memory.h"
#include "ast.h"

ElseClauseList* createElseClauseList(ElseClauseIntermediateList* else_clause_intermediate_list,
		ElseClauseFinal* else_clause_final) {

#ifdef ENABLE_TRACE
    printf("parser: createElseClauseList\\n");
#endif /* ENABLE_DUMP */

    ElseClauseList* ptr = _alloc_ds(ElseClauseList);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE_LIST);
    ptr->else_clause_intermediate_list = else_clause_intermediate_list;
    ptr->else_clause_final = else_clause_final;

    return ptr;
}

void destroyElseClauseList(ElseClauseList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpElseClauseList(ElseClauseList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
