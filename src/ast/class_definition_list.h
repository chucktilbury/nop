/**
 * @file class_definition_list.h
 *
 */
#ifndef _CLASS_DEFINITION_LIST_H_
#define _CLASS_DEFINITION_LIST_H_

#include "ast.h"

typedef enum {
    CLASS_DEFINITION_LIST_OK,
    CLASS_DEFINITION_LIST_ERROR,
} ClassDefinitionListType;

struct _class_definition_list_ {
    Ast ast;
    ClassDefinitionListType type;
    ClassDefinitionItem* class_definition_item;
    ClassDefinitionList* class_definition_list;
};

ClassDefinitionList* createClassDefinitionList(ClassDefinitionItem*, ClassDefinitionList*);
void destroyClassDefinitionList(ClassDefinitionList*);

#ifdef ENABLE_DUMP
void dumpClassDefinitionList(ClassDefinitionList* ptr);
#endif

#endif
