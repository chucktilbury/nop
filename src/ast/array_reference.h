/**
 * @file array_reference.h
 *
 */
#ifndef _ARRAY_REFERENCE_H_
#define _ARRAY_REFERENCE_H_

#include "ast.h"

typedef enum {
    INVALID_ARRAY_REFERENCE,
} ArrayReferenceType;

typedef struct {
    Ast ast;
    ArrayReferenceType type;
} ArrayReference;

ArrayReference* createArrayReference();
void destroyArrayReference(ArrayReference*);

#ifdef ENABLE_DUMP
void dumpArrayReference(ArrayReference* ptr);
#endif

#endif
