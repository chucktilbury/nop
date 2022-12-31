/**
 * @file dict_init_element.c
 *
 * $$ = createDictInitElement();
 */
#include "memory.h"
#include "ast.h"

DictInitElement* createDictInitElement(const char* strg,
		DictInitItem* dict_init_item,
		CompoundName* compound_name) {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitElement\\n");
#endif /* ENABLE_DUMP */

    DictInitElement* ptr = _alloc_ds(DictInitElement);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_ELEMENT);
    ptr->strg = strg;
    ptr->dict_init_item = dict_init_item;
    ptr->compound_name = compound_name;

    return ptr;
}

void destroyDictInitElement(DictInitElement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpDictInitElement(DictInitElement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
