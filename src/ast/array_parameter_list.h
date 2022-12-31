/**
 * @file array_parameter_list.h
 *
 */
#ifndef _ARRAY_PARAMETER_LIST_H_
#define _ARRAY_PARAMETER_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_ARRAY_PARAMETER_LIST,
} ArrayParameterListType;

typedef struct {
    Ast ast;
    ArrayParameterListType type;
} ArrayParameterList;

ArrayParameterList* createArrayParameterList();
void destroyArrayParameterList(ArrayParameterList*);

#ifdef ENABLE_DUMP
void dumpArrayParameterList(ArrayParameterList* ptr);
#endif

#endif
