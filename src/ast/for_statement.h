/**
 * @file for_statement.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
 */
#ifndef _FOR_STATEMENT_H_
#define _FOR_STATEMENT_H_

#include "ast.h"

typedef enum {
    FOR_STATEMENT_OK,
    FOR_STATEMENT_ERROR,
} ForStatementType;

struct _for_statement_ {
    Ast ast;
    ForStatementType type;
    CompoundName* compound_name;
    Expression* expression;
    LoopBody* loop_body;
    EmptyParensRule* empty_parens_rule;
};

ForStatement* createForStatement(CompoundName*, Expression*, LoopBody*, EmptyParensRule*);
AstResult pass1ForStatement(ForStatement*);
AstResult pass2ForStatement(ForStatement*);
AstResult pass3ForStatement(ForStatement*);
AstResult emitForStatement(ForStatement*);
AstResult destroyForStatement(ForStatement*);

#ifdef ENABLE_DUMP
AstResult dumpForStatement(ForStatement* ptr);
#endif

#endif
