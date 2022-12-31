/**
 * @file struct_declaration.h
 *
 */
#ifndef _STRUCT_DECLARATION_H_
#define _STRUCT_DECLARATION_H_

#include "ast.h"

typedef enum {
    INVALID_STRUCT_DECLARATION,
} StructDeclarationType;

typedef struct {
    Ast ast;
    StructDeclarationType type;
} StructDeclaration;

StructDeclaration* createStructDeclaration();
void destroyStructDeclaration(StructDeclaration*);

#ifdef ENABLE_DUMP
void dumpStructDeclaration(StructDeclaration* ptr);
#endif

#endif
