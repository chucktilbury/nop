/**
 * @file type_definition.h
 *
 */
#ifndef _TYPE_DEFINITION_H_
#define _TYPE_DEFINITION_H_

#include "ast.h"

typedef enum {
    TYPE_DEFINITION_OK,
    TYPE_DEFINITION_ERROR,
} TypeDefinitionType;

struct _type_definition_ {
    Ast ast;
    TypeDefinitionType type;
    int number;
    int string;
    int boolean;
    int nothing;
    int list;
    int dict;
    CompoundName* compound_name;
};

TypeDefinition* createTypeDefinition(int, int, int, int, int, int, CompoundName*);
void destroyTypeDefinition(TypeDefinition*);

#ifdef ENABLE_DUMP
void dumpTypeDefinition(TypeDefinition* ptr);
#endif

#endif
