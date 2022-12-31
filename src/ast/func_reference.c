/**
 * @file func_reference.c
 *
 * $$ = createFuncReference();
 */
#include "memory.h"
#include "ast.h"

FuncReference* createFuncReference() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncReference\\n");
#endif /* ENABLE_DUMP */

    FuncReference* ptr = _alloc_ds(FuncReference);
    initAst(&ptr->ast, NULL, AST_FUNC_REFERENCE);

    return ptr;
}

void destroyFuncReference(FuncReference* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncReference(FuncReference* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
