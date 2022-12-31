/**
 * @file class_definition_list.c
 *
 * $$ = createClassDefinitionList();
 */
#include "memory.h"
#include "ast.h"

ClassDefinitionList* createClassDefinitionList(ClassDefinitionItem* class_definition_item,
		ClassDefinitionList* class_definition_list) {

#ifdef ENABLE_TRACE
    printf("parser: createClassDefinitionList\\n");
#endif /* ENABLE_DUMP */

    ClassDefinitionList* ptr = _alloc_ds(ClassDefinitionList);
    initAst(&ptr->ast, NULL, AST_CLASS_DEFINITION_LIST);
    ptr->class_definition_item = class_definition_item;
    ptr->class_definition_list = class_definition_list;

    return ptr;
}

void destroyClassDefinitionList(ClassDefinitionList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassDefinitionList(ClassDefinitionList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
