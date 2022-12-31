/**
 * @file func_body_statement.c
 *
 * $$ = createFuncBodyStatement();
 */
#include "memory.h"
#include "ast.h"

FuncBodyStatement* createFuncBodyStatement(DataDefinition* data_definition,
		CompoundName* compound_name,
		Initialzer* initialzer,
		IfStatement* if_statement,
		ForStatement* for_statement,
		WhileStatement* while_statement,
		SwitchStatement* switch_statement,
		DoStatement* do_statement,
		TryStatement* try_statement,
		FuncReference* func_reference,
		TraceStatement* trace_statement,
		ReturnStatement* return_statement,
		PrintStatement* print_statement,
		ExitStatement* exit_statement,
		RaiseStatement* raise_statement,
		TypeStatement* type_statement) {

#ifdef ENABLE_TRACE
    printf("parser: createFuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    FuncBodyStatement* ptr = _alloc_ds(FuncBodyStatement);
    initAst(&ptr->ast, NULL, AST_FUNC_BODY_STATEMENT);
    ptr->data_definition = data_definition;
    ptr->compound_name = compound_name;
    ptr->initialzer = initialzer;
    ptr->if_statement = if_statement;
    ptr->for_statement = for_statement;
    ptr->while_statement = while_statement;
    ptr->switch_statement = switch_statement;
    ptr->do_statement = do_statement;
    ptr->try_statement = try_statement;
    ptr->func_reference = func_reference;
    ptr->trace_statement = trace_statement;
    ptr->return_statement = return_statement;
    ptr->print_statement = print_statement;
    ptr->exit_statement = exit_statement;
    ptr->raise_statement = raise_statement;
    ptr->type_statement = type_statement;

    return ptr;
}

void destroyFuncBodyStatement(FuncBodyStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpFuncBodyStatement(FuncBodyStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
