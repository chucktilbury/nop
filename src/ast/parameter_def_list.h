/**
 * @file parameter_def_list.h
 *
 */
#ifndef _PARAMETER_DEF_LIST_H_
#define _PARAMETER_DEF_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_PARAMETER_DEF_LIST,
} ParameterDefListType;

typedef struct {
    Ast ast;
    ParameterDefListType type;
} ParameterDefList;

ParameterDefList* createParameterDefList();
void destroyParameterDefList(ParameterDefList*);

#ifdef ENABLE_DUMP
void dumpParameterDefList(ParameterDefList* ptr);
#endif

#endif
