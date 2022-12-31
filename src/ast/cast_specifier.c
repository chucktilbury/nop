/**
 * @file cast_specifier.c
 *
 * $$ = createCastSpecifier();
 */
#include "memory.h"
#include "ast.h"

CastSpecifier* createCastSpecifier() {

#ifdef ENABLE_TRACE
    printf("parser: createCastSpecifier\\n");
#endif /* ENABLE_DUMP */

    CastSpecifier* ptr = _alloc_ds(CastSpecifier);
    initAst(&ptr->ast, NULL, AST_CAST_SPECIFIER);

    return ptr;
}

void destroyCastSpecifier(CastSpecifier* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCastSpecifier(CastSpecifier* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
