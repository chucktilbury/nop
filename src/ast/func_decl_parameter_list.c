/**
 * @file func_decl_parameter_list.c
 *
 * $$ = createFuncDeclParameterList();
 */
#include "memory.h"
#include "ast.h"

FuncDeclParameterList* createFuncDeclParameterList() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDeclParameterList\\n");
#endif /* ENABLE_DUMP */

    FuncDeclParameterList* ptr = _alloc_ds(FuncDeclParameterList);
    initAst(&ptr->ast, NULL, AST_FUNC_DECL_PARAMETER_LIST);

    return ptr;
}

void destroyFuncDeclParameterList(FuncDeclParameterList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncDeclParameterList(FuncDeclParameterList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
