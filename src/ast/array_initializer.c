/**
 * @file array_initializer.c
 *
 * $$ = createArrayInitializer();
 */
#include "memory.h"
#include "ast.h"

ArrayInitializer* createArrayInitializer(ExpressionList* expression_list) {

#ifdef ENABLE_TRACE
    printf("parser: createArrayInitializer\\n");
#endif /* ENABLE_DUMP */

    ArrayInitializer* ptr = _alloc_ds(ArrayInitializer);
    initAst(&ptr->ast, NULL, AST_ARRAY_INITIALIZER);
    ptr->expression_list = expression_list;

    return ptr;
}

void destroyArrayInitializer(ArrayInitializer* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpArrayInitializer(ArrayInitializer* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
