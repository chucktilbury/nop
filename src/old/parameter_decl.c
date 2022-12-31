/**
 * @file parameter_decl.c
 *
 * @brief Implementation of the parameter list in the AST.
 *
 */
#include "ast.h"

ParameterLst* createParameterLst() {

    return (ParameterLst*)createPtrLst();
}

void addParameterLst(ParameterLst* lst, Symbol* sym) {

    addPtrLst((PtrLst*)lst, (void*)sym);
}

Symbol** getParameterLst(ParameterLst* lst) {

    return (Symbol**)rawPtrLst((PtrLst*)lst);
}

#ifdef ENABLE_DUMP
void dumpParameterLst(ParameterLst* ptr) {

    for(Symbol* crnt = resetPtrLst(ptr); crnt != NULL; crnt = iteratePtrLst(ptr))
        dumpSymbol(crnt);
}
#endif

