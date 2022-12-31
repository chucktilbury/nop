/**
 * @file parameter_decl_element.h
 *
 */
#ifndef _PARAMETER_DECL_ELEMENT_H_
#define _PARAMETER_DECL_ELEMENT_H_

#include "ast.h"

typedef enum {
    PARAMETER_DECL_ELEMENT_OK,
    PARAMETER_DECL_ELEMENT_ERROR,
} ParameterDeclElementType;

struct _parameter_decl_element_ {
    Ast ast;
    ParameterDeclElementType type;
    TypeDefinition* type_definition;
};

ParameterDeclElement* createParameterDeclElement(TypeDefinition*);
void destroyParameterDeclElement(ParameterDeclElement*);

#ifdef ENABLE_DUMP
void dumpParameterDeclElement(ParameterDeclElement* ptr);
#endif

#endif
