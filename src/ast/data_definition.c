/**
 * @file data_definition.c
 *
 * @brief $$ = createDataDefinition();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief DataDefinition* createDataDefinition(SymbolDeclaration* symbol_declaration,
		Initialzer* initialzer)
 *
 */
DataDefinition* createDataDefinition(SymbolDeclaration* symbol_declaration,
		Initialzer* initialzer) {

#ifdef ENABLE_TRACE
    printf("parser: createDataDefinition\\n");
#endif /* ENABLE_DUMP */

    DataDefinition* ptr = _alloc_ds(DataDefinition);
    initAst(&ptr->ast, NULL, AST_DATA_DEFINITION);
    ptr->symbol_declaration = symbol_declaration;
    ptr->initialzer = initialzer;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for DataDefinition data structure.
 *
 */
AstResult pass1DataDefinition(DataDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1DataDefinition\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = pass1SymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = pass1Initialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for DataDefinition data structure.
 *
 */
AstResult pass2DataDefinition(DataDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2DataDefinition\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = pass2SymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = pass2Initialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for DataDefinition data structure.
 *
 */
AstResult pass3DataDefinition(DataDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3DataDefinition\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = pass3SymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = pass3Initialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for DataDefinition data structure.
 *
 */
AstResult emitDataDefinition(DataDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitDataDefinition\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = emitSymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = emitInitialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a DataDefinition data structure.
 *
 */
AstResult destroyDataDefinition(DataDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyDataDefinition\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->symbol_declaration != NULL) {
            AstResult res = destroySymbolDeclaration(ptr->symbol_declaration);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = destroyInitialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump DataDefinition data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpDataDefinition(DataDefinition* ptr) {

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

        if(ptr->initialzer != NULL) {
            AstResult res = dumpInitialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
