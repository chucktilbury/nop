/**
 * @file expression_list_in_parens.c
 *
 * $$ = createExpressionListInParens();
 */
#include "memory.h"
#include "ast.h"

ExpressionListInParens* createExpressionListInParens(ExpressionList* expression_list,
		EmptyParensRule* empty_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionListInParens\\n");
#endif /* ENABLE_DUMP */

    ExpressionListInParens* ptr = _alloc_ds(ExpressionListInParens);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_LIST_IN_PARENS);
    ptr->expression_list = expression_list;
    ptr->empty_parens_rule = empty_parens_rule;

    return ptr;
}

void destroyExpressionListInParens(ExpressionListInParens* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExpressionListInParens(ExpressionListInParens* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
