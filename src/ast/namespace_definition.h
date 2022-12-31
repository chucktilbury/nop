/**
 * @file namespace_definition.h
 *
 */
#ifndef _NAMESPACE_DEFINITION_H_
#define _NAMESPACE_DEFINITION_H_

#include "ast.h"

typedef enum {
    INVALID_NAMESPACE_DEFINITION,
} NamespaceDefinitionType;

typedef struct {
    Ast ast;
    NamespaceDefinitionType type;
} NamespaceDefinition;

NamespaceDefinition* createNamespaceDefinition();
void destroyNamespaceDefinition(NamespaceDefinition*);

#ifdef ENABLE_DUMP
void dumpNamespaceDefinition(NamespaceDefinition* ptr);
#endif

#endif
