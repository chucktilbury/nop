/**
 * @file print_statement.c
 *
 * @brief $$ = createPrintStatement();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief PrintStatement* createPrintStatement(ExpressionInParensRule* expression_in_parens_rule)
 *
 */
PrintStatement* createPrintStatement(ExpressionInParensRule* expression_in_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createPrintStatement\\n");
#endif /* ENABLE_DUMP */

    PrintStatement* ptr = _alloc_ds(PrintStatement);
    initAst(&ptr->ast, NULL, AST_PRINT_STATEMENT);
    ptr->expression_in_parens_rule = expression_in_parens_rule;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for PrintStatement data structure.
 *
 */
AstResult pass1PrintStatement(PrintStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1PrintStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass1ExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for PrintStatement data structure.
 *
 */
AstResult pass2PrintStatement(PrintStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2PrintStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass2ExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for PrintStatement data structure.
 *
 */
AstResult pass3PrintStatement(PrintStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3PrintStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass3ExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for PrintStatement data structure.
 *
 */
AstResult emitPrintStatement(PrintStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitPrintStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = emitExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a PrintStatement data structure.
 *
 */
AstResult destroyPrintStatement(PrintStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyPrintStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
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
 * @brief Dump PrintStatement data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpPrintStatement(PrintStatement* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = dumpExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
