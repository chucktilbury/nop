/**
 * @file array_parameter_list.c
 *
 * @brief $$ = createArrayParameterList();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ArrayParameterList* createArrayParameterList(ArrayParameter* array_parameter,
		ArrayParameterList* array_parameter_list)
 *
 */
ArrayParameterList* createArrayParameterList(ArrayParameter* array_parameter,
		ArrayParameterList* array_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    ArrayParameterList* ptr = _alloc_ds(ArrayParameterList);
    initAst(&ptr->ast, NULL, AST_ARRAY_PARAMETER_LIST);
    ptr->array_parameter = array_parameter;
    ptr->array_parameter_list = array_parameter_list;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ArrayParameterList data structure.
 *
 */
AstResult pass1ArrayParameterList(ArrayParameterList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->array_parameter != NULL) {
            AstResult res = pass1ArrayParameter(ptr->array_parameter);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_parameter_list != NULL) {
            AstResult res = pass1ArrayParameterList(ptr->array_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ArrayParameterList data structure.
 *
 */
AstResult pass2ArrayParameterList(ArrayParameterList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->array_parameter != NULL) {
            AstResult res = pass2ArrayParameter(ptr->array_parameter);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_parameter_list != NULL) {
            AstResult res = pass2ArrayParameterList(ptr->array_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ArrayParameterList data structure.
 *
 */
AstResult pass3ArrayParameterList(ArrayParameterList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->array_parameter != NULL) {
            AstResult res = pass3ArrayParameter(ptr->array_parameter);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_parameter_list != NULL) {
            AstResult res = pass3ArrayParameterList(ptr->array_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ArrayParameterList data structure.
 *
 */
AstResult emitArrayParameterList(ArrayParameterList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->array_parameter != NULL) {
            AstResult res = emitArrayParameter(ptr->array_parameter);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_parameter_list != NULL) {
            AstResult res = emitArrayParameterList(ptr->array_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ArrayParameterList data structure.
 *
 */
AstResult destroyArrayParameterList(ArrayParameterList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyArrayParameterList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->array_parameter != NULL) {
            AstResult res = destroyArrayParameter(ptr->array_parameter);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_parameter_list != NULL) {
            AstResult res = destroyArrayParameterList(ptr->array_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ArrayParameterList data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpArrayParameterList(ArrayParameterList* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->array_parameter != NULL) {
            AstResult res = dumpArrayParameter(ptr->array_parameter);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_parameter_list != NULL) {
            AstResult res = dumpArrayParameterList(ptr->array_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
