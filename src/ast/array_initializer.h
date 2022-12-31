/**
 * @file array_initializer.h
 *
 */
#ifndef _ARRAY_INITIALIZER_H_
#define _ARRAY_INITIALIZER_H_

#include "ast.h"

typedef enum {
    INVALID_ARRAY_INITIALIZER,
} ArrayInitializerType;

typedef struct {
    Ast ast;
    ArrayInitializerType type;
} ArrayInitializer;

ArrayInitializer* createArrayInitializer();
void destroyArrayInitializer(ArrayInitializer*);

#ifdef ENABLE_DUMP
void dumpArrayInitializer(ArrayInitializer* ptr);
#endif

#endif
