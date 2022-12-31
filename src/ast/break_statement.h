/**
 * @file break_statement.h
 *
 */
#ifndef _BREAK_STATEMENT_H_
#define _BREAK_STATEMENT_H_

#include "ast.h"

typedef enum {
    BREAK_STATEMENT_OK,
    BREAK_STATEMENT_ERROR,
} BreakStatementType;

struct _break_statement_ {
    Ast ast;
    BreakStatementType type;
};

BreakStatement* createBreakStatement();
void destroyBreakStatement(BreakStatement*);

#ifdef ENABLE_DUMP
void dumpBreakStatement(BreakStatement* ptr);
#endif

#endif
