/**
 * @file symbol_type.c
 *
 * $$ = createSymbolType();
 */
#include "memory.h"
#include "ast.h"

SymbolType* createSymbolType(TypeDefinition* type_definition,
		const char* symbol) {

#ifdef ENABLE_TRACE
    printf("parser: createSymbolType\\n");
#endif /* ENABLE_DUMP */

    SymbolType* ptr = _alloc_ds(SymbolType);
    initAst(&ptr->ast, NULL, AST_SYMBOL_TYPE);
    ptr->type_definition = type_definition;
    ptr->symbol = symbol;

    return ptr;
}

void destroySymbolType(SymbolType* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpSymbolType(SymbolType* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
