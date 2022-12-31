/**
 * @file class_definition.c
 *
 * $$ = createClassDefinition();
 */
#include "memory.h"
#include "ast.h"

ClassDefinition* createClassDefinition(ClassDefinitionList* class_definition_list,
		ClassName* class_name) {

#ifdef ENABLE_TRACE
    printf("parser: createClassDefinition\\n");
#endif /* ENABLE_DUMP */

    ClassDefinition* ptr = _alloc_ds(ClassDefinition);
    initAst(&ptr->ast, NULL, AST_CLASS_DEFINITION);
    ptr->class_definition_list = class_definition_list;
    ptr->class_name = class_name;

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
