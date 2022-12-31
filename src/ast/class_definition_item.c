/**
 * @file class_definition_item.c
 *
 * $$ = createClassDefinitionItem();
 */
#include "memory.h"
#include "ast.h"

ClassDefinitionItem* createClassDefinitionItem() {

#ifdef ENABLE_TRACE
    printf("parser: createClassDefinitionItem\\n");
#endif /* ENABLE_DUMP */

    ClassDefinitionItem* ptr = _alloc_ds(ClassDefinitionItem);
    initAst(&ptr->ast, NULL, AST_CLASS_DEFINITION_ITEM);

    return ptr;
}

void destroyClassDefinitionItem(ClassDefinitionItem* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassDefinitionItem(ClassDefinitionItem* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
