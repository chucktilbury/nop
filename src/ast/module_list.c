/**
 * @file module_list.c
 *
 * @brief $$ = createModuleList();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ModuleList* createModuleList(ModuleItem* module_item,
		ModuleList* module_list)
 *
 */
ModuleList* createModuleList(ModuleItem* module_item,
		ModuleList* module_list) {

#ifdef ENABLE_TRACE
    printf("parser: createModuleList\\n");
#endif /* ENABLE_DUMP */

    ModuleList* ptr = _alloc_ds(ModuleList);
    initAst(&ptr->ast, NULL, AST_MODULE_LIST);
    ptr->module_item = module_item;
    ptr->module_list = module_list;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1ModuleList(ModuleList* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->module_item != NULL) {
            AstResult res = pass1ModuleItem(ptr->module_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module_list != NULL) {
            AstResult res = pass1ModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for this data structure.
 *
 */
AstResult pass2ModuleList(ModuleList* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->module_item != NULL) {
            AstResult res = pass2ModuleItem(ptr->module_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module_list != NULL) {
            AstResult res = pass2ModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for this data structure.
 *
 */
AstResult pass3ModuleList(ModuleList* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->module_item != NULL) {
            AstResult res = pass3ModuleItem(ptr->module_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module_list != NULL) {
            AstResult res = pass3ModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief Emit final output for this data structure.
 *
 */
AstResult emitModuleList(ModuleList* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->module_item != NULL) {
            AstResult res = emitModuleItem(ptr->module_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module_list != NULL) {
            AstResult res = emitModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief void destroyModuleList(ModuleList* ptr)
 *
 */
AstResult destroyModuleList(ModuleList* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->module_item != NULL) {
            AstResult res = destroyModuleItem(ptr->module_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module_list != NULL) {
            AstResult res = destroyModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }
    return AST_RES_OK;
}

/**
 * @brief Dump the data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpModuleList(ModuleList* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->module_item != NULL) {
            AstResult res = dumpModuleItem(ptr->module_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module_list != NULL) {
            AstResult res = dumpModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
