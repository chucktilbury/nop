/**
 * @file data_definition.h
 *
 */
#ifndef _DATA_DEFINITION_H_
#define _DATA_DEFINITION_H_

#include "ast.h"

typedef enum {
    DATA_DEFINITION_OK,
    DATA_DEFINITION_ERROR,
} DataDefinitionType;

struct _data_definition_ {
    Ast ast;
    DataDefinitionType type;
    SymbolDeclaration* symbol_declaration;
    Initialzer* initialzer;
};

DataDefinition* createDataDefinition(SymbolDeclaration*, Initialzer*);
void destroyDataDefinition(DataDefinition*);

#ifdef ENABLE_DUMP
void dumpDataDefinition(DataDefinition* ptr);
#endif

#endif
