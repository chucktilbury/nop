/**
 * @file func_body_statement.c
 *
 * @brief $$ = createFuncBodyStatement();
 *
 * NOTE: This file is automatically generated by the boilerplate script.
 */
#include "memory.h"
#include "ast.h"

/**
 * @brief FuncBodyStatement* createFuncBodyStatement(DataDefinition* data_definition,
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
		TypeStatement* type_statement,
		FuncBody* func_body)
 *
 */
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
		TypeStatement* type_statement,
		FuncBody* func_body) {

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
    ptr->func_body = func_body;


    return ptr;
}

/**
 * @brief Execute pass 1 analysis for FuncBodyStatement data structure.
 *
 */
AstResult pass1FuncBodyStatement(FuncBodyStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass1FuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 1 routines

        // traverse the data structure items
        if(ptr->data_definition != NULL) {
            AstResult res = pass1DataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass1CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = pass1Initialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->if_statement != NULL) {
            AstResult res = pass1IfStatement(ptr->if_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->for_statement != NULL) {
            AstResult res = pass1ForStatement(ptr->for_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->while_statement != NULL) {
            AstResult res = pass1WhileStatement(ptr->while_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->switch_statement != NULL) {
            AstResult res = pass1SwitchStatement(ptr->switch_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->do_statement != NULL) {
            AstResult res = pass1DoStatement(ptr->do_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->try_statement != NULL) {
            AstResult res = pass1TryStatement(ptr->try_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = pass1FuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->trace_statement != NULL) {
            AstResult res = pass1TraceStatement(ptr->trace_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->return_statement != NULL) {
            AstResult res = pass1ReturnStatement(ptr->return_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->print_statement != NULL) {
            AstResult res = pass1PrintStatement(ptr->print_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->exit_statement != NULL) {
            AstResult res = pass1ExitStatement(ptr->exit_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->raise_statement != NULL) {
            AstResult res = pass1RaiseStatement(ptr->raise_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->type_statement != NULL) {
            AstResult res = pass1TypeStatement(ptr->type_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = pass1FuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 2 analysis for FuncBodyStatement data structure.
 *
 */
AstResult pass2FuncBodyStatement(FuncBodyStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass2FuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 2 routines

        // traverse the data structure items
        if(ptr->data_definition != NULL) {
            AstResult res = pass2DataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass2CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = pass2Initialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->if_statement != NULL) {
            AstResult res = pass2IfStatement(ptr->if_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->for_statement != NULL) {
            AstResult res = pass2ForStatement(ptr->for_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->while_statement != NULL) {
            AstResult res = pass2WhileStatement(ptr->while_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->switch_statement != NULL) {
            AstResult res = pass2SwitchStatement(ptr->switch_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->do_statement != NULL) {
            AstResult res = pass2DoStatement(ptr->do_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->try_statement != NULL) {
            AstResult res = pass2TryStatement(ptr->try_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = pass2FuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->trace_statement != NULL) {
            AstResult res = pass2TraceStatement(ptr->trace_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->return_statement != NULL) {
            AstResult res = pass2ReturnStatement(ptr->return_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->print_statement != NULL) {
            AstResult res = pass2PrintStatement(ptr->print_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->exit_statement != NULL) {
            AstResult res = pass2ExitStatement(ptr->exit_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->raise_statement != NULL) {
            AstResult res = pass2RaiseStatement(ptr->raise_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->type_statement != NULL) {
            AstResult res = pass2TypeStatement(ptr->type_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = pass2FuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Execute pass 3 analysis for FuncBodyStatement data structure.
 *
 */
AstResult pass3FuncBodyStatement(FuncBodyStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: pass3FuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the pass 3 routines

        // traverse the data structure items
        if(ptr->data_definition != NULL) {
            AstResult res = pass3DataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = pass3CompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = pass3Initialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->if_statement != NULL) {
            AstResult res = pass3IfStatement(ptr->if_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->for_statement != NULL) {
            AstResult res = pass3ForStatement(ptr->for_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->while_statement != NULL) {
            AstResult res = pass3WhileStatement(ptr->while_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->switch_statement != NULL) {
            AstResult res = pass3SwitchStatement(ptr->switch_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->do_statement != NULL) {
            AstResult res = pass3DoStatement(ptr->do_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->try_statement != NULL) {
            AstResult res = pass3TryStatement(ptr->try_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = pass3FuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->trace_statement != NULL) {
            AstResult res = pass3TraceStatement(ptr->trace_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->return_statement != NULL) {
            AstResult res = pass3ReturnStatement(ptr->return_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->print_statement != NULL) {
            AstResult res = pass3PrintStatement(ptr->print_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->exit_statement != NULL) {
            AstResult res = pass3ExitStatement(ptr->exit_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->raise_statement != NULL) {
            AstResult res = pass3RaiseStatement(ptr->raise_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->type_statement != NULL) {
            AstResult res = pass3TypeStatement(ptr->type_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = pass3FuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Emit final output for FuncBodyStatement data structure.
 *
 */
AstResult emitFuncBodyStatement(FuncBodyStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: emitFuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // perform the emitter routines

        // traverse the data structure items
        if(ptr->data_definition != NULL) {
            AstResult res = emitDataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = emitCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = emitInitialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->if_statement != NULL) {
            AstResult res = emitIfStatement(ptr->if_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->for_statement != NULL) {
            AstResult res = emitForStatement(ptr->for_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->while_statement != NULL) {
            AstResult res = emitWhileStatement(ptr->while_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->switch_statement != NULL) {
            AstResult res = emitSwitchStatement(ptr->switch_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->do_statement != NULL) {
            AstResult res = emitDoStatement(ptr->do_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->try_statement != NULL) {
            AstResult res = emitTryStatement(ptr->try_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = emitFuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->trace_statement != NULL) {
            AstResult res = emitTraceStatement(ptr->trace_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->return_statement != NULL) {
            AstResult res = emitReturnStatement(ptr->return_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->print_statement != NULL) {
            AstResult res = emitPrintStatement(ptr->print_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->exit_statement != NULL) {
            AstResult res = emitExitStatement(ptr->exit_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->raise_statement != NULL) {
            AstResult res = emitRaiseStatement(ptr->raise_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->type_statement != NULL) {
            AstResult res = emitTypeStatement(ptr->type_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = emitFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}

/**
 * @brief Destroy a FuncBodyStatement data structure.
 *
 */
AstResult destroyFuncBodyStatement(FuncBodyStatement* ptr) {

#ifdef ENABLE_TRACE
    printf("parser: destroyFuncBodyStatement\\n");
#endif /* ENABLE_DUMP */

    if(ptr != NULL) {
        // destroy these data elements

        // traverse the data structure items
        if(ptr->data_definition != NULL) {
            AstResult res = destroyDataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = destroyCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = destroyInitialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->if_statement != NULL) {
            AstResult res = destroyIfStatement(ptr->if_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->for_statement != NULL) {
            AstResult res = destroyForStatement(ptr->for_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->while_statement != NULL) {
            AstResult res = destroyWhileStatement(ptr->while_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->switch_statement != NULL) {
            AstResult res = destroySwitchStatement(ptr->switch_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->do_statement != NULL) {
            AstResult res = destroyDoStatement(ptr->do_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->try_statement != NULL) {
            AstResult res = destroyTryStatement(ptr->try_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = destroyFuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->trace_statement != NULL) {
            AstResult res = destroyTraceStatement(ptr->trace_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->return_statement != NULL) {
            AstResult res = destroyReturnStatement(ptr->return_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->print_statement != NULL) {
            AstResult res = destroyPrintStatement(ptr->print_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->exit_statement != NULL) {
            AstResult res = destroyExitStatement(ptr->exit_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->raise_statement != NULL) {
            AstResult res = destroyRaiseStatement(ptr->raise_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->type_statement != NULL) {
            AstResult res = destroyTypeStatement(ptr->type_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = destroyFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

        _free(ptr);
    }

    return AST_RES_OK;
}

/**
 * @brief Dump FuncBodyStatement data type and progress the tree.
 *
 */
#ifdef ENABLE_DUMP
AstResult dumpFuncBodyStatement(FuncBodyStatement* ptr) {

    //(void)ptr;
    if(ptr != NULL) {
        dumpAst(&ptr->ast);
        // dump this item

        // traverse the data structure items
        if(ptr->data_definition != NULL) {
            AstResult res = dumpDataDefinition(ptr->data_definition);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->compound_name != NULL) {
            AstResult res = dumpCompoundName(ptr->compound_name);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->initialzer != NULL) {
            AstResult res = dumpInitialzer(ptr->initialzer);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->if_statement != NULL) {
            AstResult res = dumpIfStatement(ptr->if_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->for_statement != NULL) {
            AstResult res = dumpForStatement(ptr->for_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->while_statement != NULL) {
            AstResult res = dumpWhileStatement(ptr->while_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->switch_statement != NULL) {
            AstResult res = dumpSwitchStatement(ptr->switch_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->do_statement != NULL) {
            AstResult res = dumpDoStatement(ptr->do_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->try_statement != NULL) {
            AstResult res = dumpTryStatement(ptr->try_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_reference != NULL) {
            AstResult res = dumpFuncReference(ptr->func_reference);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->trace_statement != NULL) {
            AstResult res = dumpTraceStatement(ptr->trace_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->return_statement != NULL) {
            AstResult res = dumpReturnStatement(ptr->return_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->print_statement != NULL) {
            AstResult res = dumpPrintStatement(ptr->print_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->exit_statement != NULL) {
            AstResult res = dumpExitStatement(ptr->exit_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->raise_statement != NULL) {
            AstResult res = dumpRaiseStatement(ptr->raise_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->type_statement != NULL) {
            AstResult res = dumpTypeStatement(ptr->type_statement);
            if(res != AST_RES_OK)
                return res;
        }

        if(ptr->func_body != NULL) {
            AstResult res = dumpFuncBody(ptr->func_body);
            if(res != AST_RES_OK)
                return res;
        }

    }

    return AST_RES_OK;
}
#endif /* ENABLE_DUMP */
