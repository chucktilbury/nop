/**
 * @file do_statement.h
 *
 */
#ifndef _DO_STATEMENT_H_
#define _DO_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_DO_STATEMENT,
} DoStatementType;

typedef struct {
    Ast ast;
    DoStatementType type;
} DoStatement;

DoStatement* createDoStatement();
void destroyDoStatement(DoStatement*);

#ifdef ENABLE_DUMP
void dumpDoStatement(DoStatement* ptr);
#endif

#endif
