/**
 * @file constructor_decl.c
 *
 * $$ = createConstructorDecl();
 */
#include "memory.h"
#include "ast.h"

ConstructorDecl* createConstructorDecl() {

#ifdef ENABLE_TRACE
    printf("parser: createConstructorDecl\\n");
#endif /* ENABLE_DUMP */

    ConstructorDecl* ptr = _alloc_ds(ConstructorDecl);
    initAst(&ptr->ast, NULL, AST_CONSTRUCTOR_DECL);

    return ptr;
}

void destroyConstructorDecl(ConstructorDecl* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpConstructorDecl(ConstructorDecl* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
