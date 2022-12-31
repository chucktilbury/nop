/**
 * @file cast_specifier.h
 *
 */
#ifndef _CAST_SPECIFIER_H_
#define _CAST_SPECIFIER_H_

#include "ast.h"

typedef enum {
    INVALID_CAST_SPECIFIER,
} CastSpecifierType;

typedef struct {
    Ast ast;
    CastSpecifierType type;
} CastSpecifier;

CastSpecifier* createCastSpecifier();
void destroyCastSpecifier(CastSpecifier*);

#ifdef ENABLE_DUMP
void dumpCastSpecifier(CastSpecifier* ptr);
#endif

#endif
