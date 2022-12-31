/**
 * @file initialzer.c
 *
 * $$ = createInitialzer();
 */
#include "memory.h"
#include "ast.h"

Initialzer* createInitialzer(Expression* expression,
		ArrayInitializer* array_initializer,
		DictInitializer* dict_initializer) {

#ifdef ENABLE_TRACE
    printf("parser: createInitialzer\\n");
#endif /* ENABLE_DUMP */

    Initialzer* ptr = _alloc_ds(Initialzer);
    initAst(&ptr->ast, NULL, AST_INITIALZER);
    ptr->expression = expression;
    ptr->array_initializer = array_initializer;
    ptr->dict_initializer = dict_initializer;

    return ptr;
}

void destroyInitialzer(Initialzer* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpInitialzer(Initialzer* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
