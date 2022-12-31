/**
 * @file destructor_decl.h
 *
 */
#ifndef _DESTRUCTOR_DECL_H_
#define _DESTRUCTOR_DECL_H_

#include "ast.h"

typedef enum {
    INVALID_DESTRUCTOR_DECL,
} DestructorDeclType;

typedef struct {
    Ast ast;
    DestructorDeclType type;
} DestructorDecl;

DestructorDecl* createDestructorDecl();
void destroyDestructorDecl(DestructorDecl*);

#ifdef ENABLE_DUMP
void dumpDestructorDecl(DestructorDecl* ptr);
#endif

#endif
