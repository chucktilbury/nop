/**
 * @file initialzer.h
 *
 */
#ifndef _INITIALZER_H_
#define _INITIALZER_H_

#include "ast.h"

typedef enum {
    INVALID_INITIALZER,
} InitialzerType;

typedef struct {
    Ast ast;
    InitialzerType type;
} Initialzer;

Initialzer* createInitialzer();
void destroyInitialzer(Initialzer*);

#ifdef ENABLE_DUMP
void dumpInitialzer(Initialzer* ptr);
#endif

#endif
