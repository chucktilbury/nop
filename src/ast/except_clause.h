/**
 * @file except_clause.h
 *
 */
#ifndef _EXCEPT_CLAUSE_H_
#define _EXCEPT_CLAUSE_H_

#include "ast.h"

typedef enum {
    INVALID_EXCEPT_CLAUSE,
} ExceptClauseType;

typedef struct {
    Ast ast;
    ExceptClauseType type;
} ExceptClause;

ExceptClause* createExceptClause();
void destroyExceptClause(ExceptClause*);

#ifdef ENABLE_DUMP
void dumpExceptClause(ExceptClause* ptr);
#endif

#endif
