/**
 * @file class_name.h
 *
 */
#ifndef _CLASS_NAME_H_
#define _CLASS_NAME_H_

#include "ast.h"

typedef enum {
    INVALID_CLASS_NAME,
} ClassNameType;

typedef struct {
    Ast ast;
    ClassNameType type;
} ClassName;

ClassName* createClassName();
void destroyClassName(ClassName*);

#ifdef ENABLE_DUMP
void dumpClassName(ClassName* ptr);
#endif

#endif
