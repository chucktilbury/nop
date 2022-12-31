/**
 * @file parameter_def_list.h
 *
 */
#ifndef _PARAMETER_DEF_LIST_H_
#define _PARAMETER_DEF_LIST_H_

#include "ast.h"

typedef enum {
    PARAMETER_DEF_LIST_OK,
    PARAMETER_DEF_LIST_ERROR,
} ParameterDefListType;

struct _parameter_def_list_ {
    Ast ast;
    ParameterDefListType type;
    SymbolDeclaration* symbol_declaration;
    ParameterDefList* parameter_def_list;
};

ParameterDefList* createParameterDefList(SymbolDeclaration*, ParameterDefList*);
void destroyParameterDefList(ParameterDefList*);

#ifdef ENABLE_DUMP
void dumpParameterDefList(ParameterDefList* ptr);
#endif

#endif
