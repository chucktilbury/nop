/**
 * @file parameter_decl_list.h
 *
 */
#ifndef _PARAMETER_DECL_LIST_H_
#define _PARAMETER_DECL_LIST_H_

#include "ast.h"

typedef enum {
    PARAMETER_DECL_LIST_OK,
    PARAMETER_DECL_LIST_ERROR,
} ParameterDeclListType;

struct _parameter_decl_list_ {
    Ast ast;
    ParameterDeclListType type;
    ParameterDeclElement* parameter_decl_element;
    ParameterDeclList* parameter_decl_list;
};

ParameterDeclList* createParameterDeclList(ParameterDeclElement*, ParameterDeclList*);
void destroyParameterDeclList(ParameterDeclList*);

#ifdef ENABLE_DUMP
void dumpParameterDeclList(ParameterDeclList* ptr);
#endif

#endif
