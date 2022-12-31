/**
 * @file expression_factor.c
 *
 * $$ = createExpressionFactor();
 */
#include "memory.h"
#include "ast.h"

ExpressionFactor* createExpressionFactor() {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    ExpressionFactor* ptr = _alloc_ds(ExpressionFactor);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_FACTOR);

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
