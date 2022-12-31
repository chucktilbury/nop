/**
 * @file expression.c
 *
 * $$ = createExpression();
 */
#include "memory.h"
#include "ast.h"

Expression* createExpression(ExpressionFactor* expression_factor,
		Expression* expression,
		CastSpecifier* cast_specifier,
		ExpressionInParensRule* expression_in_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createExpression\\n");
#endif /* ENABLE_DUMP */

    Expression* ptr = _alloc_ds(Expression);
    initAst(&ptr->ast, NULL, AST_EXPRESSION);
    ptr->expression_factor = expression_factor;
    ptr->expression = expression;
    ptr->cast_specifier = cast_specifier;
    ptr->expression_in_parens_rule = expression_in_parens_rule;

    return ptr;
}

void destroyExpression(Expression* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExpression(Expression* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
