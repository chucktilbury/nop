/**
 * @file dict_init_element.h
 *
 */
#ifndef _DICT_INIT_ELEMENT_H_
#define _DICT_INIT_ELEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_DICT_INIT_ELEMENT,
} DictInitElementType;

typedef struct {
    Ast ast;
    DictInitElementType type;
} DictInitElement;

DictInitElement* createDictInitElement();
void destroyDictInitElement(DictInitElement*);

#ifdef ENABLE_DUMP
void dumpDictInitElement(DictInitElement* ptr);
#endif

#endif
