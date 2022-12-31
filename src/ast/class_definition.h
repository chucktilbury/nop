/**
 * @file class_definition.h
 *
 */
#ifndef _CLASS_DEFINITION_H_
#define _CLASS_DEFINITION_H_

#include "ast.h"

typedef enum {
    CLASS_DEFINITION_OK,
    CLASS_DEFINITION_ERROR,
} ClassDefinitionType;

struct _class_definition_ {
    Ast ast;
    ClassDefinitionType type;
    ClassDefinitionList* class_definition_list;
    ClassName* class_name;
};

ClassDefinition* createClassDefinition(ClassDefinitionList*, ClassName*);
void destroyClassDefinition(ClassDefinition*);

#ifdef ENABLE_DUMP
void dumpClassDefinition(ClassDefinition* ptr);
#endif

#endif
