/**
 * @file symbol_declaration.h
 *
 */
#ifndef _SYMBOL_DECLARATION_H_
#define _SYMBOL_DECLARATION_H_

#include "ast.h"

typedef enum {
    SYMBOL_DECLARATION_OK,
    SYMBOL_DECLARATION_ERROR,
} SymbolDeclarationType;

struct _symbol_declaration_ {
    Ast ast;
    SymbolDeclarationType type;
    SymbolType* symbol_type;
};

SymbolDeclaration* createSymbolDeclaration(SymbolType*);
void destroySymbolDeclaration(SymbolDeclaration*);

#ifdef ENABLE_DUMP
void dumpSymbolDeclaration(SymbolDeclaration* ptr);
#endif

#endif
