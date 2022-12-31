/**
 * @file compound_name.h
 *
 * @brief Header for AST non-terminal compound_name
 *
 */
#ifndef _COMPOUND_NAME_H
#define _COMPOUND_NAME_H

typedef struct {
    Ast ast;
    PtrLst* elements;
} Name;

Name* createName(const char* str);
void addName(Name* name, const char* str);
const char* getName(Name* name);
// resolve name
// name in context

#ifdef ENABLE_DUMP
void dumpName(Name* name);
#endif

#endif /* _COMPOUND_NAME_H */
