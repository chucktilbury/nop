/**
 * @file exit_statement.c
 *
 * $$ = createExitStatement();
 */
#include "memory.h"
#include "ast.h"

ExitStatement* createExitStatement(Expression* expression) {

#ifdef ENABLE_TRACE
    printf("parser: createExitStatement\\n");
#endif /* ENABLE_DUMP */

    ExitStatement* ptr = _alloc_ds(ExitStatement);
    initAst(&ptr->ast, NULL, AST_EXIT_STATEMENT);
    ptr->expression = expression;

    return ptr;
}

void destroyExitStatement(ExitStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpExitStatement(ExitStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
