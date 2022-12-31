/**
 * @file array_initializer.h
 *
 */
#ifndef _ARRAY_INITIALIZER_H_
#define _ARRAY_INITIALIZER_H_

#include "ast.h"

typedef enum {
    ARRAY_INITIALIZER_OK,
    ARRAY_INITIALIZER_ERROR,
} ArrayInitializerType;

struct _array_initializer_ {
    Ast ast;
    ArrayInitializerType type;
    ExpressionList* expression_list;
};

ArrayInitializer* createArrayInitializer(ExpressionList*);
void destroyArrayInitializer(ArrayInitializer*);

#ifdef ENABLE_DUMP
void dumpArrayInitializer(ArrayInitializer* ptr);
#endif

#endif
