/**
 * @file module.h
 *
 */
#ifndef _MODULE_H_
#define _MODULE_H_

#include "ast.h"

typedef enum {
    MODULE_OK,
    MODULE_ERROR,
} ModuleType;

struct _module_ {
    Ast ast;
    ModuleType type;
    ModuleList* module_list;
};

Module* createModule(ModuleList*);
void destroyModule(Module*);

#ifdef ENABLE_DUMP
void dumpModule(Module* ptr);
#endif

#endif
