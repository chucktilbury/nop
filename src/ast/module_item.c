/**
 * @file module_item.c
 *
 * $$ = createModuleItem();
 */
#include "memory.h"
#include "ast.h"

ModuleItem* createModuleItem() {

#ifdef ENABLE_TRACE
    printf("parser: createModuleItem\\n");
#endif /* ENABLE_DUMP */

    ModuleItem* ptr = _alloc_ds(ModuleItem);
    initAst(&ptr->ast, NULL, AST_MODULE_ITEM);

    return ptr;
}

void destroyModuleItem(ModuleItem* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpModuleItem(ModuleItem* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
