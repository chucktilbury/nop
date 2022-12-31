/**
 * @file else_clause_final.h
 *
 */
#ifndef _ELSE_CLAUSE_FINAL_H_
#define _ELSE_CLAUSE_FINAL_H_

#include "ast.h"

typedef enum {
    INVALID_ELSE_CLAUSE_FINAL,
} ElseClauseFinalType;

typedef struct {
    Ast ast;
    ElseClauseFinalType type;
} ElseClauseFinal;

ElseClauseFinal* createElseClauseFinal();
void destroyElseClauseFinal(ElseClauseFinal*);

#ifdef ENABLE_DUMP
void dumpElseClauseFinal(ElseClauseFinal* ptr);
#endif

#endif
