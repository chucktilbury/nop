/**
 * @file parameter_decl_list.c
 *
 * $$ = createParameterDeclList();
 */
#include "memory.h"
#include "ast.h"

ParameterDeclList* createParameterDeclList() {

#ifdef ENABLE_TRACE
    printf("parser: createParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    ParameterDeclList* ptr = _alloc_ds(ParameterDeclList);
    initAst(&ptr->ast, NULL, AST_PARAMETER_DECL_LIST);

    return ptr;
}

void destroyParameterDeclList(ParameterDeclList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpParameterDeclList(ParameterDeclList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
