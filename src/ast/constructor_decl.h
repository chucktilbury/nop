/**
 * @file constructor_decl.h
 *
 */
#ifndef _CONSTRUCTOR_DECL_H_
#define _CONSTRUCTOR_DECL_H_

#include "ast.h"

typedef enum {
    INVALID_CONSTRUCTOR_DECL,
} ConstructorDeclType;

typedef struct {
    Ast ast;
    ConstructorDeclType type;
} ConstructorDecl;

ConstructorDecl* createConstructorDecl();
void destroyConstructorDecl(ConstructorDecl*);

#ifdef ENABLE_DUMP
void dumpConstructorDecl(ConstructorDecl* ptr);
#endif

#endif
