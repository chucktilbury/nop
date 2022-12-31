/**
 * @file dict_init_element.h
 *
 */
#ifndef _DICT_INIT_ELEMENT_H_
#define _DICT_INIT_ELEMENT_H_

#include "ast.h"

typedef enum {
    DICT_INIT_ELEMENT_OK,
    DICT_INIT_ELEMENT_ERROR,
} DictInitElementType;

struct _dict_init_element_ {
    Ast ast;
    DictInitElementType type;
    const char* strg;
    DictInitItem* dict_init_item;
    CompoundName* compound_name;
};

DictInitElement* createDictInitElement(const char*, DictInitItem*, CompoundName*);
void destroyDictInitElement(DictInitElement*);

#ifdef ENABLE_DUMP
void dumpDictInitElement(DictInitElement* ptr);
#endif

#endif
