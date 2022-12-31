/**
 * @file namespace.h
 *
 * @brief Namespace AST data structures and function prototypes.
 *
 */
#ifndef _NAMESPACE_H
#define _NAMESPACE_H

#include "ast.h"

typedef struct {
    Ast ast;
    PtrLst* elements;
} Namespace;

Namespace* createNamespace(const char* name);
void destroyNamespace(Namespace* ptr);
void addNamespace(Namespace* ptr, void* data);

#ifdef ENABLE_DUMP
void dumpNamespace(Namespace* ptr);
#endif

#endif /* _NAMESPACE_H */
