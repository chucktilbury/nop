/**
 * @file method_declaration.h
 *
 */
#ifndef _METHOD_DECLARATION_H_
#define _METHOD_DECLARATION_H_

#include "ast.h"

typedef enum {
    METHOD_DECLARATION_OK,
    METHOD_DECLARATION_ERROR,
} MethodDeclarationType;

struct _method_declaration_ {
    Ast ast;
    MethodDeclarationType type;
    TypeDefinition* type_definition;
    const char* symbol;
    FuncDeclParameterList* func_decl_parameter_list;
};

MethodDeclaration* createMethodDeclaration(TypeDefinition*, const char*, FuncDeclParameterList*);
void destroyMethodDeclaration(MethodDeclaration*);

#ifdef ENABLE_DUMP
void dumpMethodDeclaration(MethodDeclaration* ptr);
#endif

#endif
