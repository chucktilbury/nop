/**
 * @file class_definition_list.h
 *
 */
#ifndef _CLASS_DEFINITION_LIST_H_
#define _CLASS_DEFINITION_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_CLASS_DEFINITION_LIST,
} ClassDefinitionListType;

typedef struct {
    Ast ast;
    ClassDefinitionListType type;
} ClassDefinitionList;

ClassDefinitionList* createClassDefinitionList();
void destroyClassDefinitionList(ClassDefinitionList*);

#ifdef ENABLE_DUMP
void dumpClassDefinitionList(ClassDefinitionList* ptr);
#endif

#endif
