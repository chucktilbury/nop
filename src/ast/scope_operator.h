/**
 * @file scope_operator.h
 *
 */
#ifndef _SCOPE_OPERATOR_H_
#define _SCOPE_OPERATOR_H_

#include "ast.h"

typedef enum {
    SCOPE_OPERATOR_OK,
    SCOPE_OPERATOR_ERROR,
} ScopeOperatorType;

struct _scope_operator_ {
    Ast ast;
    ScopeOperatorType type;
    int private;
    int public;
    int protected;
};

ScopeOperator* createScopeOperator(int, int, int);
void destroyScopeOperator(ScopeOperator*);

#ifdef ENABLE_DUMP
void dumpScopeOperator(ScopeOperator* ptr);
#endif

#endif
