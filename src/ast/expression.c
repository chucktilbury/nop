/**
 * @file expression.c
 *
 * @brief $$ = createExpression();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief Expression* createExpression(ExpressionFactor* expression_factor,
		Expression* expression,
		CastSpecifier* cast_specifier,
		ExpressionInParensRule* expression_in_parens_rule)
 *
 */
Expression* createExpression(ExpressionFactor* expression_factor,
		Expression* expression,
		CastSpecifier* cast_specifier,
		ExpressionInParensRule* expression_in_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createExpression\\n");
#endif /* ENABLE_DUMP */

    Expression* ptr = _alloc_ds(Expression);
    initAst(&ptr->ast, NULL, AST_EXPRESSION);
    ptr->expression_factor = expression_factor;
    ptr->expression = expression;
    ptr->cast_specifier = cast_specifier;
    ptr->expression_in_parens_rule = expression_in_parens_rule;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1Expression(Expression* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->expression_factor != NULL) {
            AstResult res = pass1ExpressionFactor(ptr->expression_factor);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression != NULL) {
            AstResult res = pass1Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->cast_specifier != NULL) {
            AstResult res = pass1CastSpecifier(ptr->cast_specifier);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass1ExpressionInParensRule(ptr->expression_in_parens_rule);
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
AstResult pass2Expression(Expression* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->expression_factor != NULL) {
            AstResult res = pass2ExpressionFactor(ptr->expression_factor);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression != NULL) {
            AstResult res = pass2Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->cast_specifier != NULL) {
            AstResult res = pass2CastSpecifier(ptr->cast_specifier);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass2ExpressionInParensRule(ptr->expression_in_parens_rule);
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
AstResult pass3Expression(Expression* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->expression_factor != NULL) {
            AstResult res = pass3ExpressionFactor(ptr->expression_factor);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression != NULL) {
            AstResult res = pass3Expression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->cast_specifier != NULL) {
            AstResult res = pass3CastSpecifier(ptr->cast_specifier);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass3ExpressionInParensRule(ptr->expression_in_parens_rule);
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
AstResult emitExpression(Expression* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->expression_factor != NULL) {
            AstResult res = emitExpressionFactor(ptr->expression_factor);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression != NULL) {
            AstResult res = emitExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->cast_specifier != NULL) {
            AstResult res = emitCastSpecifier(ptr->cast_specifier);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = emitExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}

/**
 * @brief void destroyExpression(Expression* ptr)
 *
 */
AstResult destroyExpression(Expression* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->expression_factor != NULL) {
            AstResult res = destroyExpressionFactor(ptr->expression_factor);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression != NULL) {
            AstResult res = destroyExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->cast_specifier != NULL) {
            AstResult res = destroyCastSpecifier(ptr->cast_specifier);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = destroyExpressionInParensRule(ptr->expression_in_parens_rule);
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
AstResult dumpExpression(Expression* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->expression_factor != NULL) {
            AstResult res = dumpExpressionFactor(ptr->expression_factor);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression != NULL) {
            AstResult res = dumpExpression(ptr->expression);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->cast_specifier != NULL) {
            AstResult res = dumpCastSpecifier(ptr->cast_specifier);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = dumpExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
