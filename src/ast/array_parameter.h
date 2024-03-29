/**
 * @file array_parameter.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
AstResult pass1ArrayParameter(ArrayParameter*);
AstResult pass2ArrayParameter(ArrayParameter*);
AstResult pass3ArrayParameter(ArrayParameter*);
AstResult emitArrayParameter(ArrayParameter*);
AstResult destroyArrayParameter(ArrayParameter*);

#ifdef ENABLE_DUMP
AstResult dumpArrayParameter(ArrayParameter* ptr);
#endif

#endif
