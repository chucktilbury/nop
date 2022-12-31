/**
 * @file method_declaration.h
 *
 */
#ifndef _METHOD_DECLARATION_H_
#define _METHOD_DECLARATION_H_

#include "ast.h"

typedef enum {
    INVALID_METHOD_DECLARATION,
} MethodDeclarationType;

typedef struct {
    Ast ast;
    MethodDeclarationType type;
} MethodDeclaration;

MethodDeclaration* createMethodDeclaration();
void destroyMethodDeclaration(MethodDeclaration*);

#ifdef ENABLE_DUMP
void dumpMethodDeclaration(MethodDeclaration* ptr);
#endif

#endif
