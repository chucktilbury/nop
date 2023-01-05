/**
 * @file class_name_parent.c
 *
 * @brief $$ = createClassNameParent();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief ClassNameParent* createClassNameParent(CompoundNameInParensRule* compound_name_in_parens_rule,
		EmptyParensRule* empty_parens_rule)
 *
 */
ClassNameParent* createClassNameParent(CompoundNameInParensRule* compound_name_in_parens_rule,
		EmptyParensRule* empty_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createClassNameParent\\n");
#endif /* ENABLE_DUMP */

    ClassNameParent* ptr = _alloc_ds(ClassNameParent);
    initAst(&ptr->ast, NULL, AST_CLASS_NAME_PARENT);
    ptr->compound_name_in_parens_rule = compound_name_in_parens_rule;
    ptr->empty_parens_rule = empty_parens_rule;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for ClassNameParent data structure.
 *
 */
AstResult pass1ClassNameParent(ClassNameParent* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1ClassNameParent\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->compound_name_in_parens_rule != NULL) {
            AstResult res = pass1CompoundNameInParensRule(ptr->compound_name_in_parens_rule);
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
 * @brief Execute pass 2 analysis for ClassNameParent data structure.
 *
 */
AstResult pass2ClassNameParent(ClassNameParent* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2ClassNameParent\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->compound_name_in_parens_rule != NULL) {
            AstResult res = pass2CompoundNameInParensRule(ptr->compound_name_in_parens_rule);
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
 * @brief Execute pass 3 analysis for ClassNameParent data structure.
 *
 */
AstResult pass3ClassNameParent(ClassNameParent* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3ClassNameParent\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->compound_name_in_parens_rule != NULL) {
            AstResult res = pass3CompoundNameInParensRule(ptr->compound_name_in_parens_rule);
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
 * @brief Emit final output for ClassNameParent data structure.
 *
 */
AstResult emitClassNameParent(ClassNameParent* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitClassNameParent\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->compound_name_in_parens_rule != NULL) {
            AstResult res = emitCompoundNameInParensRule(ptr->compound_name_in_parens_rule);
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
 * @brief Destroy a ClassNameParent data structure.
 *
 */
AstResult destroyClassNameParent(ClassNameParent* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyClassNameParent\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->compound_name_in_parens_rule != NULL) {
            AstResult res = destroyCompoundNameInParensRule(ptr->compound_name_in_parens_rule);
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
 * @brief Dump ClassNameParent data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpClassNameParent(ClassNameParent* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->compound_name_in_parens_rule != NULL) {
            AstResult res = dumpCompoundNameInParensRule(ptr->compound_name_in_parens_rule);
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
