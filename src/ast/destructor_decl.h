/**
 * @file destructor_decl.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
AstResult pass1DestructorDecl(DestructorDecl*);
AstResult pass2DestructorDecl(DestructorDecl*);
AstResult pass3DestructorDecl(DestructorDecl*);
AstResult emitDestructorDecl(DestructorDecl*);
AstResult destroyDestructorDecl(DestructorDecl*);

#ifdef ENABLE_DUMP
AstResult dumpDestructorDecl(DestructorDecl* ptr);
#endif

#endif
