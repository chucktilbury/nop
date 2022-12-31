/**
 * @file parameter_decl_element.h
 *
 */
#ifndef _PARAMETER_DECL_ELEMENT_H_
#define _PARAMETER_DECL_ELEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_PARAMETER_DECL_ELEMENT,
} ParameterDeclElementType;

typedef struct {
    Ast ast;
    ParameterDeclElementType type;
} ParameterDeclElement;

ParameterDeclElement* createParameterDeclElement();
void destroyParameterDeclElement(ParameterDeclElement*);

#ifdef ENABLE_DUMP
void dumpParameterDeclElement(ParameterDeclElement* ptr);
#endif

#endif
