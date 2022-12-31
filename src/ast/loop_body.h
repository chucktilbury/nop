/**
 * @file loop_body.h
 *
 */
#ifndef _LOOP_BODY_H_
#define _LOOP_BODY_H_

#include "ast.h"

typedef enum {
    LOOP_BODY_OK,
    LOOP_BODY_ERROR,
} LoopBodyType;

struct _loop_body_ {
    Ast ast;
    LoopBodyType type;
    LoopBodyStatementList* loop_body_statement_list;
};

LoopBody* createLoopBody(LoopBodyStatementList*);
void destroyLoopBody(LoopBody*);

#ifdef ENABLE_DUMP
void dumpLoopBody(LoopBody* ptr);
#endif

#endif
