/**
 * @file func_decl_parameter_list.c
 *
 * $$ = createFuncDeclParameterList();
 */
#include "memory.h"
#include "ast.h"

FuncDeclParameterList* createFuncDeclParameterList(ParameterDeclList* parameter_decl_list,
		EmptyParensRule* empty_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDeclParameterList\\n");
#endif /* ENABLE_DUMP */

    FuncDeclParameterList* ptr = _alloc_ds(FuncDeclParameterList);
    initAst(&ptr->ast, NULL, AST_FUNC_DECL_PARAMETER_LIST);
    ptr->parameter_decl_list = parameter_decl_list;
    ptr->empty_parens_rule = empty_parens_rule;

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
