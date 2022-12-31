/**
 * @file class_definition_item.h
 *
 */
#ifndef _CLASS_DEFINITION_ITEM_H_
#define _CLASS_DEFINITION_ITEM_H_

#include "ast.h"

typedef enum {
    INVALID_CLASS_DEFINITION_ITEM,
} ClassDefinitionItemType;

typedef struct {
    Ast ast;
    ClassDefinitionItemType type;
} ClassDefinitionItem;

ClassDefinitionItem* createClassDefinitionItem();
void destroyClassDefinitionItem(ClassDefinitionItem*);

#ifdef ENABLE_DUMP
void dumpClassDefinitionItem(ClassDefinitionItem* ptr);
#endif

#endif
