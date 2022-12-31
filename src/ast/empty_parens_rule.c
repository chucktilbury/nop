/**
 * @file empty_parens_rule.c
 *
 * $$ = createEmptyParensRule();
 */
#include "memory.h"
#include "ast.h"

EmptyParensRule* createEmptyParensRule() {

#ifdef ENABLE_TRACE
    printf("parser: createEmptyParensRule\\n");
#endif /* ENABLE_DUMP */

    EmptyParensRule* ptr = _alloc_ds(EmptyParensRule);
    initAst(&ptr->ast, NULL, AST_EMPTY_PARENS_RULE);

    return ptr;
}

void destroyEmptyParensRule(EmptyParensRule* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpEmptyParensRule(EmptyParensRule* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
