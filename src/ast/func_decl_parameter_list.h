/**
 * @file func_decl_parameter_list.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
AstResult pass1FuncDeclParameterList(FuncDeclParameterList*);
AstResult pass2FuncDeclParameterList(FuncDeclParameterList*);
AstResult pass3FuncDeclParameterList(FuncDeclParameterList*);
AstResult emitFuncDeclParameterList(FuncDeclParameterList*);
AstResult destroyFuncDeclParameterList(FuncDeclParameterList*);

#ifdef ENABLE_DUMP
AstResult dumpFuncDeclParameterList(FuncDeclParameterList* ptr);
#endif

#endif
