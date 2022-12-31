/**
 * @file type_statement.c
 *
 * $$ = createTypeStatement();
 */
#include "memory.h"
#include "ast.h"

TypeStatement* createTypeStatement(int type,
		Expression* expression) {

#ifdef ENABLE_TRACE
    printf("parser: createTypeStatement\\n");
#endif /* ENABLE_DUMP */

    TypeStatement* ptr = _alloc_ds(TypeStatement);
    initAst(&ptr->ast, NULL, AST_TYPE_STATEMENT);
    ptr->type = type;
    ptr->expression = expression;

    return ptr;
}

void destroyTypeStatement(TypeStatement* ptr) {

    _free(ptr);
}

#ifdef ENABLE_DUMP
void dumpTypeStatement(TypeStatement* ptr) {

    (void)ptr;
}
#endif /* ENABLE_DUMP */
