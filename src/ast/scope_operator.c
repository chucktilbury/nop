/**
 * @file scope_operator.c
 *
 * @brief $$ = createScopeOperator();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ScopeOperator* createScopeOperator(int private,
		int public,
		int protected)
 *
 */
ScopeOperator* createScopeOperator(int private,
		int public,
		int protected) {

#ifdef ENABLE_TRACE
    printf("parser: createScopeOperator\\n");
#endif /* ENABLE_DUMP */

    ScopeOperator* ptr = _alloc_ds(ScopeOperator);
    initAst(&ptr->ast, NULL, AST_SCOPE_OPERATOR);
    ptr->private = private;
    ptr->public = public;
    ptr->protected = protected;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ScopeOperator data structure.
 *
 */
AstResult pass1ScopeOperator(ScopeOperator* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ScopeOperator\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ScopeOperator data structure.
 *
 */
AstResult pass2ScopeOperator(ScopeOperator* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ScopeOperator\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ScopeOperator data structure.
 *
 */
AstResult pass3ScopeOperator(ScopeOperator* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ScopeOperator\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ScopeOperator data structure.
 *
 */
AstResult emitScopeOperator(ScopeOperator* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitScopeOperator\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ScopeOperator data structure.
 *
 */
AstResult destroyScopeOperator(ScopeOperator* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyScopeOperator\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items// nothing to traverse
        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ScopeOperator data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpScopeOperator(ScopeOperator* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
