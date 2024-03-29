/**
 * @file module_item.c
 *
 * @brief $$ = createModuleItem();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ModuleItem* createModuleItem(ClassDefinition* class_definition,
		DataDefinition* data_definition,
		FuncDefinition* func_definition,
		NamespaceDefinition* namespace_definition,
		StructDeclaration* struct_declaration,
		ScopeOperator* scope_operator,
		const char* strg)
 *
 */
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

/**
 * @brief Execute pass 1 analysis for ModuleItem data structure.
 *
 */
AstResult pass1ModuleItem(ModuleItem* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ModuleItem\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->class_definition != NULL) {
            AstResult res = pass1ClassDefinition(ptr->class_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->data_definition != NULL) {
            AstResult res = pass1DataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_definition != NULL) {
            AstResult res = pass1FuncDefinition(ptr->func_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->namespace_definition != NULL) {
            AstResult res = pass1NamespaceDefinition(ptr->namespace_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->struct_declaration != NULL) {
            AstResult res = pass1StructDeclaration(ptr->struct_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->scope_operator != NULL) {
            AstResult res = pass1ScopeOperator(ptr->scope_operator);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ModuleItem data structure.
 *
 */
AstResult pass2ModuleItem(ModuleItem* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ModuleItem\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->class_definition != NULL) {
            AstResult res = pass2ClassDefinition(ptr->class_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->data_definition != NULL) {
            AstResult res = pass2DataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_definition != NULL) {
            AstResult res = pass2FuncDefinition(ptr->func_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->namespace_definition != NULL) {
            AstResult res = pass2NamespaceDefinition(ptr->namespace_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->struct_declaration != NULL) {
            AstResult res = pass2StructDeclaration(ptr->struct_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->scope_operator != NULL) {
            AstResult res = pass2ScopeOperator(ptr->scope_operator);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ModuleItem data structure.
 *
 */
AstResult pass3ModuleItem(ModuleItem* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ModuleItem\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->class_definition != NULL) {
            AstResult res = pass3ClassDefinition(ptr->class_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->data_definition != NULL) {
            AstResult res = pass3DataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_definition != NULL) {
            AstResult res = pass3FuncDefinition(ptr->func_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->namespace_definition != NULL) {
            AstResult res = pass3NamespaceDefinition(ptr->namespace_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->struct_declaration != NULL) {
            AstResult res = pass3StructDeclaration(ptr->struct_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->scope_operator != NULL) {
            AstResult res = pass3ScopeOperator(ptr->scope_operator);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ModuleItem data structure.
 *
 */
AstResult emitModuleItem(ModuleItem* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitModuleItem\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->class_definition != NULL) {
            AstResult res = emitClassDefinition(ptr->class_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->data_definition != NULL) {
            AstResult res = emitDataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_definition != NULL) {
            AstResult res = emitFuncDefinition(ptr->func_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->namespace_definition != NULL) {
            AstResult res = emitNamespaceDefinition(ptr->namespace_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->struct_declaration != NULL) {
            AstResult res = emitStructDeclaration(ptr->struct_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->scope_operator != NULL) {
            AstResult res = emitScopeOperator(ptr->scope_operator);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ModuleItem data structure.
 *
 */
AstResult destroyModuleItem(ModuleItem* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyModuleItem\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->class_definition != NULL) {
            AstResult res = destroyClassDefinition(ptr->class_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->data_definition != NULL) {
            AstResult res = destroyDataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_definition != NULL) {
            AstResult res = destroyFuncDefinition(ptr->func_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->namespace_definition != NULL) {
            AstResult res = destroyNamespaceDefinition(ptr->namespace_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->struct_declaration != NULL) {
            AstResult res = destroyStructDeclaration(ptr->struct_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->scope_operator != NULL) {
            AstResult res = destroyScopeOperator(ptr->scope_operator);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ModuleItem data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpModuleItem(ModuleItem* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->class_definition != NULL) {
            AstResult res = dumpClassDefinition(ptr->class_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->data_definition != NULL) {
            AstResult res = dumpDataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_definition != NULL) {
            AstResult res = dumpFuncDefinition(ptr->func_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->namespace_definition != NULL) {
            AstResult res = dumpNamespaceDefinition(ptr->namespace_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->struct_declaration != NULL) {
            AstResult res = dumpStructDeclaration(ptr->struct_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->scope_operator != NULL) {
            AstResult res = dumpScopeOperator(ptr->scope_operator);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
