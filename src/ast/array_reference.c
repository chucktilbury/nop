/**
 * @file array_reference.c
 *
 * $$ = createArrayReference();
 */
#include "memory.h"
#include "ast.h"

ArrayReference* createArrayReference(CompoundName* compound_name,
		ArrayParameterList* array_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createArrayReference\\n");
#endif /* ENABLE_DUMP */

    ArrayReference* ptr = _alloc_ds(ArrayReference);
    initAst(&ptr->ast, NULL, AST_ARRAY_REFERENCE);
    ptr->compound_name = compound_name;
    ptr->array_parameter_list = array_parameter_list;

    return ptr;
}

void destroyArrayReference(ArrayReference* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpArrayReference(ArrayReference* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
