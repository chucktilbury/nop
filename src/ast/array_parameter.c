/**
 * @file array_parameter.c
 *
 * $$ = createArrayParameter();
 */
#include "memory.h"
#include "ast.h"

ArrayParameter* createArrayParameter() {

#ifdef ENABLE_TRACE
    printf("parser: createArrayParameter\\n");
#endif /* ENABLE_DUMP */

    ArrayParameter* ptr = _alloc_ds(ArrayParameter);
    initAst(&ptr->ast, NULL, AST_ARRAY_PARAMETER);

    return ptr;
}

void destroyArrayParameter(ArrayParameter* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpArrayParameter(ArrayParameter* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */