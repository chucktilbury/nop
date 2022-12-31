/**
 * @file else_clause_final.h
 *
 */
#ifndef _ELSE_CLAUSE_FINAL_H_
#define _ELSE_CLAUSE_FINAL_H_

#include "ast.h"

typedef enum {
    ELSE_CLAUSE_FINAL_OK,
    ELSE_CLAUSE_FINAL_ERROR,
} ElseClauseFinalType;

struct _else_clause_final_ {
    Ast ast;
    ElseClauseFinalType type;
    EmptyParensRule* empty_parens_rule;
    FuncBody* func_body;
};

ElseClauseFinal* createElseClauseFinal(EmptyParensRule*, FuncBody*);
void destroyElseClauseFinal(ElseClauseFinal*);

#ifdef ENABLE_DUMP
void dumpElseClauseFinal(ElseClauseFinal* ptr);
#endif

#endif
