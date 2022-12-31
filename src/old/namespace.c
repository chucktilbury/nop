/**
 * @file namespace.c
 *
 * @brief Namespace AST implementation.
 *
 */
#include "ast.h"

Namespace* createNamespace(const char* name) {

    Namespace* ptr = _alloc_ds(Namespace);
    initAst(&ptr->ast, name, AST_NAMESPACE);
    ptr->elements = createPtrLst();

    return ptr;
}

void destroyNamespace(Namespace* ptr) {

    (void)ptr;
}

void addNamespace(Namespace* ptr, void* data) {

    addPtrLst(ptr->elements, data);
}

#ifdef ENABLE_DUMP
void dumpNamespace(Namespace* ptr) {

    dump_line("NAMESPACE: ");
    dumpAst((Ast*)ptr);
    dump_inc();

    Ast** lst = (Ast**)rawPtrLst(ptr->elements);
    int len = lenPtrLst(ptr->elements);
    for(int i = 0; i < len; i++) {
        switch(lst[i]->type) {
            case AST_STRUCT_DECL: dumpStruct((Struct*)lst[i]); break;
            case AST_NAMESPACE: dumpNamespace((Namespace*)lst[i]); break;
            case AST_CLASS_DEF: dumpClass((Class*)lst[i]); break;
            case AST_FUNC_DECL:
                dumpFuncDecl((FuncDecl*)lst[i]);
                break;

            case AST_SYMBOL_DECL:
            case AST_SCOPE:
            case AST_CONSTR_DECL:
            case AST_DESTR_DECL:
            case AST_DATA_DECL:
            case AST_FUNC_DEF:
                printf("    %s: not implemented yet\n", astTypeToStr(lst[i]->type));
                break;

            case AST_UNKNOWN:
            case AST_DATA_DEF:
                ast_error(&ptr->ast, "unexpected AST item: %s", astTypeToStr(lst[i]->type));
                break;

            default:
                fatal("%d: is invalid AST type!\n", lst[i]->type);
        }
    }
    dump_dec();
    dump_line("NAMESPACE: end (%s)\n", getAstName(&ptr->ast));
}
#endif

