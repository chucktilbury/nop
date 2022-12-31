/**
 * @file raise_statement.h
 *
 */
#ifndef _RAISE_STATEMENT_H_
#define _RAISE_STATEMENT_H_

#include "ast.h"

typedef enum {
    RAISE_STATEMENT_OK,
    RAISE_STATEMENT_ERROR,
} RaiseStatementType;

struct _raise_statement_ {
    Ast ast;
    RaiseStatementType type;
    Expression* expression;
};

RaiseStatement* createRaiseStatement(Expression*);
void destroyRaiseStatement(RaiseStatement*);

#ifdef ENABLE_DUMP
void dumpRaiseStatement(RaiseStatement* ptr);
#endif

#endif
