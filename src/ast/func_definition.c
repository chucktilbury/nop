/**
 * @file func_definition.c
 *
 * $$ = createFuncDefinition();
 */
#include "memory.h"
#include "ast.h"

FuncDefinition* createFuncDefinition() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDefinition\\n");
#endif /* ENABLE_DUMP */

    FuncDefinition* ptr = _alloc_ds(FuncDefinition);
    initAst(&ptr->ast, NULL, AST_FUNC_DEFINITION);

    return ptr;
}

void destroyFuncDefinition(FuncDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncDefinition(FuncDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
