/**
 * @file dict_init_item.c
 *
 * $$ = createDictInitItem();
 */
#include "memory.h"
#include "ast.h"

DictInitItem* createDictInitItem(Expression* expression,
		DictInitializer* dict_initializer,
		ArrayInitializer* array_initializer) {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitItem\\n");
#endif /* ENABLE_DUMP */

    DictInitItem* ptr = _alloc_ds(DictInitItem);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_ITEM);
    ptr->expression = expression;
    ptr->dict_initializer = dict_initializer;
    ptr->array_initializer = array_initializer;

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
