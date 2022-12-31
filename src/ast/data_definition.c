/**
 * @file data_definition.c
 *
 * $$ = createDataDefinition();
 */
#include "memory.h"
#include "ast.h"

DataDefinition* createDataDefinition() {

#ifdef ENABLE_TRACE
    printf("parser: createDataDefinition\\n");
#endif /* ENABLE_DUMP */

    DataDefinition* ptr = _alloc_ds(DataDefinition);
    initAst(&ptr->ast, NULL, AST_DATA_DEFINITION);

    return ptr;
}

void destroyDataDefinition(DataDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDataDefinition(DataDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
