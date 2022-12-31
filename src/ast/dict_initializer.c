/**
 * @file dict_initializer.c
 *
 * $$ = createDictInitializer();
 */
#include "memory.h"
#include "ast.h"

DictInitializer* createDictInitializer() {

#ifdef ENABLE_TRACE
    printf("parser: createDictInitializer\\n");
#endif /* ENABLE_DUMP */

    DictInitializer* ptr = _alloc_ds(DictInitializer);
    initAst(&ptr->ast, NULL, AST_DICT_INITIALIZER);

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
