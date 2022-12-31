/**
 * @file case_clause.c
 *
 * $$ = createCaseClause();
 */
#include "memory.h"
#include "ast.h"

CaseClause* createCaseClause(ConstantExpression* constant_expression,
		FuncBody* func_body) {

#ifdef ENABLE_TRACE
    printf("parser: createCaseClause\\n");
#endif /* ENABLE_DUMP */

    CaseClause* ptr = _alloc_ds(CaseClause);
    initAst(&ptr->ast, NULL, AST_CASE_CLAUSE);
    ptr->constant_expression = constant_expression;
    ptr->func_body = func_body;

    return ptr;
}

void destroyCaseClause(CaseClause* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpCaseClause(CaseClause* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
