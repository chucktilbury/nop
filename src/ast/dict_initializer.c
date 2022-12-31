/**
 * @file dict_initializer.c
 *
 * $$ = createDictInitializer();
 */
#include "memory.h"
#include "ast.h"

DictInitializer* createDictInitializer(DictInitList* dict_init_list) {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitializer\\n");
#endif /* ENABLE_DUMP */

    DictInitializer* ptr = _alloc_ds(DictInitializer);
    initAst(&ptr->ast, NULL, AST_DICT_INITIALIZER);
    ptr->dict_init_list = dict_init_list;

    return ptr;
}

void destroyDictInitializer(DictInitializer* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDictInitializer(DictInitializer* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
