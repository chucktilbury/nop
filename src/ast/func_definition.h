/**
 * @file func_definition.h
 *
 */
#ifndef _FUNC_DEFINITION_H_
#define _FUNC_DEFINITION_H_

#include "ast.h"

typedef enum {
    INVALID_FUNC_DEFINITION,
} FuncDefinitionType;

typedef struct {
    Ast ast;
    FuncDefinitionType type;
} FuncDefinition;

FuncDefinition* createFuncDefinition();
void destroyFuncDefinition(FuncDefinition*);

#ifdef ENABLE_DUMP
void dumpFuncDefinition(FuncDefinition* ptr);
#endif

#endif
