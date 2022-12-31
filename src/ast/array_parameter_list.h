/**
 * @file array_parameter_list.h
 *
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
void destroyArrayParameterList(ArrayParameterList*);

#ifdef ENABLE_DUMP
void dumpArrayParameterList(ArrayParameterList* ptr);
#endif

#endif
