/**
 * @file loop_body.h
 *
 */
#ifndef _LOOP_BODY_H_
#define _LOOP_BODY_H_

#include "ast.h"

typedef enum {
    INVALID_LOOP_BODY,
} LoopBodyType;

typedef struct {
    Ast ast;
    LoopBodyType type;
} LoopBody;

LoopBody* createLoopBody();
void destroyLoopBody(LoopBody*);

#ifdef ENABLE_DUMP
void dumpLoopBody(LoopBody* ptr);
#endif

#endif
