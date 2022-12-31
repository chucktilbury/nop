/**
 * @file cast_specifier.h
 *
 */
#ifndef _CAST_SPECIFIER_H_
#define _CAST_SPECIFIER_H_

#include "ast.h"

typedef enum {
    CAST_SPECIFIER_OK,
    CAST_SPECIFIER_ERROR,
} CastSpecifierType;

struct _cast_specifier_ {
    Ast ast;
    CastSpecifierType type;
    TypeDefinition* type_definition;
};

CastSpecifier* createCastSpecifier(TypeDefinition*);
void destroyCastSpecifier(CastSpecifier*);

#ifdef ENABLE_DUMP
void dumpCastSpecifier(CastSpecifier* ptr);
#endif

#endif
