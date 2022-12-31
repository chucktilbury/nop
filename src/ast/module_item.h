/**
 * @file module_item.h
 *
 */
#ifndef _MODULE_ITEM_H_
#define _MODULE_ITEM_H_

#include "ast.h"

typedef enum {
    INVALID_MODULE_ITEM,
} ModuleItemType;

typedef struct {
    Ast ast;
    ModuleItemType type;
} ModuleItem;

ModuleItem* createModuleItem();
void destroyModuleItem(ModuleItem*);

#ifdef ENABLE_DUMP
void dumpModuleItem(ModuleItem* ptr);
#endif

#endif
