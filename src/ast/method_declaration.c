/**
 * @file method_declaration.c
 *
 * $$ = createMethodDeclaration();
 */
#include "memory.h"
#include "ast.h"

MethodDeclaration* createMethodDeclaration() {

#ifdef ENABLE_TRACE
    printf("parser: createMethodDeclaration\\n");
#endif /* ENABLE_DUMP */

    MethodDeclaration* ptr = _alloc_ds(MethodDeclaration);
    initAst(&ptr->ast, NULL, AST_METHOD_DECLARATION);

    return ptr;
}

void destroyMethodDeclaration(MethodDeclaration* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpMethodDeclaration(MethodDeclaration* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
