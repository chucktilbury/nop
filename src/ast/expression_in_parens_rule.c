/**
 * @file expression_in_parens_rule.c
 *
 * @brief $$ = createExpressionInParensRule();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ExpressionInParensRule* createExpressionInParensRule(Expression* expression,
		EmptyParensRule* empty_parens_rule)
 *
 */
ExpressionInParensRule* createExpressionInParensRule(Expression* expression,
		EmptyParensRule* empty_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    ExpressionInParensRule* ptr = _alloc_ds(ExpressionInParensRule);
    initAst(&ptr->ast, NULL, AST_EXPRESSION_IN_PARENS_RULE);
    ptr->expression = expression;
    ptr->empty_parens_rule = empty_parens_rule;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ExpressionInParensRule data structure.
 *
 */
AstResult pass1ExpressionInParensRule(ExpressionInParensRule* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass1Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->empty_parens_rule != NULL) {
            AstResult res = pass1EmptyParensRule(ptr->empty_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ExpressionInParensRule data structure.
 *
 */
AstResult pass2ExpressionInParensRule(ExpressionInParensRule* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass2Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->empty_parens_rule != NULL) {
            AstResult res = pass2EmptyParensRule(ptr->empty_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ExpressionInParensRule data structure.
 *
 */
AstResult pass3ExpressionInParensRule(ExpressionInParensRule* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass3Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->empty_parens_rule != NULL) {
            AstResult res = pass3EmptyParensRule(ptr->empty_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ExpressionInParensRule data structure.
 *
 */
AstResult emitExpressionInParensRule(ExpressionInParensRule* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = emitExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->empty_parens_rule != NULL) {
            AstResult res = emitEmptyParensRule(ptr->empty_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ExpressionInParensRule data structure.
 *
 */
AstResult destroyExpressionInParensRule(ExpressionInParensRule* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyExpressionInParensRule\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = destroyExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->empty_parens_rule != NULL) {
            AstResult res = destroyEmptyParensRule(ptr->empty_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ExpressionInParensRule data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpExpressionInParensRule(ExpressionInParensRule* ptr) {

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

        if(ptr->empty_parens_rule != NULL) {
            AstResult res = dumpEmptyParensRule(ptr->empty_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
