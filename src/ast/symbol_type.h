/**
 * @file symbol_type.h
 *
 */
#ifndef _SYMBOL_TYPE_H_
#define _SYMBOL_TYPE_H_

#include "ast.h"

typedef enum {
    INVALID_SYMBOL_TYPE,
} SymbolTypeType;

typedef struct {
    Ast ast;
    SymbolTypeType type;
} SymbolType;

SymbolType* createSymbolType();
void destroySymbolType(SymbolType*);

#ifdef ENABLE_DUMP
void dumpSymbolType(SymbolType* ptr);
#endif

#endif
