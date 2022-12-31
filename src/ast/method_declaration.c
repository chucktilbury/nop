/**
 * @file method_declaration.c
 *
 * $$ = createMethodDeclaration();
 */
#include "memory.h"
#include "ast.h"

MethodDeclaration* createMethodDeclaration(TypeDefinition* type_definition,
		const char* symbol,
		FuncDeclParameterList* func_decl_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createMethodDeclaration\\n");
#endif /* ENABLE_DUMP */

    MethodDeclaration* ptr = _alloc_ds(MethodDeclaration);
    initAst(&ptr->ast, NULL, AST_METHOD_DECLARATION);
    ptr->type_definition = type_definition;
    ptr->symbol = symbol;
    ptr->func_decl_parameter_list = func_decl_parameter_list;

    return ptr;
}

void destroyMethodDeclaration(MethodDeclaration* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpMethodDeclaration(MethodDeclaration* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
