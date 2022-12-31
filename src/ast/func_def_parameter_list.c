/**
 * @file func_def_parameter_list.c
 *
 * $$ = createFuncDefParameterList();
 */
#include "memory.h"
#include "ast.h"

FuncDefParameterList* createFuncDefParameterList(ParameterDefList* parameter_def_list) {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDefParameterList\\n");
#endif /* ENABLE_DUMP */

    FuncDefParameterList* ptr = _alloc_ds(FuncDefParameterList);
    initAst(&ptr->ast, NULL, AST_FUNC_DEF_PARAMETER_LIST);
    ptr->parameter_def_list = parameter_def_list;

    return ptr;
}

void destroyFuncDefParameterList(FuncDefParameterList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncDefParameterList(FuncDefParameterList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
