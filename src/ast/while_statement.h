/**
 * @file while_statement.h
 *
 */
#ifndef _WHILE_STATEMENT_H_
#define _WHILE_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_WHILE_STATEMENT,
} WhileStatementType;

typedef struct {
    Ast ast;
    WhileStatementType type;
} WhileStatement;

WhileStatement* createWhileStatement();
void destroyWhileStatement(WhileStatement*);

#ifdef ENABLE_DUMP
void dumpWhileStatement(WhileStatement* ptr);
#endif

#endif
