/**
 * @file loop_body_statement.c
 *
 * $$ = createLoopBodyStatement();
 */
#include "memory.h"
#include "ast.h"

LoopBodyStatement* createLoopBodyStatement(FuncBodyStatement* func_body_statement,
		BreakStatement* break_statement,
		ContinueStatement* continue_statement,
		YieldStatement* yield_statement) {

#ifdef ENABLE_TRACE
    printf("parser: createLoopBodyStatement\\n");
#endif /* ENABLE_DUMP */

    LoopBodyStatement* ptr = _alloc_ds(LoopBodyStatement);
    initAst(&ptr->ast, NULL, AST_LOOP_BODY_STATEMENT);
    ptr->func_body_statement = func_body_statement;
    ptr->break_statement = break_statement;
    ptr->continue_statement = continue_statement;
    ptr->yield_statement = yield_statement;

    return ptr;
}

void destroyLoopBodyStatement(LoopBodyStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpLoopBodyStatement(LoopBodyStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
