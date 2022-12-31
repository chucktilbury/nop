/**
 * @file if_clause.c
 *
 * $$ = createIfClause();
 */
#include "memory.h"
#include "ast.h"

IfClause* createIfClause(ExpressionInParensRule* expression_in_parens_rule,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createIfClause\\n");
#endif /* ENABLE_DUMP */

    IfClause* ptr = _alloc_ds(IfClause);
    initAst(&ptr->ast, NULL, AST_IF_CLAUSE);
    ptr->expression_in_parens_rule = expression_in_parens_rule;
    ptr->func_body = func_body;

    return ptr;
}

void destroyIfClause(IfClause* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpIfClause(IfClause* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
