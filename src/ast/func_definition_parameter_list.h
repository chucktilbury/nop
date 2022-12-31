/**
 * @file func_definition_parameter_list.h
 *
 */
#ifndef _FUNC_DEFINITION_PARAMETER_LIST_H_
#define _FUNC_DEFINITION_PARAMETER_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_DEFINITION_PARAMETER_LIST,
} FuncDefinitionParameterListType;

typedef struct {
    Ast ast;
    FuncDefinitionParameterListType type;
} FuncDefinitionParameterList;

FuncDefinitionParameterList* createFuncDefinitionParameterList();
void destroyFuncDefinitionParameterList(FuncDefinitionParameterList*);

#ifdef ENABLE_DUMP
void dumpFuncDefinitionParameterList(FuncDefinitionParameterList* ptr);
#endif

#endif
