/**
 * @file type_name.h
 *
 * @brief Type name definition header for AST.
 *
 */
#ifndef _TYPE_NAME_H
#define _TYPE_NAME_H

#include "ast.h"

typedef struct {
    Ast ast;
    int type;
    Name* name;
} Type;

Type* createType(int type, Name* cname);
int getType(Type* ptr);
const char* getTypeName(Type* ptr);

#ifdef ENABLE_DUMP
void dumpType(Type* ptr);
#endif

#endif /* _TYPE_NAME_H */
