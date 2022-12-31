/**
 * @file for_statement.h
 *
 */
#ifndef _FOR_STATEMENT_H_
#define _FOR_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_FOR_STATEMENT,
} ForStatementType;

typedef struct {
    Ast ast;
    ForStatementType type;
} ForStatement;

ForStatement* createForStatement();
void destroyForStatement(ForStatement*);

#ifdef ENABLE_DUMP
void dumpForStatement(ForStatement* ptr);
#endif

#endif
