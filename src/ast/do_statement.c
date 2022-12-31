/**
 * @file do_statement.c
 *
 * $$ = createDoStatement();
 */
#include "memory.h"
#include "ast.h"

DoStatement* createDoStatement(LoopBody* loop_body,
		ExpressionInParensRule* expression_in_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createDoStatement\\n");
#endif /* ENABLE_DUMP */

    DoStatement* ptr = _alloc_ds(DoStatement);
    initAst(&ptr->ast, NULL, AST_DO_STATEMENT);
    ptr->loop_body = loop_body;
    ptr->expression_in_parens_rule = expression_in_parens_rule;

    return ptr;
}

void destroyDoStatement(DoStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDoStatement(DoStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
