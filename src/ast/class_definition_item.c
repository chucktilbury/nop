/**
 * @file class_definition_item.c
 *
 * $$ = createClassDefinitionItem();
 */
#include "memory.h"
#include "ast.h"

ClassDefinitionItem* createClassDefinitionItem(SymbolDeclaration* symbol_declaration,
		MethodDeclaration* method_declaration,
		StructDeclaration* struct_declaration,
		ScopeOperator* scope_operator,
		ConstructorDecl* constructor_decl,
		DestructorDecl* destructor_decl) {

#ifdef ENABLE_TRACE
    printf("parser: createClassDefinitionItem\\n");
#endif /* ENABLE_DUMP */

    ClassDefinitionItem* ptr = _alloc_ds(ClassDefinitionItem);
    initAst(&ptr->ast, NULL, AST_CLASS_DEFINITION_ITEM);
    ptr->symbol_declaration = symbol_declaration;
    ptr->method_declaration = method_declaration;
    ptr->struct_declaration = struct_declaration;
    ptr->scope_operator = scope_operator;
    ptr->constructor_decl = constructor_decl;
    ptr->destructor_decl = destructor_decl;

    return ptr;
}

void destroyClassDefinitionItem(ClassDefinitionItem* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassDefinitionItem(ClassDefinitionItem* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
