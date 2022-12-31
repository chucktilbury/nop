/**
 * @file func_definition.h
 *
 */
#ifndef _FUNC_DEFINITION_H_
#define _FUNC_DEFINITION_H_

#include "ast.h"

typedef enum {
    FUNC_DEFINITION_OK,
    FUNC_DEFINITION_ERROR,
} FuncDefinitionType;

struct _func_definition_ {
    Ast ast;
    FuncDefinitionType type;
    TypeDefinition* type_definition;
    CompoundName* compound_name;
    FuncDefParameterList* func_def_parameter_list;
    FuncBody* func_body;
};

FuncDefinition* createFuncDefinition(TypeDefinition*, CompoundName*, FuncDefParameterList*, FuncBody*);
void destroyFuncDefinition(FuncDefinition*);

#ifdef ENABLE_DUMP
void dumpFuncDefinition(FuncDefinition* ptr);
#endif

#endif
