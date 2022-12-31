/**
 * @file struct_declaration.c
 *
 * $$ = createStructDeclaration();
 */
#include "memory.h"
#include "ast.h"

StructDeclaration* createStructDeclaration(const char* symbol,
		StructBody* struct_body) {

#ifdef ENABLE_TRACE
    printf("parser: createStructDeclaration\\n");
#endif /* ENABLE_DUMP */

    StructDeclaration* ptr = _alloc_ds(StructDeclaration);
    initAst(&ptr->ast, NULL, AST_STRUCT_DECLARATION);
    ptr->symbol = symbol;
    ptr->struct_body = struct_body;

    return ptr;
}

void destroyStructDeclaration(StructDeclaration* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpStructDeclaration(StructDeclaration* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
