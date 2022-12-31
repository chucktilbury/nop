/**
 * @file class_name_parent.h
 *
 */
#ifndef _CLASS_NAME_PARENT_H_
#define _CLASS_NAME_PARENT_H_

#include "ast.h"

typedef enum {
    INVALID_CLASS_NAME_PARENT,
} ClassNameParentType;

typedef struct {
    Ast ast;
    ClassNameParentType type;
} ClassNameParent;

ClassNameParent* createClassNameParent();
void destroyClassNameParent(ClassNameParent*);

#ifdef ENABLE_DUMP
void dumpClassNameParent(ClassNameParent* ptr);
#endif

#endif
