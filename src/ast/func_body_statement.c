/**
 * @file func_body_statement.c
 *
 * $$ = createFuncBodyStatement();
 */
#include "memory.h"
#include "ast.h"

FuncBodyStatement* createFuncBodyStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    FuncBodyStatement* ptr = _alloc_ds(FuncBodyStatement);
    initAst(&ptr->ast, NULL, AST_FUNC_BODY_STATEMENT);

    return ptr;
}

void destroyFuncBodyStatement(FuncBodyStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncBodyStatement(FuncBodyStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
