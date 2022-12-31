/**
 * @file type_statement.h
 *
 */
#ifndef _TYPE_STATEMENT_H_
#define _TYPE_STATEMENT_H_

#include "ast.h"

typedef enum {
    TYPE_STATEMENT_OK,
    TYPE_STATEMENT_ERROR,
} TypeStatementType;

struct _type_statement_ {
    Ast ast;
    TypeStatementType type;
    Expression* expression;
};

TypeStatement* createTypeStatement(int, Expression*);
void destroyTypeStatement(TypeStatement*);

#ifdef ENABLE_DUMP
void dumpTypeStatement(TypeStatement* ptr);
#endif

#endif
