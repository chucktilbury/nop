/**
 * @file constructor_decl.c
 *
 * @brief $$ = createConstructorDecl();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ConstructorDecl* createConstructorDecl(FuncDeclParameterList* func_decl_parameter_list)
 *
 */
ConstructorDecl* createConstructorDecl(FuncDeclParameterList* func_decl_parameter_list) {

#ifdef ENABLE_TRACE
    printf("parser: createConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    ConstructorDecl* ptr = _alloc_ds(ConstructorDecl);
    initAst(&ptr->ast, NULL, AST_CONSTRUCTOR_DECL);
    ptr->func_decl_parameter_list = func_decl_parameter_list;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ConstructorDecl data structure.
 *
 */
AstResult pass1ConstructorDecl(ConstructorDecl* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->func_decl_parameter_list != NULL) {
            AstResult res = pass1FuncDeclParameterList(ptr->func_decl_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ConstructorDecl data structure.
 *
 */
AstResult pass2ConstructorDecl(ConstructorDecl* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->func_decl_parameter_list != NULL) {
            AstResult res = pass2FuncDeclParameterList(ptr->func_decl_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ConstructorDecl data structure.
 *
 */
AstResult pass3ConstructorDecl(ConstructorDecl* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->func_decl_parameter_list != NULL) {
            AstResult res = pass3FuncDeclParameterList(ptr->func_decl_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ConstructorDecl data structure.
 *
 */
AstResult emitConstructorDecl(ConstructorDecl* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->func_decl_parameter_list != NULL) {
            AstResult res = emitFuncDeclParameterList(ptr->func_decl_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ConstructorDecl data structure.
 *
 */
AstResult destroyConstructorDecl(ConstructorDecl* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->func_decl_parameter_list != NULL) {
            AstResult res = destroyFuncDeclParameterList(ptr->func_decl_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ConstructorDecl data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpConstructorDecl(ConstructorDecl* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->func_decl_parameter_list != NULL) {
            AstResult res = dumpFuncDeclParameterList(ptr->func_decl_parameter_list);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
