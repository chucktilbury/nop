/**
 * @file constructor_decl.h
 *
 */
#ifndef _CONSTRUCTOR_DECL_H_
#define _CONSTRUCTOR_DECL_H_

#include "ast.h"

typedef enum {
    CONSTRUCTOR_DECL_OK,
    CONSTRUCTOR_DECL_ERROR,
} ConstructorDeclType;

struct _constructor_decl_ {
    Ast ast;
    ConstructorDeclType type;
    FuncDeclParameterList* func_decl_parameter_list;
};

ConstructorDecl* createConstructorDecl(FuncDeclParameterList*);
void destroyConstructorDecl(ConstructorDecl*);

#ifdef ENABLE_DUMP
void dumpConstructorDecl(ConstructorDecl* ptr);
#endif

#endif
