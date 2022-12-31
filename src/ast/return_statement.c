/**
 * @file return_statement.c
 *
 * $$ = createReturnStatement();
 */
#include "memory.h"
#include "ast.h"

ReturnStatement* createReturnStatement(ExpressionInParensRule* expression_in_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createReturnStatement\\n");
#endif /* ENABLE_DUMP */

    ReturnStatement* ptr = _alloc_ds(ReturnStatement);
    initAst(&ptr->ast, NULL, AST_RETURN_STATEMENT);
    ptr->expression_in_parens_rule = expression_in_parens_rule;

    return ptr;
}

void destroyReturnStatement(ReturnStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpReturnStatement(ReturnStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
