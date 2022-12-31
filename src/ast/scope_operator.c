/**
 * @file scope_operator.c
 *
 * $$ = createScopeOperator();
 */
#include "memory.h"
#include "ast.h"

ScopeOperator* createScopeOperator() {

#ifdef ENABLE_TRACE
    printf("parser: createScopeOperator\\n");
#endif /* ENABLE_DUMP */

    ScopeOperator* ptr = _alloc_ds(ScopeOperator);
    initAst(&ptr->ast, NULL, AST_SCOPE_OPERATOR);

    return ptr;
}

void destroyScopeOperator(ScopeOperator* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpScopeOperator(ScopeOperator* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
