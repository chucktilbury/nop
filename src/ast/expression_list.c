/**
 * @file expression_list.c
 *
 * $$ = createExpressionList();
 */
#include "memory.h"
#include "ast.h"

ExpressionList* createExpressionList(Expression* expression,
		ExpressionList* expression_list) {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionList\\n");
#endif /* ENABLE_DUMP */

    ExpressionList* ptr = _alloc_ds(ExpressionList);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_LIST);
    ptr->expression = expression;
    ptr->expression_list = expression_list;

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
