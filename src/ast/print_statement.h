/**
 * @file print_statement.h
 *
 */
#ifndef _PRINT_STATEMENT_H_
#define _PRINT_STATEMENT_H_

#include "ast.h"

typedef enum {
    PRINT_STATEMENT_OK,
    PRINT_STATEMENT_ERROR,
} PrintStatementType;

struct _print_statement_ {
    Ast ast;
    PrintStatementType type;
    int print;
    ExpressionInParensRule* expression_in_parens_rule;
};

PrintStatement* createPrintStatement(int, ExpressionInParensRule*);
void destroyPrintStatement(PrintStatement*);

#ifdef ENABLE_DUMP
void dumpPrintStatement(PrintStatement* ptr);
#endif

#endif
