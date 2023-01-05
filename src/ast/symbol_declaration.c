/**
 * @file symbol_declaration.c
 *
 * @brief $$ = createSymbolDeclaration();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief SymbolDeclaration* createSymbolDeclaration(SymbolType* symbol_type)
 *
 */
SymbolDeclaration* createSymbolDeclaration(SymbolType* symbol_type) {

#ifdef ENABLE_TRACE
    printf("parser: createSymbolDeclaration\\n");
#endif /* ENABLE_DUMP */

    SymbolDeclaration* ptr = _alloc_ds(SymbolDeclaration);
    initAst(&ptr->ast, NULL, AST_SYMBOL_DECLARATION);
    ptr->symbol_type = symbol_type;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1SymbolDeclaration(SymbolDeclaration* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->symbol_type != NULL) {
            AstResult res = pass1SymbolType(ptr->symbol_type);
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
AstResult pass2SymbolDeclaration(SymbolDeclaration* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->symbol_type != NULL) {
            AstResult res = pass2SymbolType(ptr->symbol_type);
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
AstResult pass3SymbolDeclaration(SymbolDeclaration* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->symbol_type != NULL) {
            AstResult res = pass3SymbolType(ptr->symbol_type);
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
AstResult emitSymbolDeclaration(SymbolDeclaration* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->symbol_type != NULL) {
            AstResult res = emitSymbolType(ptr->symbol_type);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief void destroySymbolDeclaration(SymbolDeclaration* ptr)
 *
 */
AstResult destroySymbolDeclaration(SymbolDeclaration* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->symbol_type != NULL) {
            AstResult res = destroySymbolType(ptr->symbol_type);
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
AstResult dumpSymbolDeclaration(SymbolDeclaration* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->symbol_type != NULL) {
            AstResult res = dumpSymbolType(ptr->symbol_type);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
