/**
 * @file type_definition.c
 *
 * @brief $$ = createTypeDefinition();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief TypeDefinition* createTypeDefinition(int number,
		int string,
		int boolean,
		int nothing,
		int list,
		int dict,
		CompoundName* compound_name)
 *
 */
TypeDefinition* createTypeDefinition(int number,
		int string,
		int boolean,
		int nothing,
		int list,
		int dict,
		CompoundName* compound_name) {

#ifdef ENABLE_TRACE
    printf("parser: createTypeDefinition\\n");
#endif /* ENABLE_DUMP */

    TypeDefinition* ptr = _alloc_ds(TypeDefinition);
    initAst(&ptr->ast, NULL, AST_TYPE_DEFINITION);
    ptr->number = number;
    ptr->string = string;
    ptr->boolean = boolean;
    ptr->nothing = nothing;
    ptr->list = list;
    ptr->dict = dict;
    ptr->compound_name = compound_name;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for TypeDefinition data structure.
 *
 */
AstResult pass1TypeDefinition(TypeDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1TypeDefinition\\n");
#endif /* ENABLE_DUMP */

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
 * @brief Execute pass 2 analysis for TypeDefinition data structure.
 *
 */
AstResult pass2TypeDefinition(TypeDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2TypeDefinition\\n");
#endif /* ENABLE_DUMP */

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
 * @brief Execute pass 3 analysis for TypeDefinition data structure.
 *
 */
AstResult pass3TypeDefinition(TypeDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3TypeDefinition\\n");
#endif /* ENABLE_DUMP */

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
 * @brief Emit final output for TypeDefinition data structure.
 *
 */
AstResult emitTypeDefinition(TypeDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitTypeDefinition\\n");
#endif /* ENABLE_DUMP */

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
 * @brief Destroy a TypeDefinition data structure.
 *
 */
AstResult destroyTypeDefinition(TypeDefinition* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyTypeDefinition\\n");
#endif /* ENABLE_DUMP */

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
 * @brief Dump TypeDefinition data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpTypeDefinition(TypeDefinition* ptr) {

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
