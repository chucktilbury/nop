/**
 * @file symbol_declaration.h
 *
 */
#ifndef _SYMBOL_DECLARATION_H_
#define _SYMBOL_DECLARATION_H_

#include "ast.h"

typedef enum {
    INVALID_SYMBOL_DECLARATION,
} SymbolDeclarationType;

typedef struct {
    Ast ast;
    SymbolDeclarationType type;
} SymbolDeclaration;

SymbolDeclaration* createSymbolDeclaration();
void destroySymbolDeclaration(SymbolDeclaration*);

#ifdef ENABLE_DUMP
void dumpSymbolDeclaration(SymbolDeclaration* ptr);
#endif

#endif
