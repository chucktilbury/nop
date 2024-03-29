/**
 * @file break_statement.c
 *
 * @brief $$ = createBreakStatement();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief BreakStatement* createBreakStatement()
 *
 */
BreakStatement* createBreakStatement() {

#ifdef ENABLE_TRACE
    printf("parser: createBreakStatement\\n");
#endif /* ENABLE_DUMP */

    BreakStatement* ptr = _alloc_ds(BreakStatement);
    initAst(&ptr->ast, NULL, AST_BREAK_STATEMENT);


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for BreakStatement data structure.
 *
 */
AstResult pass1BreakStatement(BreakStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1BreakStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for BreakStatement data structure.
 *
 */
AstResult pass2BreakStatement(BreakStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2BreakStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for BreakStatement data structure.
 *
 */
AstResult pass3BreakStatement(BreakStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3BreakStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for BreakStatement data structure.
 *
 */
AstResult emitBreakStatement(BreakStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitBreakStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a BreakStatement data structure.
 *
 */
AstResult destroyBreakStatement(BreakStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyBreakStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items// nothing to traverse
        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump BreakStatement data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpBreakStatement(BreakStatement* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items// nothing to traverse
    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
