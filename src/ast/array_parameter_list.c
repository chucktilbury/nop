/**
 * @file array_parameter_list.c
 *
 * $$ = createArrayParameterList();
 */
#include "memory.h"
#include "ast.h"

ArrayParameterList* createArrayParameterList(ArrayParameter* array_parameter,
		ArrayParameterList* array_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    ArrayParameterList* ptr = _alloc_ds(ArrayParameterList);
    initAst(&ptr->ast, NULL, AST_ARRAY_PARAMETER_LIST);
    ptr->array_parameter = array_parameter;
    ptr->array_parameter_list = array_parameter_list;

    return ptr;
}

void destroyArrayParameterList(ArrayParameterList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpArrayParameterList(ArrayParameterList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
