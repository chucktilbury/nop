/**
 * @file class_name.h
 *
 */
#ifndef _CLASS_NAME_H_
#define _CLASS_NAME_H_

#include "ast.h"

typedef enum {
    CLASS_NAME_OK,
    CLASS_NAME_ERROR,
} ClassNameType;

struct _class_name_ {
    Ast ast;
    ClassNameType type;
    const char* symbol;
    ClassNameParent* class_name_parent;
};

ClassName* createClassName(const char*, ClassNameParent*);
void destroyClassName(ClassName*);

#ifdef ENABLE_DUMP
void dumpClassName(ClassName* ptr);
#endif

#endif
