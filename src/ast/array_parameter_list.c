/**
 * @file array_parameter_list.c
 *
 * $$ = createArrayParameterList();
 */
#include "memory.h"
#include "ast.h"

ArrayParameterList* createArrayParameterList() {

#ifdef ENABLE_TRACE
    printf("parser: createArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    ArrayParameterList* ptr = _alloc_ds(ArrayParameterList);
    initAst(&ptr->ast, NULL, AST_ARRAY_PARAMETER_LIST);

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
