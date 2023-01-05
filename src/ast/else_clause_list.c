/**
 * @file else_clause_list.c
 *
 * @brief $$ = createElseClauseList();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ElseClauseList* createElseClauseList(ElseClauseIntermediateList* else_clause_intermediate_list,
		ElseClauseFinal* else_clause_final)
 *
 */
ElseClauseList* createElseClauseList(ElseClauseIntermediateList* else_clause_intermediate_list,
		ElseClauseFinal* else_clause_final) {

#ifdef ENABLE_TRACE
    printf("parser: createElseClauseList\\n");
#endif /* ENABLE_DUMP */

    ElseClauseList* ptr = _alloc_ds(ElseClauseList);
    initAst(&ptr->ast, NULL, AST_ELSE_CLAUSE_LIST);
    ptr->else_clause_intermediate_list = else_clause_intermediate_list;
    ptr->else_clause_final = else_clause_final;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ElseClauseList data structure.
 *
 */
AstResult pass1ElseClauseList(ElseClauseList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ElseClauseList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->else_clause_intermediate_list != NULL) {
            AstResult res = pass1ElseClauseIntermediateList(ptr->else_clause_intermediate_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->else_clause_final != NULL) {
            AstResult res = pass1ElseClauseFinal(ptr->else_clause_final);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for ElseClauseList data structure.
 *
 */
AstResult pass2ElseClauseList(ElseClauseList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ElseClauseList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->else_clause_intermediate_list != NULL) {
            AstResult res = pass2ElseClauseIntermediateList(ptr->else_clause_intermediate_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->else_clause_final != NULL) {
            AstResult res = pass2ElseClauseFinal(ptr->else_clause_final);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for ElseClauseList data structure.
 *
 */
AstResult pass3ElseClauseList(ElseClauseList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ElseClauseList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->else_clause_intermediate_list != NULL) {
            AstResult res = pass3ElseClauseIntermediateList(ptr->else_clause_intermediate_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->else_clause_final != NULL) {
            AstResult res = pass3ElseClauseFinal(ptr->else_clause_final);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for ElseClauseList data structure.
 *
 */
AstResult emitElseClauseList(ElseClauseList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitElseClauseList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->else_clause_intermediate_list != NULL) {
            AstResult res = emitElseClauseIntermediateList(ptr->else_clause_intermediate_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->else_clause_final != NULL) {
            AstResult res = emitElseClauseFinal(ptr->else_clause_final);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a ElseClauseList data structure.
 *
 */
AstResult destroyElseClauseList(ElseClauseList* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyElseClauseList\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->else_clause_intermediate_list != NULL) {
            AstResult res = destroyElseClauseIntermediateList(ptr->else_clause_intermediate_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->else_clause_final != NULL) {
            AstResult res = destroyElseClauseFinal(ptr->else_clause_final);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump ElseClauseList data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpElseClauseList(ElseClauseList* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->else_clause_intermediate_list != NULL) {
            AstResult res = dumpElseClauseIntermediateList(ptr->else_clause_intermediate_list);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->else_clause_final != NULL) {
            AstResult res = dumpElseClauseFinal(ptr->else_clause_final);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
