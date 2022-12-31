/**
 * @file dict_init_list.h
 *
 */
#ifndef _DICT_INIT_LIST_H_
#define _DICT_INIT_LIST_H_

#include "ast.h"

typedef enum {
    DICT_INIT_LIST_OK,
    DICT_INIT_LIST_ERROR,
} DictInitListType;

struct _dict_init_list_ {
    Ast ast;
    DictInitListType type;
    DictInitElement* dict_init_element;
    DictInitList* dict_init_list;
};

DictInitList* createDictInitList(DictInitElement*, DictInitList*);
void destroyDictInitList(DictInitList*);

#ifdef ENABLE_DUMP
void dumpDictInitList(DictInitList* ptr);
#endif

#endif
