/**
 * @file module_item.h
 *
 */
#ifndef _MODULE_ITEM_H_
#define _MODULE_ITEM_H_

#include "ast.h"

typedef enum {
    MODULE_ITEM_OK,
    MODULE_ITEM_ERROR,
} ModuleItemType;

struct _module_item_ {
    Ast ast;
    ModuleItemType type;
    ClassDefinition* class_definition;
    DataDefinition* data_definition;
    FuncDefinition* func_definition;
    NamespaceDefinition* namespace_definition;
    StructDeclaration* struct_declaration;
    ScopeOperator* scope_operator;
    const char* strg;
};

ModuleItem* createModuleItem(ClassDefinition*, DataDefinition*, FuncDefinition*, NamespaceDefinition*, StructDeclaration*, ScopeOperator*, const char*);
void destroyModuleItem(ModuleItem*);

#ifdef ENABLE_DUMP
void dumpModuleItem(ModuleItem* ptr);
#endif

#endif
