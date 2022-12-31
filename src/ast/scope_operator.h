/**
 * @file scope_operator.h
 *
 */
#ifndef _SCOPE_OPERATOR_H_
#define _SCOPE_OPERATOR_H_

#include "ast.h"

typedef enum {
    INVALID_SCOPE_OPERATOR,
} ScopeOperatorType;

typedef struct {
    Ast ast;
    ScopeOperatorType type;
} ScopeOperator;

ScopeOperator* createScopeOperator();
void destroyScopeOperator(ScopeOperator*);

#ifdef ENABLE_DUMP
void dumpScopeOperator(ScopeOperator* ptr);
#endif

#endif
