/**
 * @file symbol.h
 *
 * @brief Header for the symbol declaration AST entry. This can have a single
 * child, which must be an expression or nothing.
 *
 */
#ifndef _SYMBOL_H
#define _SYMBOL_H

#include "ast.h"

typedef struct {
    Ast ast;
    bool is_const;
    bool is_init;
    Type* type;
    int scope;
    // todo: expression
} Symbol;

Symbol* createSymbol(const char* name, Type* type, int scope, bool con);
const char* getSymbolName(Symbol* sym);
int getSymbolScope(Symbol* ptr);
Type* getSymbolType(Symbol* ptr);
void setSymbolExpr(Symbol* sym, void* expr);

#ifdef ENABLE_DUMP
void dumpSymbol(Symbol* sym);
#endif

#endif /* _SYMBOL_H */
