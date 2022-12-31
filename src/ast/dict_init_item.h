/**
 * @file dict_init_item.h
 *
 */
#ifndef _DICT_INIT_ITEM_H_
#define _DICT_INIT_ITEM_H_

#include "ast.h"

typedef enum {
    DICT_INIT_ITEM_OK,
    DICT_INIT_ITEM_ERROR,
} DictInitItemType;

struct _dict_init_item_ {
    Ast ast;
    DictInitItemType type;
    Expression* expression;
    DictInitializer* dict_initializer;
    ArrayInitializer* array_initializer;
};

DictInitItem* createDictInitItem(Expression*, DictInitializer*, ArrayInitializer*);
void destroyDictInitItem(DictInitItem*);

#ifdef ENABLE_DUMP
void dumpDictInitItem(DictInitItem* ptr);
#endif

#endif
