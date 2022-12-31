/**
 * @file try_statement.h
 *
 */
#ifndef _TRY_STATEMENT_H_
#define _TRY_STATEMENT_H_

#include "ast.h"

typedef enum {
    TRY_STATEMENT_OK,
    TRY_STATEMENT_ERROR,
} TryStatementType;

struct _try_statement_ {
    Ast ast;
    TryStatementType type;
    FuncBodyStatementList* func_body_statement_list;
    ExceptClauseList* except_clause_list;
};

TryStatement* createTryStatement(FuncBodyStatementList*, ExceptClauseList*);
void destroyTryStatement(TryStatement*);

#ifdef ENABLE_DUMP
void dumpTryStatement(TryStatement* ptr);
#endif

#endif
