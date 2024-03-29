/**
 * @file expression_factor.c
 *
 * @brief $$ = createExpressionFactor();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ExpressionFactor* createExpressionFactor(ConstantExpression* constant_expression,
		CompoundName* compound_name,
		ArrayReference* array_reference,
		FuncReference* func_reference)
 *
 */
ExpressionFactor* createExpressionFactor(ConstantExpression* constant_expression,
		CompoundName* compound_name,
		ArrayReference* array_reference,
		FuncReference* func_reference) {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    ExpressionFactor* ptr = _alloc_ds(ExpressionFactor);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_FACTOR);
    ptr->constant_expression = constant_expression;
    ptr->compound_name = compound_name;
    ptr->array_reference = array_reference;
    ptr->func_reference = func_reference;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ExpressionFactor data structure.
 *
 */
AstResult pass1ExpressionFactor(ExpressionFactor* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = pass1ConstantExpression(ptr->constant_expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass1CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_reference != NULL) {
            AstResult res = pass1ArrayReference(ptr->array_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = pass1FuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ExpressionFactor data structure.
 *
 */
AstResult pass2ExpressionFactor(ExpressionFactor* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = pass2ConstantExpression(ptr->constant_expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass2CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_reference != NULL) {
            AstResult res = pass2ArrayReference(ptr->array_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = pass2FuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ExpressionFactor data structure.
 *
 */
AstResult pass3ExpressionFactor(ExpressionFactor* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = pass3ConstantExpression(ptr->constant_expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass3CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_reference != NULL) {
            AstResult res = pass3ArrayReference(ptr->array_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = pass3FuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ExpressionFactor data structure.
 *
 */
AstResult emitExpressionFactor(ExpressionFactor* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = emitConstantExpression(ptr->constant_expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = emitCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_reference != NULL) {
            AstResult res = emitArrayReference(ptr->array_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = emitFuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ExpressionFactor data structure.
 *
 */
AstResult destroyExpressionFactor(ExpressionFactor* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyExpressionFactor\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = destroyConstantExpression(ptr->constant_expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = destroyCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_reference != NULL) {
            AstResult res = destroyArrayReference(ptr->array_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = destroyFuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ExpressionFactor data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpExpressionFactor(ExpressionFactor* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = dumpConstantExpression(ptr->constant_expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = dumpCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->array_reference != NULL) {
            AstResult res = dumpArrayReference(ptr->array_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = dumpFuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
