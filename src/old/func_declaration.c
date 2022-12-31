/**
 * @file func_declaration.c
 *
 * @brief Implementation of a function in the AST. Function declarations are
 * only found within a class definition. Everywhere else, they are function
 * definitions. So this is actually a function definition. For a declaration,
 * the implementation is defined somewhere else in the code. For a definition
 * the implementation directly follows. THere is no need for forward
 * declarations because of the ability to resolve names in multiple passes.
 *
 * TODO: Implement code blocks as a separate entity.
 *
 */
#include "ast.h"

FuncDecl* createFuncDecl(Symbol* name, ParameterLst* params) { //, int scope) {

    FuncDecl* ptr = _alloc_ds(FuncDecl);
    initAst(&ptr->ast, getSymbolName(name), AST_FUNC_DECL);

    ptr->sym = name;
    //ptr->scope = getSymbolScope(name);
    ptr->parms = params;

    return ptr;
}

#ifdef ENABLE_DUMP
void dumpFuncDecl(FuncDecl* ptr) {

    dump_line("FUNCDECL: ");
    dumpAst((Ast*)ptr);

    dumpSymbol(ptr->sym);
    dump_inc();
    dump_line("PARAMETERS:\n");
    if(ptr->parms != NULL)
        dumpParameterLst(ptr->parms);
    else
        dump_line("    NONE\n");
    dump_dec();
}

#endif
