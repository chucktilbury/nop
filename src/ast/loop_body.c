/**
 * @file loop_body.c
 *
 * $$ = createLoopBody();
 */
#include "memory.h"
#include "ast.h"

LoopBody* createLoopBody(LoopBodyStatementList* loop_body_statement_list) {

#ifdef ENABLE_TRACE
    printf("parser: createLoopBody\\n");
#endif /* ENABLE_DUMP */

    LoopBody* ptr = _alloc_ds(LoopBody);
    initAst(&ptr->ast, NULL, AST_LOOP_BODY);
    ptr->loop_body_statement_list = loop_body_statement_list;

    return ptr;
}

void destroyLoopBody(LoopBody* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpLoopBody(LoopBody* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
