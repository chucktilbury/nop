/**
 * @file array_parameter_list.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
 */
#ifndef _ARRAY_PARAMETER_LIST_H_
#define _ARRAY_PARAMETER_LIST_H_

#include "ast.h"

typedef enum {
    ARRAY_PARAMETER_LIST_OK,
    ARRAY_PARAMETER_LIST_ERROR,
} ArrayParameterListType;

struct _array_parameter_list_ {
    Ast ast;
    ArrayParameterListType type;
    ArrayParameter* array_parameter;
    ArrayParameterList* array_parameter_list;
};

ArrayParameterList* createArrayParameterList(ArrayParameter*, ArrayParameterList*);
AstResult pass1ArrayParameterList(ArrayParameterList*);
AstResult pass2ArrayParameterList(ArrayParameterList*);
AstResult pass3ArrayParameterList(ArrayParameterList*);
AstResult emitArrayParameterList(ArrayParameterList*);
AstResult destroyArrayParameterList(ArrayParameterList*);

#ifdef ENABLE_DUMP
AstResult dumpArrayParameterList(ArrayParameterList* ptr);
#endif

#endif
