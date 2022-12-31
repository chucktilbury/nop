/**
 * @file func_body_statement.h
 *
 */
#ifndef _FUNC_BODY_STATEMENT_H_
#define _FUNC_BODY_STATEMENT_H_

#include "ast.h"

typedef enum {
    FUNC_BODY_STATEMENT_OK,
    FUNC_BODY_STATEMENT_ERROR,
} FuncBodyStatementType;

struct _func_body_statement_ {
    Ast ast;
    FuncBodyStatementType type;
    DataDefinition* data_definition;
    CompoundName* compound_name;
    Initialzer* initialzer;
    IfStatement* if_statement;
    ForStatement* for_statement;
    WhileStatement* while_statement;
    SwitchStatement* switch_statement;
    DoStatement* do_statement;
    TryStatement* try_statement;
    FuncReference* func_reference;
    TraceStatement* trace_statement;
    ReturnStatement* return_statement;
    PrintStatement* print_statement;
    ExitStatement* exit_statement;
    RaiseStatement* raise_statement;
    TypeStatement* type_statement;
};

FuncBodyStatement* createFuncBodyStatement(DataDefinition*, CompoundName*, Initialzer*, IfStatement*, ForStatement*, WhileStatement*, SwitchStatement*, DoStatement*, TryStatement*, FuncReference*, TraceStatement*, ReturnStatement*, PrintStatement*, ExitStatement*, RaiseStatement*, TypeStatement*);
void destroyFuncBodyStatement(FuncBodyStatement*);

#ifdef ENABLE_DUMP
void dumpFuncBodyStatement(FuncBodyStatement* ptr);
#endif

#endif
