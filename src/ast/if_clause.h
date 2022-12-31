/**
 * @file if_clause.h
 *
 */
#ifndef _IF_CLAUSE_H_
#define _IF_CLAUSE_H_

#include "ast.h"

typedef enum {
    INVALID_IF_CLAUSE,
} IfClauseType;

typedef struct {
    Ast ast;
    IfClauseType type;
} IfClause;

IfClause* createIfClause();
void destroyIfClause(IfClause*);

#ifdef ENABLE_DUMP
void dumpIfClause(IfClause* ptr);
#endif

#endif
