/**
 * @file dict_init_list.c
 *
 * $$ = createDictInitList();
 */
#include "memory.h"
#include "ast.h"

DictInitList* createDictInitList() {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitList\\n");
#endif /* ENABLE_DUMP */

    DictInitList* ptr = _alloc_ds(DictInitList);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_LIST);

    return ptr;
}

void destroyDictInitList(DictInitList* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDictInitList(DictInitList* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
