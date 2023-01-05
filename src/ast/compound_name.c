/**
 * @file compound_name.c
 *
 * @brief $$ = createCompoundName();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief CompoundName* createCompoundName(const char* symbol,
		CompoundName* compound_name)
 *
 */
CompoundName* createCompoundName(const char* symbol,
		CompoundName* compound_name) {

#ifdef ENABLE_TRACE
    printf("parser: createCompoundName\\n");
#endif /* ENABLE_DUMP */

    CompoundName* ptr = _alloc_ds(CompoundName);
    initAst(&ptr->ast, NULL, AST_COMPOUND_NAME);
    ptr->symbol = symbol;
    ptr->compound_name = compound_name;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1CompoundName(CompoundName* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = pass1CompoundName(ptr->compound_name);
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
AstResult pass2CompoundName(CompoundName* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = pass2CompoundName(ptr->compound_name);
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
AstResult pass3CompoundName(CompoundName* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = pass3CompoundName(ptr->compound_name);
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
AstResult emitCompoundName(CompoundName* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->compound_name != NULL) {
            AstResult res = emitCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief void destroyCompoundName(CompoundName* ptr)
 *
 */
AstResult destroyCompoundName(CompoundName* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
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
 * @brief Dump the data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpCompoundName(CompoundName* ptr) {

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

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
