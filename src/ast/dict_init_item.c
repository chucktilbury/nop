/**
 * @file dict_init_item.c
 *
 * $$ = createDictInitItem();
 */
#include "memory.h"
#include "ast.h"

DictInitItem* createDictInitItem() {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitItem\\n");
#endif /* ENABLE_DUMP */

    DictInitItem* ptr = _alloc_ds(DictInitItem);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_ITEM);

    return ptr;
}

void destroyDictInitItem(DictInitItem* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDictInitItem(DictInitItem* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
