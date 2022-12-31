/**
 * @file func_def_parameter_list.h
 *
 */
#ifndef _FUNC_DEF_PARAMETER_LIST_H_
#define _FUNC_DEF_PARAMETER_LIST_H_

#include "ast.h"

typedef enum {
    FUNC_DEF_PARAMETER_LIST_OK,
    FUNC_DEF_PARAMETER_LIST_ERROR,
} FuncDefParameterListType;

struct _func_def_parameter_list_ {
    Ast ast;
    FuncDefParameterListType type;
    ParameterDefList* parameter_def_list;
};

FuncDefParameterList* createFuncDefParameterList(ParameterDefList*);
void destroyFuncDefParameterList(FuncDefParameterList*);

#ifdef ENABLE_DUMP
void dumpFuncDefParameterList(FuncDefParameterList* ptr);
#endif

#endif
