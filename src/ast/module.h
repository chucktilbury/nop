/**
 * @file module.h
 *
 * NOTE: This file is generated by the boilerplate functionality.
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
    Module* module;
};

Module* createModule(ModuleList*, Module*);
AstResult pass1Module(Module*);
AstResult pass2Module(Module*);
AstResult pass3Module(Module*);
AstResult emitModule(Module*);
AstResult destroyModule(Module*);

#ifdef ENABLE_DUMP
AstResult dumpModule(Module* ptr);
#endif

#endif
