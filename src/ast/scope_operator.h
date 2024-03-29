/**
 * @file scope_operator.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
AstResult pass1ScopeOperator(ScopeOperator*);
AstResult pass2ScopeOperator(ScopeOperator*);
AstResult pass3ScopeOperator(ScopeOperator*);
AstResult emitScopeOperator(ScopeOperator*);
AstResult destroyScopeOperator(ScopeOperator*);

#ifdef ENABLE_DUMP
AstResult dumpScopeOperator(ScopeOperator* ptr);
#endif

#endif
