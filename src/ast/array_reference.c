/**
 * @file array_reference.c
 *
 * @brief $$ = createArrayReference();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ArrayReference* createArrayReference(CompoundName* compound_name,
		ArrayParameterList* array_parameter_list)
 *
 */
ArrayReference* createArrayReference(CompoundName* compound_name,
		ArrayParameterList* array_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createArrayReference\\n");
#endif /* ENABLE_DUMP */

    ArrayReference* ptr = _alloc_ds(ArrayReference);
    initAst(&ptr->ast, NULL, AST_ARRAY_REFERENCE);
    ptr->compound_name = compound_name;
    ptr->array_parameter_list = array_parameter_list;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1ArrayReference(ArrayReference* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = pass1CompoundName(ptr->compound_name);
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
 * @brief Execute pass 2 analysis for this data structure.
 *
 */
AstResult pass2ArrayReference(ArrayReference* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = pass2CompoundName(ptr->compound_name);
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
 * @brief Execute pass 3 analysis for this data structure.
 *
 */
AstResult pass3ArrayReference(ArrayReference* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = pass3CompoundName(ptr->compound_name);
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
 * @brief Emit final output for this data structure.
 *
 */
AstResult emitArrayReference(ArrayReference* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = emitCompoundName(ptr->compound_name);
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
 * @brief void destroyArrayReference(ArrayReference* ptr)
 *
 */
AstResult destroyArrayReference(ArrayReference* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = destroyCompoundName(ptr->compound_name);
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
 * @brief Dump the data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpArrayReference(ArrayReference* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = dumpCompoundName(ptr->compound_name);
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
