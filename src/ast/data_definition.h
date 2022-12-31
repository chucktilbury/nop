/**
 * @file data_definition.h
 *
 */
#ifndef _DATA_DEFINITION_H_
#define _DATA_DEFINITION_H_

#include "ast.h"

typedef enum {
    INVALID_DATA_DEFINITION,
} DataDefinitionType;

typedef struct {
    Ast ast;
    DataDefinitionType type;
} DataDefinition;

DataDefinition* createDataDefinition();
void destroyDataDefinition(DataDefinition*);

#ifdef ENABLE_DUMP
void dumpDataDefinition(DataDefinition* ptr);
#endif

#endif
