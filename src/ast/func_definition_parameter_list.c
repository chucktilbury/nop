/**
 * @file func_definition_parameter_list.c
 *
 * $$ = createFuncDefinitionParameterList();
 */
#include "memory.h"
#include "ast.h"

FuncDefinitionParameterList* createFuncDefinitionParameterList() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDefinitionParameterList\\n");
#endif /* ENABLE_DUMP */

    FuncDefinitionParameterList* ptr = _alloc_ds(FuncDefinitionParameterList);
    initAst(&ptr->ast, NULL, AST_FUNC_DEFINITION_PARAMETER_LIST);

    return ptr;
}

void destroyFuncDefinitionParameterList(FuncDefinitionParameterList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncDefinitionParameterList(FuncDefinitionParameterList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
