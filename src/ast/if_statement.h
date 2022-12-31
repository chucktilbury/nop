/**
 * @file if_statement.h
 *
 */
#ifndef _IF_STATEMENT_H_
#define _IF_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_IF_STATEMENT,
} IfStatementType;

typedef struct {
    Ast ast;
    IfStatementType type;
} IfStatement;

IfStatement* createIfStatement();
void destroyIfStatement(IfStatement*);

#ifdef ENABLE_DUMP
void dumpIfStatement(IfStatement* ptr);
#endif

#endif
