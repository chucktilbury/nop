/**
 * @file parameter_decl_list.c
 *
 * @brief $$ = createParameterDeclList();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ParameterDeclList* createParameterDeclList(ParameterDeclElement* parameter_decl_element,
		ParameterDeclList* parameter_decl_list)
 *
 */
ParameterDeclList* createParameterDeclList(ParameterDeclElement* parameter_decl_element,
		ParameterDeclList* parameter_decl_list) {

#ifdef ENABLE_TRACE
    printf("parser: createParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    ParameterDeclList* ptr = _alloc_ds(ParameterDeclList);
    initAst(&ptr->ast, NULL, AST_PARAMETER_DECL_LIST);
    ptr->parameter_decl_element = parameter_decl_element;
    ptr->parameter_decl_list = parameter_decl_list;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ParameterDeclList data structure.
 *
 */
AstResult pass1ParameterDeclList(ParameterDeclList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->parameter_decl_element != NULL) {
            AstResult res = pass1ParameterDeclElement(ptr->parameter_decl_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_decl_list != NULL) {
            AstResult res = pass1ParameterDeclList(ptr->parameter_decl_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ParameterDeclList data structure.
 *
 */
AstResult pass2ParameterDeclList(ParameterDeclList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->parameter_decl_element != NULL) {
            AstResult res = pass2ParameterDeclElement(ptr->parameter_decl_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_decl_list != NULL) {
            AstResult res = pass2ParameterDeclList(ptr->parameter_decl_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ParameterDeclList data structure.
 *
 */
AstResult pass3ParameterDeclList(ParameterDeclList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->parameter_decl_element != NULL) {
            AstResult res = pass3ParameterDeclElement(ptr->parameter_decl_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_decl_list != NULL) {
            AstResult res = pass3ParameterDeclList(ptr->parameter_decl_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ParameterDeclList data structure.
 *
 */
AstResult emitParameterDeclList(ParameterDeclList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->parameter_decl_element != NULL) {
            AstResult res = emitParameterDeclElement(ptr->parameter_decl_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_decl_list != NULL) {
            AstResult res = emitParameterDeclList(ptr->parameter_decl_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ParameterDeclList data structure.
 *
 */
AstResult destroyParameterDeclList(ParameterDeclList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyParameterDeclList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->parameter_decl_element != NULL) {
            AstResult res = destroyParameterDeclElement(ptr->parameter_decl_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_decl_list != NULL) {
            AstResult res = destroyParameterDeclList(ptr->parameter_decl_list);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ParameterDeclList data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpParameterDeclList(ParameterDeclList* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->parameter_decl_element != NULL) {
            AstResult res = dumpParameterDeclElement(ptr->parameter_decl_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_decl_list != NULL) {
            AstResult res = dumpParameterDeclList(ptr->parameter_decl_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
