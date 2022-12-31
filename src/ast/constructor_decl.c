/**
 * @file constructor_decl.c
 *
 * $$ = createConstructorDecl();
 */
#include "memory.h"
#include "ast.h"

ConstructorDecl* createConstructorDecl(FuncDeclParameterList* func_decl_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    ConstructorDecl* ptr = _alloc_ds(ConstructorDecl);
    initAst(&ptr->ast, NULL, AST_CONSTRUCTOR_DECL);
    ptr->func_decl_parameter_list = func_decl_parameter_list;

    return ptr;
}

void destroyConstructorDecl(ConstructorDecl* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpConstructorDecl(ConstructorDecl* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
