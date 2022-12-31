/**
 * @file module_list.c
 *
 * $$ = createModuleList();
 */
#include "memory.h"
#include "ast.h"

ModuleList* createModuleList() {

#ifdef ENABLE_TRACE
    printf("parser: createModuleList\\n");
#endif /* ENABLE_DUMP */

    ModuleList* ptr = _alloc_ds(ModuleList);
    initAst(&ptr->ast, NULL, AST_MODULE_LIST);

    return ptr;
}

void destroyModuleList(ModuleList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpModuleList(ModuleList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
