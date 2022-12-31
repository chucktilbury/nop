/**
 * @file func_reference.h
 *
 */
#ifndef _FUNC_REFERENCE_H_
#define _FUNC_REFERENCE_H_

#include "ast.h"

typedef enum {
    FUNC_REFERENCE_OK,
    FUNC_REFERENCE_ERROR,
} FuncReferenceType;

struct _func_reference_ {
    Ast ast;
    FuncReferenceType type;
    CompoundName* compound_name;
    ExpressionListInParens* expression_list_in_parens;
};

FuncReference* createFuncReference(CompoundName*, ExpressionListInParens*);
void destroyFuncReference(FuncReference*);

#ifdef ENABLE_DUMP
void dumpFuncReference(FuncReference* ptr);
#endif

#endif
