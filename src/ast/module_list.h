/**
 * @file module_list.h
 *
 */
#ifndef _MODULE_LIST_H_
#define _MODULE_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_MODULE_LIST,
} ModuleListType;

typedef struct {
    Ast ast;
    ModuleListType type;
} ModuleList;

ModuleList* createModuleList();
void destroyModuleList(ModuleList*);

#ifdef ENABLE_DUMP
void dumpModuleList(ModuleList* ptr);
#endif

#endif
