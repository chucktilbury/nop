/**
 * @file class.c
 *
 * @brief Class AST implementation
 *
 */
#include "ast.h"
#include "parser.h"

Class* createClass(const char* name, int scope, Name* parent) {

    if(scope == PROTECTED) {
        error("PROTECTED scope not allowed for a CLASS");
        return NULL;
    }

    Class* ptr = _alloc_ds(Class);
    initAst(&ptr->ast, name, AST_CLASS_DEF);
    ptr->scope = scope;
    ptr->elements = createPtrLst();
    ptr->parent = parent;

    return ptr;
}

void destroyClass(Class* ptr) {

    destroyAst(&ptr->ast);
    // TODO: destroy the elements
    destroyPtrLst(ptr->elements);
    _free(ptr);
}

void addClass(Class* ptr, void* data) {

    addPtrLst(ptr->elements, data);
}

void addParentClass(Class* ptr, void* data) {

    if(ptr->parent != NULL)
        ptr->parent = data;
    else
        ast_error(&ptr->ast, "CLASS \"%s\" already has a parent: \"%s\"",
                ptr->ast.name, ptr->parent->ast.name);
}

#ifdef ENABLE_DUMP
void dumpClass(Class* ptr) {

    dump_line("CLASS: ");
    dumpAst((Ast*)ptr);
    dump_line("     scope:%s\n", scopeToStr(ptr->scope));
    if(ptr->parent != NULL)
        dump_line("    parent:%s\n", getName(ptr->parent));
    else
        dump_line("    parent:NONE\n");
    dump_inc();

    Ast** lst = (Ast**)rawPtrLst(ptr->elements);
    int len = lenPtrLst(ptr->elements);
    for(int i = 0; i < len; i++) {
        switch(lst[i]->type) {
            case AST_STRUCT_DECL: dumpStruct((Struct*)lst[i]); break;
            case AST_SYMBOL_DECL: dumpSymbol((Symbol*)lst[i]); break;
            case AST_FUNC_DECL:
                dumpFuncDecl((FuncDecl*)lst[i]);
                break;

            case AST_SCOPE:
            case AST_CONSTR_DECL:
            case AST_DESTR_DECL:
            case AST_DATA_DECL:
                printf("    %s: not implemented yet\n", astTypeToStr(lst[i]->type));
                break;

            case AST_NAMESPACE:
            case AST_CLASS_DEF:
            case AST_FUNC_DEF:
            case AST_DATA_DEF:
                ast_error(&ptr->ast, "unexpected AST item: %s", astTypeToStr(lst[i]->type));
                break;

            case AST_UNKNOWN:
                ast_error(&ptr->ast, "unknown AST item");
                break;

            default:
                fatal("%d: is invalid AST type!\n", lst[i]->type);
        }
    }
    dump_dec();
    dump_line("CLASS: end (%s)\n", getAstName(&ptr->ast));
}
#endif

