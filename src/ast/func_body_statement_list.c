/**
 * @file func_body_statement_list.c
 *
 * $$ = createFuncBodyStatementList();
 */
#include "memory.h"
#include "ast.h"

FuncBodyStatementList* createFuncBodyStatementList() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncBodyStatementList\\n");
#endif /* ENABLE_DUMP */

    FuncBodyStatementList* ptr = _alloc_ds(FuncBodyStatementList);
    initAst(&ptr->ast, NULL, AST_FUNC_BODY_STATEMENT_LIST);

    return ptr;
}

void destroyFuncBodyStatementList(FuncBodyStatementList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncBodyStatementList(FuncBodyStatementList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */