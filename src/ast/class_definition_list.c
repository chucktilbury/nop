/**
 * @file class_definition_list.c
 *
 * $$ = createClassDefinitionList();
 */
#include "memory.h"
#include "ast.h"

ClassDefinitionList* createClassDefinitionList() {

#ifdef ENABLE_TRACE
    printf("parser: createClassDefinitionList\\n");
#endif /* ENABLE_DUMP */

    ClassDefinitionList* ptr = _alloc_ds(ClassDefinitionList);
    initAst(&ptr->ast, NULL, AST_CLASS_DEFINITION_LIST);

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
