/**
 * @file func_definition.c
 *
 * $$ = createFuncDefinition();
 */
#include "memory.h"
#include "ast.h"

FuncDefinition* createFuncDefinition(TypeDefinition* type_definition,
		CompoundName* compound_name,
		FuncDefParameterList* func_def_parameter_list,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDefinition\\n");
#endif /* ENABLE_DUMP */

    FuncDefinition* ptr = _alloc_ds(FuncDefinition);
    initAst(&ptr->ast, NULL, AST_FUNC_DEFINITION);
    ptr->type_definition = type_definition;
    ptr->compound_name = compound_name;
    ptr->func_def_parameter_list = func_def_parameter_list;
    ptr->func_body = func_body;

    return ptr;
}

void destroyFuncDefinition(FuncDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncDefinition(FuncDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
