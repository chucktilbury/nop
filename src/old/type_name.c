/**
 * @file type_name.c
 *
 * @brief Implementation of type names for AST
 *
 * TODO: The user-defined type resolver will go here.
 */
#include "ast.h"

Type* createType(int type, Name* cname) {

    Type* ptr = _alloc_ds(Type);
    initAst(&ptr->ast, NULL, AST_TYPE_NAME);
    ptr->type = type;
    ptr->name = cname; // if the name is not a compound name, then this is NULL

    return ptr;
}

int getType(Type* ptr) {

    return ptr->type;
}

const char* getTypeName(Type* ptr) {

    if(ptr->name != NULL)
        return getName(ptr->name);
    else
        return NULL;
}

#ifdef ENABLE_DUMP
void dumpType(Type* ptr) {

    dump_line("TYPE: ");
    dumpAst((Ast*)ptr);

    dump_line("         type:%s ", typeToStr(ptr->type));
    if(ptr->name != NULL)
        dump_line("(%s)", getName(ptr->name));
    dump_line("\n");
}
#endif

