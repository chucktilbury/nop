/**
 * @file func_declaration.c
 *
 * $$ = createFuncDeclaration();
 */
#include "memory.h"
#include "ast.h"

FuncDeclaration* createFuncDeclaration() {

#ifdef ENABLE_TRACE
    printf("parser: createFuncDeclaration\\n");
#endif /* ENABLE_DUMP */

    FuncDeclaration* ptr = _alloc_ds(FuncDeclaration);
    initAst(&ptr->ast, NULL, AST_FUNC_DECLARATION);

    return ptr;
}

void destroyFuncDeclaration(FuncDeclaration* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncDeclaration(FuncDeclaration* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
