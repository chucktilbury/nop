/**
 * @file raise_statement.c
 *
 * $$ = createRaiseStatement();
 */
#include "memory.h"
#include "ast.h"

RaiseStatement* createRaiseStatement(Expression* expression) {

#ifdef ENABLE_TRACE
    printf("parser: createRaiseStatement\\n");
#endif /* ENABLE_DUMP */

    RaiseStatement* ptr = _alloc_ds(RaiseStatement);
    initAst(&ptr->ast, NULL, AST_RAISE_STATEMENT);
    ptr->expression = expression;

    return ptr;
}

void destroyRaiseStatement(RaiseStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpRaiseStatement(RaiseStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
