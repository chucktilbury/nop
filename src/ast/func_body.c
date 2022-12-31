/**
 * @file func_body.c
 *
 * $$ = createFuncBody();
 */
#include "memory.h"
#include "ast.h"

FuncBody* createFuncBody(FuncBodyStatementList* func_body_statement_list) {

#ifdef ENABLE_TRACE
    printf("parser: createFuncBody\\n");
#endif /* ENABLE_DUMP */

    FuncBody* ptr = _alloc_ds(FuncBody);
    initAst(&ptr->ast, NULL, AST_FUNC_BODY);
    ptr->func_body_statement_list = func_body_statement_list;

    return ptr;
}

void destroyFuncBody(FuncBody* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncBody(FuncBody* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
