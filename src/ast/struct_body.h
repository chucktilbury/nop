/**
 * @file struct_body.h
 *
 */
#ifndef _STRUCT_BODY_H_
#define _STRUCT_BODY_H_

#include "ast.h"

typedef enum {
    INVALID_STRUCT_BODY,
} StructBodyType;

typedef struct {
    Ast ast;
    StructBodyType type;
} StructBody;

StructBody* createStructBody();
void destroyStructBody(StructBody*);

#ifdef ENABLE_DUMP
void dumpStructBody(StructBody* ptr);
#endif

#endif
