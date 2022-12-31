/**
 * @file parameter_decl_element.c
 *
 * $$ = createParameterDeclElement();
 */
#include "memory.h"
#include "ast.h"

ParameterDeclElement* createParameterDeclElement() {

#ifdef ENABLE_TRACE
    printf("parser: createParameterDeclElement\\n");
#endif /* ENABLE_DUMP */

    ParameterDeclElement* ptr = _alloc_ds(ParameterDeclElement);
    initAst(&ptr->ast, NULL, AST_PARAMETER_DECL_ELEMENT);

    return ptr;
}

void destroyParameterDeclElement(ParameterDeclElement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpParameterDeclElement(ParameterDeclElement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
