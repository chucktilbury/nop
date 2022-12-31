/**
 * @file class_name_parent.c
 *
 * $$ = createClassNameParent();
 */
#include "memory.h"
#include "ast.h"

ClassNameParent* createClassNameParent() {

#ifdef ENABLE_TRACE
    printf("parser: createClassNameParent\\n");
#endif /* ENABLE_DUMP */

    ClassNameParent* ptr = _alloc_ds(ClassNameParent);
    initAst(&ptr->ast, NULL, AST_CLASS_NAME_PARENT);

    return ptr;
}

void destroyClassNameParent(ClassNameParent* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassNameParent(ClassNameParent* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
