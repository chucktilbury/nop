/**
 * @file func_decl_parameter_list.h
 *
 */
#ifndef _FUNC_DECL_PARAMETER_LIST_H_
#define _FUNC_DECL_PARAMETER_LIST_H_

#include "ast.h"

typedef enum {
    FUNC_DECL_PARAMETER_LIST_OK,
    FUNC_DECL_PARAMETER_LIST_ERROR,
} FuncDeclParameterListType;

struct _func_decl_parameter_list_ {
    Ast ast;
    FuncDeclParameterListType type;
    ParameterDeclList* parameter_decl_list;
    EmptyParensRule* empty_parens_rule;
};

FuncDeclParameterList* createFuncDeclParameterList(ParameterDeclList*, EmptyParensRule*);
void destroyFuncDeclParameterList(FuncDeclParameterList*);

#ifdef ENABLE_DUMP
void dumpFuncDeclParameterList(FuncDeclParameterList* ptr);
#endif

#endif
