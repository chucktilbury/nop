/**
 * @file class_definition_item.h
 *
 */
#ifndef _CLASS_DEFINITION_ITEM_H_
#define _CLASS_DEFINITION_ITEM_H_

#include "ast.h"

typedef enum {
    CLASS_DEFINITION_ITEM_OK,
    CLASS_DEFINITION_ITEM_ERROR,
} ClassDefinitionItemType;

struct _class_definition_item_ {
    Ast ast;
    ClassDefinitionItemType type;
    SymbolDeclaration* symbol_declaration;
    MethodDeclaration* method_declaration;
    StructDeclaration* struct_declaration;
    ScopeOperator* scope_operator;
    ConstructorDecl* constructor_decl;
    DestructorDecl* destructor_decl;
};

ClassDefinitionItem* createClassDefinitionItem(SymbolDeclaration*, MethodDeclaration*, StructDeclaration*, ScopeOperator*, ConstructorDecl*, DestructorDecl*);
void destroyClassDefinitionItem(ClassDefinitionItem*);

#ifdef ENABLE_DUMP
void dumpClassDefinitionItem(ClassDefinitionItem* ptr);
#endif

#endif
