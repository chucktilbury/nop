/**
 * @file constant_expression.c
 *
 * $$ = createConstantExpression();
 */
#include "memory.h"
#include "ast.h"

ConstantExpression* createConstantExpression() {

#ifdef ENABLE_TRACE
    printf("parser: createConstantExpression\\n");
#endif /* ENABLE_DUMP */

    ConstantExpression* ptr = _alloc_ds(ConstantExpression);
    initAst(&ptr->ast, NULL, AST_CONSTANT_EXPRESSION);

    return ptr;
}

void destroyConstantExpression(ConstantExpression* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpConstantExpression(ConstantExpression* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
