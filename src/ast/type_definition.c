/**
 * @file type_definition.c
 *
 * $$ = createTypeDefinition();
 */
#include "memory.h"
#include "ast.h"

TypeDefinition* createTypeDefinition() {

#ifdef ENABLE_TRACE
    printf("parser: createTypeDefinition\\n");
#endif /* ENABLE_DUMP */

    TypeDefinition* ptr = _alloc_ds(TypeDefinition);
    initAst(&ptr->ast, NULL, AST_TYPE_DEFINITION);

    return ptr;
}

void destroyTypeDefinition(TypeDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpTypeDefinition(TypeDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
