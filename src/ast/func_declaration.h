/**
 * @file func_declaration.h
 *
 */
#ifndef _FUNC_DECLARATION_H_
#define _FUNC_DECLARATION_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_DECLARATION,
} FuncDeclarationType;

typedef struct {
    Ast ast;
    FuncDeclarationType type;
} FuncDeclaration;

FuncDeclaration* createFuncDeclaration();
void destroyFuncDeclaration(FuncDeclaration*);

#ifdef ENABLE_DUMP
void dumpFuncDeclaration(FuncDeclaration* ptr);
#endif

#endif
