/**
 * @file exit_statement.h
 *
 */
#ifndef _EXIT_STATEMENT_H_
#define _EXIT_STATEMENT_H_

#include "ast.h"

typedef enum {
    EXIT_STATEMENT_OK,
    EXIT_STATEMENT_ERROR,
} ExitStatementType;

struct _exit_statement_ {
    Ast ast;
    ExitStatementType type;
    Expression* expression;
};

ExitStatement* createExitStatement(Expression*);
void destroyExitStatement(ExitStatement*);

#ifdef ENABLE_DUMP
void dumpExitStatement(ExitStatement* ptr);
#endif

#endif
