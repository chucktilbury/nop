/**
 * @file parameter_def_list.c
 *
 * $$ = createParameterDefList();
 */
#include "memory.h"
#include "ast.h"

ParameterDefList* createParameterDefList() {

#ifdef ENABLE_TRACE
    printf("parser: createParameterDefList\\n");
#endif /* ENABLE_DUMP */

    ParameterDefList* ptr = _alloc_ds(ParameterDefList);
    initAst(&ptr->ast, NULL, AST_PARAMETER_DEF_LIST);

    return ptr;
}

void destroyParameterDefList(ParameterDefList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpParameterDefList(ParameterDefList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
