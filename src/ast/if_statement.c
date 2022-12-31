/**
 * @file if_statement.c
 *
 * $$ = createIfStatement();
 */
#include "memory.h"
#include "ast.h"

IfStatement* createIfStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createIfStatement\\n");
#endif /* ENABLE_DUMP */

    IfStatement* ptr = _alloc_ds(IfStatement);
    initAst(&ptr->ast, NULL, AST_IF_STATEMENT);

    return ptr;
}

void destroyIfStatement(IfStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpIfStatement(IfStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
