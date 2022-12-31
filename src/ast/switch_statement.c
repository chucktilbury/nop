/**
 * @file switch_statement.c
 *
 * $$ = createSwitchStatement();
 */
#include "memory.h"
#include "ast.h"

SwitchStatement* createSwitchStatement(CompoundNameInParensRule* compound_name_in_parens_rule,
		CaseClauseList* case_clause_list) {

#ifdef ENABLE_TRACE
    printf("parser: createSwitchStatement\\n");
#endif /* ENABLE_DUMP */

    SwitchStatement* ptr = _alloc_ds(SwitchStatement);
    initAst(&ptr->ast, NULL, AST_SWITCH_STATEMENT);
    ptr->compound_name_in_parens_rule = compound_name_in_parens_rule;
    ptr->case_clause_list = case_clause_list;

    return ptr;
}

void destroySwitchStatement(SwitchStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpSwitchStatement(SwitchStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
