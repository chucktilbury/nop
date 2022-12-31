/**
 * @file expression_list.c
 *
 * $$ = createExpressionList();
 */
#include "memory.h"
#include "ast.h"

ExpressionList* createExpressionList() {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionList\\n");
#endif /* ENABLE_DUMP */

    ExpressionList* ptr = _alloc_ds(ExpressionList);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_LIST);

    return ptr;
}

void destroyExpressionList(ExpressionList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExpressionList(ExpressionList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
