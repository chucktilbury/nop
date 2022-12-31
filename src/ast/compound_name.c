/**
 * @file compound_name.c
 *
 * $$ = createCompoundName();
 */
#include "memory.h"
#include "ast.h"

CompoundName* createCompoundName() {

#ifdef ENABLE_TRACE
    printf("parser: createCompoundName\\n");
#endif /* ENABLE_DUMP */

    CompoundName* ptr = _alloc_ds(CompoundName);
    initAst(&ptr->ast, NULL, AST_COMPOUND_NAME);

    return ptr;
}

void destroyCompoundName(CompoundName* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCompoundName(CompoundName* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
