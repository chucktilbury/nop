/**
 * @file func_decl_parameter_list.h
 *
 */
#ifndef _FUNC_DECL_PARAMETER_LIST_H_
#define _FUNC_DECL_PARAMETER_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_DECL_PARAMETER_LIST,
} FuncDeclParameterListType;

typedef struct {
    Ast ast;
    FuncDeclParameterListType type;
} FuncDeclParameterList;

FuncDeclParameterList* createFuncDeclParameterList();
void destroyFuncDeclParameterList(FuncDeclParameterList*);

#ifdef ENABLE_DUMP
void dumpFuncDeclParameterList(FuncDeclParameterList* ptr);
#endif

#endif
