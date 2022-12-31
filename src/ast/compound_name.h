/**
 * @file compound_name.h
 *
 */
#ifndef _COMPOUND_NAME_H_
#define _COMPOUND_NAME_H_

#include "ast.h"

typedef enum {
    COMPOUND_NAME_OK,
    COMPOUND_NAME_ERROR,
} CompoundNameType;

struct _compound_name_ {
    Ast ast;
    CompoundNameType type;
    const char* symbol;
    CompoundName* compound_name;
};

CompoundName* createCompoundName(const char*, CompoundName*);
void destroyCompoundName(CompoundName*);

#ifdef ENABLE_DUMP
void dumpCompoundName(CompoundName* ptr);
#endif

#endif
