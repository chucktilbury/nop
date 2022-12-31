/**
 * @file class_name.c
 *
 * $$ = createClassName();
 */
#include "memory.h"
#include "ast.h"

ClassName* createClassName() {

#ifdef ENABLE_TRACE
    printf("parser: createClassName\\n");
#endif /* ENABLE_DUMP */

    ClassName* ptr = _alloc_ds(ClassName);
    initAst(&ptr->ast, NULL, AST_CLASS_NAME);

    return ptr;
}

void destroyClassName(ClassName* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassName(ClassName* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
