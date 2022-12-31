/**
 * @file module.h
 *
 */
#ifndef _MODULE_H_
#define _MODULE_H_

#include "ast.h"

typedef enum {
    INVALID_MODULE,
} ModuleType;

typedef struct {
    Ast ast;
    ModuleType type;
} Module;

Module* createModule();
void destroyModule(Module*);

#ifdef ENABLE_DUMP
void dumpModule(Module* ptr);
#endif

#endif
