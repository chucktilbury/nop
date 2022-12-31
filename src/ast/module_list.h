/**
 * @file module_list.h
 *
 */
#ifndef _MODULE_LIST_H_
#define _MODULE_LIST_H_

#include "ast.h"

typedef enum {
    MODULE_LIST_OK,
    MODULE_LIST_ERROR,
} ModuleListType;

struct _module_list_ {
    Ast ast;
    ModuleListType type;
    ModuleItem* module_item;
    ModuleList* module_list;
};

ModuleList* createModuleList(ModuleItem*, ModuleList*);
void destroyModuleList(ModuleList*);

#ifdef ENABLE_DUMP
void dumpModuleList(ModuleList* ptr);
#endif

#endif
