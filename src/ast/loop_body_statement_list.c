/**
 * @file loop_body_statement_list.c
 *
 * $$ = createLoopBodyStatementList();
 */
#include "memory.h"
#include "ast.h"

LoopBodyStatementList* createLoopBodyStatementList(LoopBodyStatement* loop_body_statement,
		LoopBodyStatementList* loop_body_statement_list) {

#ifdef ENABLE_TRACE
    printf("parser: createLoopBodyStatementList\\n");
#endif /* ENABLE_DUMP */

    LoopBodyStatementList* ptr = _alloc_ds(LoopBodyStatementList);
    initAst(&ptr->ast, NULL, AST_LOOP_BODY_STATEMENT_LIST);
    ptr->loop_body_statement = loop_body_statement;
    ptr->loop_body_statement_list = loop_body_statement_list;

    return ptr;
}

void destroyLoopBodyStatementList(LoopBodyStatementList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpLoopBodyStatementList(LoopBodyStatementList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
