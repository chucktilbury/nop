/**
 * @file symbol_declaration.c
 *
 * $$ = createSymbolDeclaration();
 */
#include "memory.h"
#include "ast.h"

SymbolDeclaration* createSymbolDeclaration() {

#ifdef ENABLE_TRACE
    printf("parser: createSymbolDeclaration\\n");
#endif /* ENABLE_DUMP */

    SymbolDeclaration* ptr = _alloc_ds(SymbolDeclaration);
    initAst(&ptr->ast, NULL, AST_SYMBOL_DECLARATION);

    return ptr;
}

void destroySymbolDeclaration(SymbolDeclaration* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpSymbolDeclaration(SymbolDeclaration* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
