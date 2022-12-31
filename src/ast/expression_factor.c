/**
 * @file expression_factor.c
 *
 * $$ = createExpressionFactor();
 */
#include "memory.h"
#include "ast.h"

ExpressionFactor* createExpressionFactor(ConstantExpression* constant_expression,
		CompoundName* compound_name,
		ArrayReference* array_reference,
		FuncReference* func_reference) {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    ExpressionFactor* ptr = _alloc_ds(ExpressionFactor);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_FACTOR);
    ptr->constant_expression = constant_expression;
    ptr->compound_name = compound_name;
    ptr->array_reference = array_reference;
    ptr->func_reference = func_reference;

    return ptr;
}

void destroyExpressionFactor(ExpressionFactor* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExpressionFactor(ExpressionFactor* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
