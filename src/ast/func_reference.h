/**
 * @file func_reference.h
 *
 */
#ifndef _FUNC_REFERENCE_H_
#define _FUNC_REFERENCE_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_REFERENCE,
} FuncReferenceType;

typedef struct {
    Ast ast;
    FuncReferenceType type;
} FuncReference;

FuncReference* createFuncReference();
void destroyFuncReference(FuncReference*);

#ifdef ENABLE_DUMP
void dumpFuncReference(FuncReference* ptr);
#endif

#endif
