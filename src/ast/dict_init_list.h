/**
 * @file dict_init_list.h
 *
 */
#ifndef _DICT_INIT_LIST_H_
#define _DICT_INIT_LIST_H_

#include "ast.h"

typedef enum {
    INVALID_DICT_INIT_LIST,
} DictInitListType;

typedef struct {
    Ast ast;
    DictInitListType type;
} DictInitList;

DictInitList* createDictInitList();
void destroyDictInitList(DictInitList*);

#ifdef ENABLE_DUMP
void dumpDictInitList(DictInitList* ptr);
#endif

#endif
