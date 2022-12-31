/**
 * @file module.c
 *
 * $$ = createModule();
 */
#include "memory.h"
#include "ast.h"

Module* createModule(ModuleList* module_list) {

#ifdef ENABLE_TRACE
    printf("parser: createModule\\n");
#endif /* ENABLE_DUMP */

    Module* ptr = _alloc_ds(Module);
    initAst(&ptr->ast, NULL, AST_MODULE);
    ptr->module_list = module_list;

    return ptr;
}

void destroyModule(Module* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpModule(Module* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
