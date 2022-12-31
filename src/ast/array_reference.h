/**
 * @file array_reference.h
 *
 */
#ifndef _ARRAY_REFERENCE_H_
#define _ARRAY_REFERENCE_H_

#include "ast.h"

typedef enum {
    ARRAY_REFERENCE_OK,
    ARRAY_REFERENCE_ERROR,
} ArrayReferenceType;

struct _array_reference_ {
    Ast ast;
    ArrayReferenceType type;
    CompoundName* compound_name;
    ArrayParameterList* array_parameter_list;
};

ArrayReference* createArrayReference(CompoundName*, ArrayParameterList*);
void destroyArrayReference(ArrayReference*);

#ifdef ENABLE_DUMP
void dumpArrayReference(ArrayReference* ptr);
#endif

#endif
