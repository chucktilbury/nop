/**
 * @file parameter_decl.h
 *
 * @brief Parameter declaration for AST. The parameter declaration is a list
 * of symbol_type.
 *
 */
#ifndef _PARAMETER_DECL_H
#define _PARAMETER_DECL_H

#include "ast.h"

typedef PtrLst ParameterLst;

ParameterLst* createParameterLst();
void addParameterLst(ParameterLst* lst, Symbol* sym);
Symbol** getParameterLst(ParameterLst* lst);

#ifdef ENABLE_DUMP
void dumpParameterLst(ParameterLst* ptr);
#endif

#endif /* _PARAMETER_DECL_H */
