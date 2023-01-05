/**
 * @file yield_statement.c
 *
 * @brief $$ = createYieldStatement();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief YieldStatement* createYieldStatement()
 *
 */
YieldStatement* createYieldStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createYieldStatement\\n");
#endif /* ENABLE_DUMP */

    YieldStatement* ptr = _alloc_ds(YieldStatement);
    initAst(&ptr->ast, NULL, AST_YIELD_STATEMENT);


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for YieldStatement data structure.
 *
 */
AstResult pass1YieldStatement(YieldStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1YieldStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for YieldStatement data structure.
 *
 */
AstResult pass2YieldStatement(YieldStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2YieldStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for YieldStatement data structure.
 *
 */
AstResult pass3YieldStatement(YieldStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3YieldStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for YieldStatement data structure.
 *
 */
AstResult emitYieldStatement(YieldStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitYieldStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a YieldStatement data structure.
 *
 */
AstResult destroyYieldStatement(YieldStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyYieldStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items// nothing to traverse
        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump YieldStatement data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpYieldStatement(YieldStatement* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
