/**
 * @file except_clause_final.h
 *
 */
#ifndef _EXCEPT_CLAUSE_FINAL_H_
#define _EXCEPT_CLAUSE_FINAL_H_

#include "ast.h"

typedef enum {
    EXCEPT_CLAUSE_FINAL_OK,
    EXCEPT_CLAUSE_FINAL_ERROR,
} ExceptClauseFinalType;

struct _except_clause_final_ {
    Ast ast;
    ExceptClauseFinalType type;
    EmptyParensRule* empty_parens_rule;
    FuncBody* func_body;
};

ExceptClauseFinal* createExceptClauseFinal(EmptyParensRule*, FuncBody*);
void destroyExceptClauseFinal(ExceptClauseFinal*);

#ifdef ENABLE_DUMP
void dumpExceptClauseFinal(ExceptClauseFinal* ptr);
#endif

#endif
