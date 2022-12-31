/**
 * @file type_definition.c
 *
 * $$ = createTypeDefinition();
 */
#include "memory.h"
#include "ast.h"

TypeDefinition* createTypeDefinition(int number,
		int string,
		int boolean,
		int nothing,
		int list,
		int dict,
		CompoundName* compound_name) {

#ifdef ENABLE_TRACE
    printf("parser: createTypeDefinition\\n");
#endif /* ENABLE_DUMP */

    TypeDefinition* ptr = _alloc_ds(TypeDefinition);
    initAst(&ptr->ast, NULL, AST_TYPE_DEFINITION);
    ptr->number = number;
    ptr->string = string;
    ptr->boolean = boolean;
    ptr->nothing = nothing;
    ptr->list = list;
    ptr->dict = dict;
    ptr->compound_name = compound_name;

    return ptr;
}

void destroyTypeDefinition(TypeDefinition* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpTypeDefinition(TypeDefinition* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
