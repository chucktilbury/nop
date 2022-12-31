/**
 * @file symbol_type.h
 *
 */
#ifndef _SYMBOL_TYPE_H_
#define _SYMBOL_TYPE_H_

#include "ast.h"

typedef enum {
    SYMBOL_TYPE_OK,
    SYMBOL_TYPE_ERROR,
} SymbolTypeType;

struct _symbol_type_ {
    Ast ast;
    SymbolTypeType type;
    TypeDefinition* type_definition;
    const char* symbol;
};

SymbolType* createSymbolType(TypeDefinition*, const char*);
void destroySymbolType(SymbolType*);

#ifdef ENABLE_DUMP
void dumpSymbolType(SymbolType* ptr);
#endif

#endif
