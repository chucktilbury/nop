/**
 * @file else_clause_final.c
 *
 * @brief $$ = createElseClauseFinal();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ElseClauseFinal* createElseClauseFinal(EmptyParensRule* empty_parens_rule,
		FuncBody* func_body)
 *
 */
ElseClauseFinal* createElseClauseFinal(EmptyParensRule* empty_parens_rule,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createElseClauseFinal\\n");
#endif /* ENABLE_DUMP */

    ElseClauseFinal* ptr = _alloc_ds(ElseClauseFinal);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE_FINAL);
    ptr->empty_parens_rule = empty_parens_rule;
    ptr->func_body = func_body;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1ElseClauseFinal(ElseClauseFinal* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->empty_parens_rule != NULL) {
            AstResult res = pass1EmptyParensRule(ptr->empty_parens_rule);
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
 * @brief Execute pass 2 analysis for this data structure.
 *
 */
AstResult pass2ElseClauseFinal(ElseClauseFinal* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->empty_parens_rule != NULL) {
            AstResult res = pass2EmptyParensRule(ptr->empty_parens_rule);
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
 * @brief Execute pass 3 analysis for this data structure.
 *
 */
AstResult pass3ElseClauseFinal(ElseClauseFinal* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->empty_parens_rule != NULL) {
            AstResult res = pass3EmptyParensRule(ptr->empty_parens_rule);
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
 * @brief Emit final output for this data structure.
 *
 */
AstResult emitElseClauseFinal(ElseClauseFinal* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->empty_parens_rule != NULL) {
            AstResult res = emitEmptyParensRule(ptr->empty_parens_rule);
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
 * @brief void destroyElseClauseFinal(ElseClauseFinal* ptr)
 *
 */
AstResult destroyElseClauseFinal(ElseClauseFinal* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->empty_parens_rule != NULL) {
            AstResult res = destroyEmptyParensRule(ptr->empty_parens_rule);
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
 * @brief Dump the data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpElseClauseFinal(ElseClauseFinal* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->empty_parens_rule != NULL) {
            AstResult res = dumpEmptyParensRule(ptr->empty_parens_rule);
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
