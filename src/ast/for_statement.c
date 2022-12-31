/**
 * @file for_statement.c
 *
 * $$ = createForStatement();
 */
#include "memory.h"
#include "ast.h"

ForStatement* createForStatement(CompoundName* compound_name,
		Expression* expression,
		LoopBody* loop_body,
		EmptyParensRule* empty_parens_rule) {

#ifdef ENABLE_TRACE
    printf("parser: createForStatement\\n");
#endif /* ENABLE_DUMP */

    ForStatement* ptr = _alloc_ds(ForStatement);
    initAst(&ptr->ast, NULL, AST_FOR_STATEMENT);
    ptr->compound_name = compound_name;
    ptr->expression = expression;
    ptr->loop_body = loop_body;
    ptr->empty_parens_rule = empty_parens_rule;

    return ptr;
}

void destroyForStatement(ForStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpForStatement(ForStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
