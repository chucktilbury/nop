/**
 * @file array_parameter.h
 *
 */
#ifndef _ARRAY_PARAMETER_H_
#define _ARRAY_PARAMETER_H_

#include "ast.h"

typedef enum {
    INVALID_ARRAY_PARAMETER,
} ArrayParameterType;

typedef struct {
    Ast ast;
    ArrayParameterType type;
} ArrayParameter;

ArrayParameter* createArrayParameter();
void destroyArrayParameter(ArrayParameter*);

#ifdef ENABLE_DUMP
void dumpArrayParameter(ArrayParameter* ptr);
#endif

#endif
