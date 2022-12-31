/**
 * @file struct.c
 *
 * @brief Struct AST implementation. A struct is intended to group data
 * variables so that they can be manipulated as a group.
 *
 */
#include "ast.h"

Struct* createStruct(const char* name, int scope) {

    Struct* ptr = _alloc_ds(Struct);
    initAst(&ptr->ast, name, AST_STRUCT_DECL);
    ptr->scope = scope;
    ptr->elements = createPtrLst();

    return ptr;
}

void destroyStruct(Struct* ptr) {

    (void)ptr;
}

void addStruct(Struct* ptr, void* data) {

    addPtrLst(ptr->elements, data);
}

#ifdef ENABLE_DUMP
void dumpStruct(Struct* ptr) {

    dump_line("STRUCT: ");
    dumpAst((Ast*)ptr);
    dump_line("     scope:%s\n", scopeToStr(ptr->scope));
    dump_inc();

    Ast** lst = (Ast**)rawPtrLst(ptr->elements);
    int len = lenPtrLst(ptr->elements);
    for(int i = 0; i < len; i++) {
        switch(lst[i]->type) {
            case AST_SYMBOL_DECL: dumpSymbol((Symbol*)lst[i]); break;

            case AST_STRUCT_DECL:
            case AST_DATA_DECL:
            case AST_SCOPE:
            case AST_CONSTR_DECL:
            case AST_DESTR_DECL:
            case AST_FUNC_DECL:
            case AST_UNKNOWN:
            case AST_NAMESPACE:
            case AST_CLASS_DEF:
            case AST_FUNC_DEF:
            case AST_DATA_DEF:
                ast_error(&ptr->ast, "unexpected AST item: %s", astTypeToStr(lst[i]->type));
                break;

            default:
                fatal("%d: is invalid AST type!\n", lst[i]->type);
        }
    }
    dump_dec();
    dump_line("STRUCT: end (%s)\n", getAstName(&ptr->ast));
}
#endif
