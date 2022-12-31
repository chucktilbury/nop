/**
 * @file type_definition.h
 *
 */
#ifndef _TYPE_DEFINITION_H_
#define _TYPE_DEFINITION_H_

#include "ast.h"

typedef enum {
    INVALID_TYPE_DEFINITION,
} TypeDefinitionType;

typedef struct {
    Ast ast;
    TypeDefinitionType type;
} TypeDefinition;

TypeDefinition* createTypeDefinition();
void destroyTypeDefinition(TypeDefinition*);

#ifdef ENABLE_DUMP
void dumpTypeDefinition(TypeDefinition* ptr);
#endif

#endif
