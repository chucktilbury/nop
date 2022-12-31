/**
 * @file compound_name_in_parens_rule.c
 *
 * $$ = createCompoundNameInParensRule();
 */
#include "memory.h"
#include "ast.h"

CompoundNameInParensRule* createCompoundNameInParensRule() {

#ifdef ENABLE_TRACE
    printf("parser: createCompoundNameInParensRule\\n");
#endif /* ENABLE_DUMP */

    CompoundNameInParensRule* ptr = _alloc_ds(CompoundNameInParensRule);
    initAst(&ptr->ast, NULL, AST_COMPOUND_NAME_IN_PARENS_RULE);

    return ptr;
}

void destroyCompoundNameInParensRule(CompoundNameInParensRule* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCompoundNameInParensRule(CompoundNameInParensRule* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
