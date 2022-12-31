/**
 * @file dict_init_element.c
 *
 * $$ = createDictInitElement();
 */
#include "memory.h"
#include "ast.h"

DictInitElement* createDictInitElement() {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitElement\\n");
#endif /* ENABLE_DUMP */

    DictInitElement* ptr = _alloc_ds(DictInitElement);
    initAst(&ptr->ast, NULL, AST_DICT_INIT_ELEMENT);

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
