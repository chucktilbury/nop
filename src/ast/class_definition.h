/**
 * @file class_definition.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
AstResult pass1ClassDefinition(ClassDefinition*);
AstResult pass2ClassDefinition(ClassDefinition*);
AstResult pass3ClassDefinition(ClassDefinition*);
AstResult emitClassDefinition(ClassDefinition*);
AstResult destroyClassDefinition(ClassDefinition*);

#ifdef ENABLE_DUMP
AstResult dumpClassDefinition(ClassDefinition* ptr);
#endif

#endif
