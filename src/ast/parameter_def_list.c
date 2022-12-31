/**
 * @file parameter_def_list.c
 *
 * $$ = createParameterDefList();
 */
#include "memory.h"
#include "ast.h"

ParameterDefList* createParameterDefList(SymbolDeclaration* symbol_declaration,
		ParameterDefList* parameter_def_list) {

#ifdef ENABLE_TRACE
    printf("parser: createParameterDefList\\n");
#endif /* ENABLE_DUMP */

    ParameterDefList* ptr = _alloc_ds(ParameterDefList);
    initAst(&ptr->ast, NULL, AST_PARAMETER_DEF_LIST);
    ptr->symbol_declaration = symbol_declaration;
    ptr->parameter_def_list = parameter_def_list;

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
