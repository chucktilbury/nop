/**
 * @file switch_statement.c
 *
 * $$ = createSwitchStatement();
 */
#include "memory.h"
#include "ast.h"

SwitchStatement* createSwitchStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createSwitchStatement\\n");
#endif /* ENABLE_DUMP */

    SwitchStatement* ptr = _alloc_ds(SwitchStatement);
    initAst(&ptr->ast, NULL, AST_SWITCH_STATEMENT);

    return ptr;
}

void destroySwitchStatement(SwitchStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpSwitchStatement(SwitchStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
