/**
 * @file dict_init_list.c
 *
 * @brief $$ = createDictInitList();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief DictInitList* createDictInitList(DictInitElement* dict_init_element,
		DictInitList* dict_init_list)
 *
 */
DictInitList* createDictInitList(DictInitElement* dict_init_element,
		DictInitList* dict_init_list) {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitList\\n");
#endif /* ENABLE_DUMP */

    DictInitList* ptr = _alloc_ds(DictInitList);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_LIST);
    ptr->dict_init_element = dict_init_element;
    ptr->dict_init_list = dict_init_list;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for DictInitList data structure.
 *
 */
AstResult pass1DictInitList(DictInitList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1DictInitList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->dict_init_element != NULL) {
            AstResult res = pass1DictInitElement(ptr->dict_init_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_init_list != NULL) {
            AstResult res = pass1DictInitList(ptr->dict_init_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for DictInitList data structure.
 *
 */
AstResult pass2DictInitList(DictInitList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2DictInitList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->dict_init_element != NULL) {
            AstResult res = pass2DictInitElement(ptr->dict_init_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_init_list != NULL) {
            AstResult res = pass2DictInitList(ptr->dict_init_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for DictInitList data structure.
 *
 */
AstResult pass3DictInitList(DictInitList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3DictInitList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->dict_init_element != NULL) {
            AstResult res = pass3DictInitElement(ptr->dict_init_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_init_list != NULL) {
            AstResult res = pass3DictInitList(ptr->dict_init_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for DictInitList data structure.
 *
 */
AstResult emitDictInitList(DictInitList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitDictInitList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->dict_init_element != NULL) {
            AstResult res = emitDictInitElement(ptr->dict_init_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_init_list != NULL) {
            AstResult res = emitDictInitList(ptr->dict_init_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a DictInitList data structure.
 *
 */
AstResult destroyDictInitList(DictInitList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyDictInitList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->dict_init_element != NULL) {
            AstResult res = destroyDictInitElement(ptr->dict_init_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_init_list != NULL) {
            AstResult res = destroyDictInitList(ptr->dict_init_list);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump DictInitList data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpDictInitList(DictInitList* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->dict_init_element != NULL) {
            AstResult res = dumpDictInitElement(ptr->dict_init_element);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_init_list != NULL) {
            AstResult res = dumpDictInitList(ptr->dict_init_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
