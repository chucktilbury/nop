/**
 * @file module_item.c
 *
 * $$ = createModuleItem();
 */
#include "memory.h"
#include "ast.h"

ModuleItem* createModuleItem(ClassDefinition* class_definition,
		DataDefinition* data_definition,
		FuncDefinition* func_definition,
		NamespaceDefinition* namespace_definition,
		StructDeclaration* struct_declaration,
		ScopeOperator* scope_operator,
		const char* strg) {

#ifdef ENABLE_TRACE
    printf("parser: createModuleItem\\n");
#endif /* ENABLE_DUMP */

    ModuleItem* ptr = _alloc_ds(ModuleItem);
    initAst(&ptr->ast, NULL, AST_MODULE_ITEM);
    ptr->class_definition = class_definition;
    ptr->data_definition = data_definition;
    ptr->func_definition = func_definition;
    ptr->namespace_definition = namespace_definition;
    ptr->struct_declaration = struct_declaration;
    ptr->scope_operator = scope_operator;
    ptr->strg = strg;

    return ptr;
}

void destroyModuleItem(ModuleItem* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpModuleItem(ModuleItem* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
