/**
 * @file expression.c
 *
 * $$ = createExpression();
 */
#include "memory.h"
#include "ast.h"

Expression* createExpression() {

#ifdef ENABLE_TRACE
    printf("parser: createExpression\\n");
#endif /* ENABLE_DUMP */

    Expression* ptr = _alloc_ds(Expression);
    initAst(&ptr->ast, NULL, AST_EXPRESSION);

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
