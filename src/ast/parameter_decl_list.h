/**
 * @file parameter_decl_list.h
 *
 */
#ifndef _PARAMETER_DECL_LIST_H_
#define _PARAMETER_DECL_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_PARAMETER_DECL_LIST,
} ParameterDeclListType;

typedef struct {
    Ast ast;
    ParameterDeclListType type;
} ParameterDeclList;

ParameterDeclList* createParameterDeclList();
void destroyParameterDeclList(ParameterDeclList*);

#ifdef ENABLE_DUMP
void dumpParameterDeclList(ParameterDeclList* ptr);
#endif

#endif
