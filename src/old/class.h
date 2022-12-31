/**
 * @file class.h
 *
 * @brief Class AST header.
 *
 */
#ifndef _CLASS_H
#define _CLASS_H

#include "ast.h"

typedef struct _class_ {
    Ast ast;
    PtrLst* elements;
    Name* parent;
    int scope;
} Class;

Class* createClass(const char* name, int scope, Name* parent);
void destroyClass(Class* ptr);
void addClass(Class* ptr, void* data);
void addParentClass(Class* ptr, void* data);

#ifdef ENABLE_DUMP
void dumpClass(Class* ptr);
#endif

#endif /* _CLASS_H */
