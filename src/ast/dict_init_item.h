/**
 * @file dict_init_item.h
 *
 */
#ifndef _DICT_INIT_ITEM_H_
#define _DICT_INIT_ITEM_H_

#include "ast.h"

typedef enum {
    INVALID_DICT_INIT_ITEM,
} DictInitItemType;

typedef struct {
    Ast ast;
    DictInitItemType type;
} DictInitItem;

DictInitItem* createDictInitItem();
void destroyDictInitItem(DictInitItem*);

#ifdef ENABLE_DUMP
void dumpDictInitItem(DictInitItem* ptr);
#endif

#endif
