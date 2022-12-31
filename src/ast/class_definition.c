/**
 * @file class_definition.c
 *
 * $$ = createClassDefinition();
 */
#include "memory.h"
#include "ast.h"

ClassDefinition* createClassDefinition() {

#ifdef ENABLE_TRACE
    printf("parser: createClassDefinition\\n");
#endif /* ENABLE_DUMP */

    ClassDefinition* ptr = _alloc_ds(ClassDefinition);
    initAst(&ptr->ast, NULL, AST_CLASS_DEFINITION);

    return ptr;
}

void destroyClassDefinition(ClassDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassDefinition(ClassDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
