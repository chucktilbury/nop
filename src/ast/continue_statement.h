/**
 * @file continue_statement.h
 *
 */
#ifndef _CONTINUE_STATEMENT_H_
#define _CONTINUE_STATEMENT_H_

#include "ast.h"

typedef enum {
    CONTINUE_STATEMENT_OK,
    CONTINUE_STATEMENT_ERROR,
} ContinueStatementType;

struct _continue_statement_ {
    Ast ast;
    ContinueStatementType type;
};

ContinueStatement* createContinueStatement();
void destroyContinueStatement(ContinueStatement*);

#ifdef ENABLE_DUMP
void dumpContinueStatement(ContinueStatement* ptr);
#endif

#endif
