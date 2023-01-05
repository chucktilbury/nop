/**
 * @file else_clause.c
 *
 * @brief $$ = createElseClause();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ElseClause* createElseClause(Expression* expression,
		FuncBody* func_body)
 *
 */
ElseClause* createElseClause(Expression* expression,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createElseClause\\n");
#endif /* ENABLE_DUMP */

    ElseClause* ptr = _alloc_ds(ElseClause);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE);
    ptr->expression = expression;
    ptr->func_body = func_body;

    return ptr;
}

/**
 * @brief Execute pass 1 analysis for this data structure.
 *
 */
AstResult pass1ElseClause(ElseClause* ptr) {

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass1Expression(ptr->expression);
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
AstResult pass2ElseClause(ElseClause* ptr) {

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass2Expression(ptr->expression);
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
AstResult pass3ElseClause(ElseClause* ptr) {

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = pass3Expression(ptr->expression);
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
AstResult emitElseClause(ElseClause* ptr) {

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = emitExpression(ptr->expression);
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
 * @brief void destroyElseClause(ElseClause* ptr)
 *
 */
AstResult destroyElseClause(ElseClause* ptr) {

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->expression != NULL) {
            AstResult res = destroyExpression(ptr->expression);
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
AstResult dumpElseClause(ElseClause* ptr) {

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

        if(ptr->func_body != NULL) {
            AstResult res = dumpFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }
    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
