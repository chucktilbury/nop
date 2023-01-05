/**
 * @file parameter_def_list.c
 *
 * @brief $$ = createParameterDefList();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ParameterDefList* createParameterDefList(SymbolDeclaration* symbol_declaration,
		ParameterDefList* parameter_def_list)
 *
 */
ParameterDefList* createParameterDefList(SymbolDeclaration* symbol_declaration,
		ParameterDefList* parameter_def_list) {

#ifdef ENABLE_TRACE
    printf("parser: createParameterDefList\\n");
#endif /* ENABLE_DUMP */

    ParameterDefList* ptr = _alloc_ds(ParameterDefList);
    initAst(&ptr->ast, NULL, AST_PARAMETER_DEF_LIST);
    ptr->symbol_declaration = symbol_declaration;
    ptr->parameter_def_list = parameter_def_list;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ParameterDefList data structure.
 *
 */
AstResult pass1ParameterDefList(ParameterDefList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ParameterDefList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = pass1SymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_def_list != NULL) {
            AstResult res = pass1ParameterDefList(ptr->parameter_def_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ParameterDefList data structure.
 *
 */
AstResult pass2ParameterDefList(ParameterDefList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ParameterDefList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = pass2SymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_def_list != NULL) {
            AstResult res = pass2ParameterDefList(ptr->parameter_def_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ParameterDefList data structure.
 *
 */
AstResult pass3ParameterDefList(ParameterDefList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ParameterDefList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = pass3SymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_def_list != NULL) {
            AstResult res = pass3ParameterDefList(ptr->parameter_def_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ParameterDefList data structure.
 *
 */
AstResult emitParameterDefList(ParameterDefList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitParameterDefList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = emitSymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_def_list != NULL) {
            AstResult res = emitParameterDefList(ptr->parameter_def_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ParameterDefList data structure.
 *
 */
AstResult destroyParameterDefList(ParameterDefList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyParameterDefList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = destroySymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_def_list != NULL) {
            AstResult res = destroyParameterDefList(ptr->parameter_def_list);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ParameterDefList data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpParameterDefList(ParameterDefList* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = dumpSymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->parameter_def_list != NULL) {
            AstResult res = dumpParameterDefList(ptr->parameter_def_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
