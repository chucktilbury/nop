/**
 * @file struct_body.h
 *
 */
#ifndef _STRUCT_BODY_H_
#define _STRUCT_BODY_H_

#include "ast.h"

typedef enum {
    STRUCT_BODY_OK,
    STRUCT_BODY_ERROR,
} StructBodyType;

struct _struct_body_ {
    Ast ast;
    StructBodyType type;
    SymbolDeclaration* symbol_declaration;
    StructBody* struct_body;
};

StructBody* createStructBody(SymbolDeclaration*, StructBody*);
void destroyStructBody(StructBody*);

#ifdef ENABLE_DUMP
void dumpStructBody(StructBody* ptr);
#endif

#endif
