/**
 * @file func_declaration.h
 *
 * @brief AST Function declaration. The only place a function declaration can
 * only exist in a class definition. When the function is defined, it is looked
 * up in the class definition to verify the format. This is stored undecorated
 * for the sake of efficiency.
 *
 */
#ifndef _FUNC_DECLARATION_H
#define _FUNC_DECLARATION_H

#include "ast.h"

typedef struct {
    // When this is declared, the ast has the declared name, but the value is
    // changed before the function declaration is complete to be the decorated
    // name. The decorated name has the types of the function parameters in
    // order as well as the return type.
    Ast ast;

    // This is a list of symbol declarations. These declarations are
    // considered to be local variables to the function and must have a value
    // for the function to be syntactically valid.
    ParameterLst* parms;

    // This is checked when looking a reference to this function.
    //int scope;

    // This is the return type of the function.
    Symbol* sym;

} FuncDecl;

FuncDecl* createFuncDecl(Symbol* name, ParameterLst* params); //, int scope);

#ifdef ENABLE_DUMP
void dumpFuncDecl(FuncDecl* func);
#endif

#endif /* _FUNC_DECLARATION_H */
