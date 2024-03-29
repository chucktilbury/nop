/**
 * @file dict_init_element.c
 *
 * @brief $$ = createDictInitElement();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief DictInitElement* createDictInitElement(const char* strg,
		DictInitItem* dict_init_item,
		CompoundName* compound_name)
 *
 */
DictInitElement* createDictInitElement(const char* strg,
		DictInitItem* dict_init_item,
		CompoundName* compound_name) {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitElement\\n");
#endif /* ENABLE_DUMP */

    DictInitElement* ptr = _alloc_ds(DictInitElement);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_ELEMENT);
    ptr->strg = strg;
    ptr->dict_init_item = dict_init_item;
    ptr->compound_name = compound_name;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for DictInitElement data structure.
 *
 */
AstResult pass1DictInitElement(DictInitElement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1DictInitElement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->dict_init_item != NULL) {
            AstResult res = pass1DictInitItem(ptr->dict_init_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass1CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for DictInitElement data structure.
 *
 */
AstResult pass2DictInitElement(DictInitElement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2DictInitElement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->dict_init_item != NULL) {
            AstResult res = pass2DictInitItem(ptr->dict_init_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass2CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for DictInitElement data structure.
 *
 */
AstResult pass3DictInitElement(DictInitElement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3DictInitElement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->dict_init_item != NULL) {
            AstResult res = pass3DictInitItem(ptr->dict_init_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass3CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for DictInitElement data structure.
 *
 */
AstResult emitDictInitElement(DictInitElement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitDictInitElement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->dict_init_item != NULL) {
            AstResult res = emitDictInitItem(ptr->dict_init_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = emitCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a DictInitElement data structure.
 *
 */
AstResult destroyDictInitElement(DictInitElement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyDictInitElement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->dict_init_item != NULL) {
            AstResult res = destroyDictInitItem(ptr->dict_init_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = destroyCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump DictInitElement data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpDictInitElement(DictInitElement* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->dict_init_item != NULL) {
            AstResult res = dumpDictInitItem(ptr->dict_init_item);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = dumpCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
