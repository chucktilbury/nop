/**
 * @file symbol.c
 *
 * @brief Implementation of the AST symbol declaration.
 *
 * TODO: implement values for initialized vars
 * TODO: implement the expressions for initialized vars
 */
#include "ast.h"

Symbol* createSymbol(const char* name, Type* type, int scope, bool con) {

    Symbol* ptr = _alloc_ds(Symbol);
    initAst(&ptr->ast, name, AST_SYMBOL_DECL);
    ptr->scope = scope;
    ptr->type = type;
    ptr->is_const = con;
    ptr->is_init = false;

    return ptr;

}

const char* getSymbolName(Symbol* ptr) {

    return ptr->ast.name;
}

int getSymbolScope(Symbol* ptr) {

    return ptr->scope;
}

Type* getSymbolType(Symbol* ptr) {

    return ptr->type;
}

void setSymbolExpr(Symbol* sym, void* expr) {

    (void)sym;
    (void)expr;
}

#ifdef ENABLE_DUMP
void dumpSymbol(Symbol* sym) {

    dump_line("SYMBOL: ");
    dumpAst((Ast*)sym);

    int type = getType(sym->type);
    const char* name = getTypeName(sym->type);
    dump_line("         type:%s", typeToStr(type));
    if(name != NULL)
        dump_line(" (%s)", name);
    dump_line("\n");

    dump_line("        scope:%s\n", scopeToStr(sym->scope));
    dump_line("     is_const:%s\n", sym->is_const? "TRUE":"FALSE");
    dump_line("      is_init:%s\n", sym->is_init? "TRUE":"FALSE");
}
#endif
