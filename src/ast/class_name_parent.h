/**
 * @file class_name_parent.h
 *
 */
#ifndef _CLASS_NAME_PARENT_H_
#define _CLASS_NAME_PARENT_H_

#include "ast.h"

typedef enum {
    CLASS_NAME_PARENT_OK,
    CLASS_NAME_PARENT_ERROR,
} ClassNameParentType;

struct _class_name_parent_ {
    Ast ast;
    ClassNameParentType type;
    CompoundNameInParensRule* compound_name_in_parens_rule;
    EmptyParensRule* empty_parens_rule;
};

ClassNameParent* createClassNameParent(CompoundNameInParensRule*, EmptyParensRule*);
void destroyClassNameParent(ClassNameParent*);

#ifdef ENABLE_DUMP
void dumpClassNameParent(ClassNameParent* ptr);
#endif

#endif
