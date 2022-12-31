/**
 * @file class_definition.h
 *
 */
#ifndef _CLASS_DEFINITION_H_
#define _CLASS_DEFINITION_H_

#include "ast.h"

typedef enum {
    INVALID_CLASS_DEFINITION,
} ClassDefinitionType;

typedef struct {
    Ast ast;
    ClassDefinitionType type;
} ClassDefinition;

ClassDefinition* createClassDefinition();
void destroyClassDefinition(ClassDefinition*);

#ifdef ENABLE_DUMP
void dumpClassDefinition(ClassDefinition* ptr);
#endif

#endif
