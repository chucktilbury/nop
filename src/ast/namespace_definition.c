/**
 * @file namespace_definition.c
 *
 * $$ = createNamespaceDefinition();
 */
#include "memory.h"
#include "ast.h"

NamespaceDefinition* createNamespaceDefinition() {

#ifdef ENABLE_TRACE
    printf("parser: createNamespaceDefinition\\n");
#endif /* ENABLE_DUMP */

    NamespaceDefinition* ptr = _alloc_ds(NamespaceDefinition);
    initAst(&ptr->ast, NULL, AST_NAMESPACE_DEFINITION);

    return ptr;
}

void destroyNamespaceDefinition(NamespaceDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpNamespaceDefinition(NamespaceDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
