/**
 * @file module.c
 *
 * @brief $$ = createModule();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief Module* createModule(ModuleList* module_list,
		Module* module)
 *
 */
Module* createModule(ModuleList* module_list,
		Module* module) {

#ifdef ENABLE_TRACE
    printf("parser: createModule\\n");
#endif /* ENABLE_DUMP */

    Module* ptr = _alloc_ds(Module);
    initAst(&ptr->ast, NULL, AST_MODULE);
    ptr->module_list = module_list;
    ptr->module = module;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for Module data structure.
 *
 */
AstResult pass1Module(Module* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1Module\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->module_list != NULL) {
            AstResult res = pass1ModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module != NULL) {
            AstResult res = pass1Module(ptr->module);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for Module data structure.
 *
 */
AstResult pass2Module(Module* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2Module\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->module_list != NULL) {
            AstResult res = pass2ModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module != NULL) {
            AstResult res = pass2Module(ptr->module);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for Module data structure.
 *
 */
AstResult pass3Module(Module* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3Module\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->module_list != NULL) {
            AstResult res = pass3ModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module != NULL) {
            AstResult res = pass3Module(ptr->module);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for Module data structure.
 *
 */
AstResult emitModule(Module* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitModule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->module_list != NULL) {
            AstResult res = emitModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module != NULL) {
            AstResult res = emitModule(ptr->module);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a Module data structure.
 *
 */
AstResult destroyModule(Module* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyModule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->module_list != NULL) {
            AstResult res = destroyModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module != NULL) {
            AstResult res = destroyModule(ptr->module);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump Module data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpModule(Module* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->module_list != NULL) {
            AstResult res = dumpModuleList(ptr->module_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->module != NULL) {
            AstResult res = dumpModule(ptr->module);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
