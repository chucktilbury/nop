/**
 * @file if_clause.c
 *
 * @brief $$ = createIfClause();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief IfClause* createIfClause(ExpressionInParensRule* expression_in_parens_rule,
		FuncBody* func_body)
 *
 */
IfClause* createIfClause(ExpressionInParensRule* expression_in_parens_rule,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createIfClause\\n");
#endif /* ENABLE_DUMP */

    IfClause* ptr = _alloc_ds(IfClause);
    initAst(&ptr->ast, NULL, AST_IF_CLAUSE);
    ptr->expression_in_parens_rule = expression_in_parens_rule;
    ptr->func_body = func_body;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for IfClause data structure.
 *
 */
AstResult pass1IfClause(IfClause* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1IfClause\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass1ExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = pass1FuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for IfClause data structure.
 *
 */
AstResult pass2IfClause(IfClause* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2IfClause\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass2ExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = pass2FuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for IfClause data structure.
 *
 */
AstResult pass3IfClause(IfClause* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3IfClause\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = pass3ExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = pass3FuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for IfClause data structure.
 *
 */
AstResult emitIfClause(IfClause* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitIfClause\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = emitExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = emitFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a IfClause data structure.
 *
 */
AstResult destroyIfClause(IfClause* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyIfClause\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->expression_in_parens_rule != NULL) {
            AstResult res = destroyExpressionInParensRule(ptr->expression_in_parens_rule);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = destroyFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump IfClause data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpIfClause(IfClause* ptr) {

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

        if(ptr->func_body != NULL) {
            AstResult res = dumpFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
