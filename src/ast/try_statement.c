/**
 * @file try_statement.c
 *
 * $$ = createTryStatement();
 */
#include "memory.h"
#include "ast.h"

TryStatement* createTryStatement(FuncBodyStatementList* func_body_statement_list,
		ExceptClauseList* except_clause_list) {

#ifdef ENABLE_TRACE
    printf("parser: createTryStatement\\n");
#endif /* ENABLE_DUMP */

    TryStatement* ptr = _alloc_ds(TryStatement);
    initAst(&ptr->ast, NULL, AST_TRY_STATEMENT);
    ptr->func_body_statement_list = func_body_statement_list;
    ptr->except_clause_list = except_clause_list;

    return ptr;
}

void destroyTryStatement(TryStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpTryStatement(TryStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
