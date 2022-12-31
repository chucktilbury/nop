/**
 * @file compound_name.c
 *
 * @brief Implementation of compound names for the AST.
 *
 */
#include "ast.h"

Name* createName(const char* str) {

    Name* ptr = _alloc_ds(Name);
    initAst(&ptr->ast, str, AST_COMPOUND_NAME);
    ptr->elements = createPtrLst();

    addPtrLst(ptr->elements, _copy_str(str));

    return ptr;
}

void addName(Name* name, const char* str) {

    addPtrLst(name->elements, _copy_str(str));
    int len = strlen(name->ast.name) + strlen(str) + 3;
    name->ast.name = _realloc(name->ast.name, len);
    strcat((char*)name->ast.name, ".");
    strcat((char*)name->ast.name, str);
}

const char* getName(Name* name) {

    return name->ast.name;
}

#ifdef ENABLE_DUMP
void dumpName(Name* name) {

    dump_line("NAME: ");
    dumpAst((Ast*)name);
}
#endif