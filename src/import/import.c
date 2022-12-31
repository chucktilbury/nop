/**
 * @file import.c
 *
 * @brief Import a file. Not in the AST.
 *
 */
#include "ast.h"
#include "scanner.h"

void openFile(const char* fname) {

    open_file(fname);
}