/**
 * @file initialzer.c
 *
 * @brief $$ = createInitialzer();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief Initialzer* createInitialzer(Expression* expression,
		ArrayInitializer* array_initializer,
		DictInitializer* dict_initializer)
 *
 */
Initialzer* createInitialzer(Expression* expression,
		ArrayInitializer* array_initializer,
		DictInitializer* dict_initializer) {

#ifdef ENABLE_TRACE
    printf("parser: createInitialzer\\n");
#endif /* ENABLE_DUMP */

    Initialzer* ptr = _alloc_ds(Initialzer);
    initAst(&ptr->ast, NULL, AST_INITIALZER);
    ptr->expression = expression;
    ptr->array_initializer = array_initializer;
    ptr->dict_initializer = dict_initializer;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1Initialzer(Initialzer* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass1Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_initializer != NULL) {
            AstResult res = pass1ArrayInitializer(ptr->array_initializer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_initializer != NULL) {
            AstResult res = pass1DictInitializer(ptr->dict_initializer);
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
AstResult pass2Initialzer(Initialzer* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass2Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_initializer != NULL) {
            AstResult res = pass2ArrayInitializer(ptr->array_initializer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_initializer != NULL) {
            AstResult res = pass2DictInitializer(ptr->dict_initializer);
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
AstResult pass3Initialzer(Initialzer* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass3Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_initializer != NULL) {
            AstResult res = pass3ArrayInitializer(ptr->array_initializer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_initializer != NULL) {
            AstResult res = pass3DictInitializer(ptr->dict_initializer);
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
AstResult emitInitialzer(Initialzer* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = emitExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_initializer != NULL) {
            AstResult res = emitArrayInitializer(ptr->array_initializer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_initializer != NULL) {
            AstResult res = emitDictInitializer(ptr->dict_initializer);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief void destroyInitialzer(Initialzer* ptr)
 *
 */
AstResult destroyInitialzer(Initialzer* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = destroyExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_initializer != NULL) {
            AstResult res = destroyArrayInitializer(ptr->array_initializer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_initializer != NULL) {
            AstResult res = destroyDictInitializer(ptr->dict_initializer);
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
AstResult dumpInitialzer(Initialzer* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = dumpExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_initializer != NULL) {
            AstResult res = dumpArrayInitializer(ptr->array_initializer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->dict_initializer != NULL) {
            AstResult res = dumpDictInitializer(ptr->dict_initializer);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
