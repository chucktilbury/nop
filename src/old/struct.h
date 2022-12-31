/**
 * @file struct.h
 *
 * @brief Struct AST header
 *
 */
#ifndef _STRUCT_H
#define _STRUCT_H

#include "ast.h"

typedef struct {
    Ast ast;
    PtrLst* elements;
    int scope;
} Struct;

Struct* createStruct(const char* name, int scope);
void destroyStruct(Struct* ptr);
void addStruct(Struct* ptr, void* data);

#ifdef ENABLE_DUMP
void dumpStruct(Struct* ptr);
#endif

#endif /* _STRUCT_H */
