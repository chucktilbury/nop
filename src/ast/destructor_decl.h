/**
 * @file destructor_decl.h
 *
 */
#ifndef _DESTRUCTOR_DECL_H_
#define _DESTRUCTOR_DECL_H_

#include "ast.h"

typedef enum {
    DESTRUCTOR_DECL_OK,
    DESTRUCTOR_DECL_ERROR,
} DestructorDeclType;

struct _destructor_decl_ {
    Ast ast;
    DestructorDeclType type;
};

DestructorDecl* createDestructorDecl();
void destroyDestructorDecl(DestructorDecl*);

#ifdef ENABLE_DUMP
void dumpDestructorDecl(DestructorDecl* ptr);
#endif

#endif
