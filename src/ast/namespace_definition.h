/**
 * @file namespace_definition.h
 *
 */
#ifndef _NAMESPACE_DEFINITION_H_
#define _NAMESPACE_DEFINITION_H_

#include "ast.h"

typedef enum {
    NAMESPACE_DEFINITION_OK,
    NAMESPACE_DEFINITION_ERROR,
} NamespaceDefinitionType;

struct _namespace_definition_ {
    Ast ast;
    NamespaceDefinitionType type;
    const char* symbol;
    ModuleList* module_list;
};

NamespaceDefinition* createNamespaceDefinition(const char*, ModuleList*);
void destroyNamespaceDefinition(NamespaceDefinition*);

#ifdef ENABLE_DUMP
void dumpNamespaceDefinition(NamespaceDefinition* ptr);
#endif

#endif
