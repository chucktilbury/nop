/**
 * @file array_parameter.h
 *
 */
#ifndef _ARRAY_PARAMETER_H_
#define _ARRAY_PARAMETER_H_

#include "ast.h"

typedef enum {
    ARRAY_PARAMETER_OK,
    ARRAY_PARAMETER_ERROR,
} ArrayParameterType;

struct _array_parameter_ {
    Ast ast;
    ArrayParameterType type;
    ExpressionFactor* expression_factor;
    ArrayParameter* array_parameter;
};

ArrayParameter* createArrayParameter(ExpressionFactor*, ArrayParameter*);
void destroyArrayParameter(ArrayParameter*);

#ifdef ENABLE_DUMP
void dumpArrayParameter(ArrayParameter* ptr);
#endif

#endif
