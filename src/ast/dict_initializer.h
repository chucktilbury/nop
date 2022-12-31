/**
 * @file dict_initializer.h
 *
 */
#ifndef _DICT_INITIALIZER_H_
#define _DICT_INITIALIZER_H_

#include "ast.h"

typedef enum {
    INVALID_DICT_INITIALIZER,
} DictInitializerType;

typedef struct {
    Ast ast;
    DictInitializerType type;
} DictInitializer;

DictInitializer* createDictInitializer();
void destroyDictInitializer(DictInitializer*);

#ifdef ENABLE_DUMP
void dumpDictInitializer(DictInitializer* ptr);
#endif

#endif
