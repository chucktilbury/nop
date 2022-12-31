/**
 * @file print_statement.c
 *
 * $$ = createPrintStatement();
 */
#include "memory.h"
#include "ast.h"

PrintStatement* createPrintStatement(int print,
		ExpressionInParensRule* expression_in_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createPrintStatement\\n");
#endif /* ENABLE_DUMP */

    PrintStatement* ptr = _alloc_ds(PrintStatement);
    initAst(&ptr->ast, NULL, AST_PRINT_STATEMENT);
    ptr->print = print;
    ptr->expression_in_parens_rule = expression_in_parens_rule;

    return ptr;
}

void destroyPrintStatement(PrintStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpPrintStatement(PrintStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
