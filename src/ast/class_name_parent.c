/**
 * @file class_name_parent.c
 *
 * $$ = createClassNameParent();
 */
#include "memory.h"
#include "ast.h"

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

void destroyClassNameParent(ClassNameParent* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpClassNameParent(ClassNameParent* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
