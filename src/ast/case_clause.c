/**
 * @file case_clause.c
 *
 * @brief $$ = createCaseClause();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief CaseClause* createCaseClause(ConstantExpression* constant_expression,
		FuncBody* func_body)
 *
 */
CaseClause* createCaseClause(ConstantExpression* constant_expression,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createCaseClause\\n");
#endif /* ENABLE_DUMP */

    CaseClause* ptr = _alloc_ds(CaseClause);
    initAst(&ptr->ast, NULL, AST_CASE_CLAUSE);
    ptr->constant_expression = constant_expression;
    ptr->func_body = func_body;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1CaseClause(CaseClause* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = pass1ConstantExpression(ptr->constant_expression);
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
AstResult pass2CaseClause(CaseClause* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = pass2ConstantExpression(ptr->constant_expression);
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
AstResult pass3CaseClause(CaseClause* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = pass3ConstantExpression(ptr->constant_expression);
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
AstResult emitCaseClause(CaseClause* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = emitConstantExpression(ptr->constant_expression);
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
 * @brief void destroyCaseClause(CaseClause* ptr)
 *
 */
AstResult destroyCaseClause(CaseClause* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->constant_expression != NULL) {
            AstResult res = destroyConstantExpression(ptr->constant_expression);
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
AstResult dumpCaseClause(CaseClause* ptr) {

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

        if(ptr->func_body != NULL) {
            AstResult res = dumpFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
