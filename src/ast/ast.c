/**
 * @file ast.c
 *
 * @brief AST root struct implementation
 *
 */
#include "ast.h"
#include "scanner.h"


void initAst(Ast* ast, const char* name, AstType type) {

    ast->name = _copy_str(name);
    ast->type = type;

    ast->fname = _copy_str(get_file_name());
    ast->line = get_line_no();
    ast->col = get_col_no();
}

void destroyAst(Ast* ast) {

    _free(ast->name);
    _free(ast->fname);
    _free(ast);
}

void* findAst(const char* name, int* type) {

    (void)name;
    (void)type;
    return NULL;
}

void dumpAst(Ast* ptr) {

    printf("\"%s\":%s:%d:%d\n", ptr->name, ptr->fname, ptr->line, ptr->col);
}

#include <stdio.h>
#include <stdarg.h>
/*
 * This error function is used where the YACC parser did not catch the error.
 */
void ast_error(Ast* ast, const char* fmt, ...) {

    FILE* s = get_err_stream();

    fprintf(s, "%s:%d:%d syntax error, ", ast->fname, ast->line, ast->col);

    va_list args;
    va_start(args, fmt);
    vfprintf(s, fmt, args);
    va_end(args);

    fprintf(s, "\n");
    increment_errors();
}

const char*getAstName(Ast* ast) {

    return ast->name;
}
