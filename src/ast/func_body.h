/**
 * @file func_body.h
 *
 */
#ifndef _FUNC_BODY_H_
#define _FUNC_BODY_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_BODY,
} FuncBodyType;

typedef struct {
    Ast ast;
    FuncBodyType type;
} FuncBody;

FuncBody* createFuncBody();
void destroyFuncBody(FuncBody*);

#ifdef ENABLE_DUMP
void dumpFuncBody(FuncBody* ptr);
#endif

#endif
