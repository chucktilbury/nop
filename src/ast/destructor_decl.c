/**
 * @file destructor_decl.c
 *
 * $$ = createDestructorDecl();
 */
#include "memory.h"
#include "ast.h"

DestructorDecl* createDestructorDecl() {

#ifdef ENABLE_TRACE
    printf("parser: createDestructorDecl\\n");
#endif /* ENABLE_DUMP */

    DestructorDecl* ptr = _alloc_ds(DestructorDecl);
    initAst(&ptr->ast, NULL, AST_DESTRUCTOR_DECL);

    return ptr;
}

void destroyDestructorDecl(DestructorDecl* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDestructorDecl(DestructorDecl* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
