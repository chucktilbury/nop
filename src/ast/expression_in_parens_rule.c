/**
 * @file expression_in_parens_rule.c
 *
 * $$ = createExpressionInParensRule();
 */
#include "memory.h"
#include "ast.h"

ExpressionInParensRule* createExpressionInParensRule(Expression* expression,
		EmptyParensRule* empty_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    ExpressionInParensRule* ptr = _alloc_ds(ExpressionInParensRule);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_IN_PARENS_RULE);
    ptr->expression = expression;
    ptr->empty_parens_rule = empty_parens_rule;

    return ptr;
}

void destroyExpressionInParensRule(ExpressionInParensRule* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExpressionInParensRule(ExpressionInParensRule* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
