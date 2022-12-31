/**
 * @file dict_initializer.h
 *
 */
#ifndef _DICT_INITIALIZER_H_
#define _DICT_INITIALIZER_H_

#include "ast.h"

typedef enum {
    DICT_INITIALIZER_OK,
    DICT_INITIALIZER_ERROR,
} DictInitializerType;

struct _dict_initializer_ {
    Ast ast;
    DictInitializerType type;
    DictInitList* dict_init_list;
};

DictInitializer* createDictInitializer(DictInitList*);
void destroyDictInitializer(DictInitializer*);

#ifdef ENABLE_DUMP
void dumpDictInitializer(DictInitializer* ptr);
#endif

#endif
