/**
 * @file struct_declaration.h
 *
 */
#ifndef _STRUCT_DECLARATION_H_
#define _STRUCT_DECLARATION_H_

#include "ast.h"

typedef enum {
    STRUCT_DECLARATION_OK,
    STRUCT_DECLARATION_ERROR,
} StructDeclarationType;

struct _struct_declaration_ {
    Ast ast;
    StructDeclarationType type;
    const char* symbol;
    StructBody* struct_body;
};

StructDeclaration* createStructDeclaration(const char*, StructBody*);
void destroyStructDeclaration(StructDeclaration*);

#ifdef ENABLE_DUMP
void dumpStructDeclaration(StructDeclaration* ptr);
#endif

#endif
