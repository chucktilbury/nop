/**
 * @file if_statement.c
 *
 * $$ = createIfStatement();
 */
#include "memory.h"
#include "ast.h"

IfStatement* createIfStatement(IfClause* if_clause,
		ElseClauseList* else_clause_list) {

#ifdef ENABLE_TRACE
    printf("parser: createIfStatement\\n");
#endif /* ENABLE_DUMP */

    IfStatement* ptr = _alloc_ds(IfStatement);
    initAst(&ptr->ast, NULL, AST_IF_STATEMENT);
    ptr->if_clause = if_clause;
    ptr->else_clause_list = else_clause_list;

    return ptr;
}

void destroyIfStatement(IfStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpIfStatement(IfStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
