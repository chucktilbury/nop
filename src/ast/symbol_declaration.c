/**
 * @file symbol_declaration.c
 *
 * $$ = createSymbolDeclaration();
 */
#include "memory.h"
#include "ast.h"

SymbolDeclaration* createSymbolDeclaration(SymbolType* symbol_type) {

#ifdef ENABLE_TRACE
    printf("parser: createSymbolDeclaration\\n");
#endif /* ENABLE_DUMP */

    SymbolDeclaration* ptr = _alloc_ds(SymbolDeclaration);
    initAst(&ptr->ast, NULL, AST_SYMBOL_DECLARATION);
    ptr->symbol_type = symbol_type;

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
