/**
 * @file except_clause_final.h
 *
 */
#ifndef _EXCEPT_CLAUSE_FINAL_H_
#define _EXCEPT_CLAUSE_FINAL_H_

#include "ast.h"

typedef enum {
    INVALID_EXCEPT_CLAUSE_FINAL,
} ExceptClauseFinalType;

typedef struct {
    Ast ast;
    ExceptClauseFinalType type;
} ExceptClauseFinal;

ExceptClauseFinal* createExceptClauseFinal();
void destroyExceptClauseFinal(ExceptClauseFinal*);

#ifdef ENABLE_DUMP
void dumpExceptClauseFinal(ExceptClauseFinal* ptr);
#endif

#endif
