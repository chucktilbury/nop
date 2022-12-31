/**
 * @file compound_name.h
 *
 */
#ifndef _COMPOUND_NAME_H_
#define _COMPOUND_NAME_H_

#include "ast.h"

typedef enum {
    INVALID_COMPOUND_NAME,
} CompoundNameType;

typedef struct {
    Ast ast;
    CompoundNameType type;
} CompoundName;

CompoundName* createCompoundName();
void destroyCompoundName(CompoundName*);

#ifdef ENABLE_DUMP
void dumpCompoundName(CompoundName* ptr);
#endif

#endif
