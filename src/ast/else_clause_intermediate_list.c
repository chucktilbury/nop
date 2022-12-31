/**
 * @file else_clause_intermediate_list.c
 *
 * $$ = createElseClauseIntermediateList();
 */
#include "memory.h"
#include "ast.h"

ElseClauseIntermediateList* createElseClauseIntermediateList(ElseClause* else_clause,
		ElseClauseIntermediateList* else_clause_intermediate_list) {

#ifdef ENABLE_TRACE
    printf("parser: createElseClauseIntermediateList\\n");
#endif /* ENABLE_DUMP */

    ElseClauseIntermediateList* ptr = _alloc_ds(ElseClauseIntermediateList);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE_INTERMEDIATE_LIST);
    ptr->else_clause = else_clause;
    ptr->else_clause_intermediate_list = else_clause_intermediate_list;

    return ptr;
}

void destroyElseClauseIntermediateList(ElseClauseIntermediateList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpElseClauseIntermediateList(ElseClauseIntermediateList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
