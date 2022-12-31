/**
 * @file struct_body.c
 *
 * $$ = createStructBody();
 */
#include "memory.h"
#include "ast.h"

StructBody* createStructBody(SymbolDeclaration* symbol_declaration,
		StructBody* struct_body) {

#ifdef ENABLE_TRACE
    printf("parser: createStructBody\\n");
#endif /* ENABLE_DUMP */

    StructBody* ptr = _alloc_ds(StructBody);
    initAst(&ptr->ast, NULL, AST_STRUCT_BODY);
    ptr->symbol_declaration = symbol_declaration;
    ptr->struct_body = struct_body;

    return ptr;
}

void destroyStructBody(StructBody* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpStructBody(StructBody* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
