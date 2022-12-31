/**
 * @file initialzer.h
 *
 */
#ifndef _INITIALZER_H_
#define _INITIALZER_H_

#include "ast.h"

typedef enum {
    INITIALZER_OK,
    INITIALZER_ERROR,
} InitialzerType;

struct _initialzer_ {
    Ast ast;
    InitialzerType type;
    Expression* expression;
    ArrayInitializer* array_initializer;
    DictInitializer* dict_initializer;
};

Initialzer* createInitialzer(Expression*, ArrayInitializer*, DictInitializer*);
void destroyInitialzer(Initialzer*);

#ifdef ENABLE_DUMP
void dumpInitialzer(Initialzer* ptr);
#endif

#endif
