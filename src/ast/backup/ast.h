/**
 * @file ast.h
 *
 * @brief Abstract Syntax Tree. Rather than provide a header for each data
 * structure, this header has all of the type definitions and function protos
 * that implement the tree.
 *
 */
#ifndef _AST_H
#define _AST_H

#include "common.h"

// enums automatically generated by boilerplate
typedef enum {
    JUNK,
} AstType;


/**
 * @brief All AST tree elements have this as the first element.
 */
typedef struct {
    // data structure
    const char* name;
    AstType type;
    // file information for errors
    const char* fname;
    int line;
    int col;
} Ast;

void initAst(Ast* ast, const char* name, AstType type);
void destroyAst(Ast* ast);
const char*getAstName(Ast* ast);
void* findAst(const char* name, int* type);
const char* astTypeToStr(AstType t);

void ast_error(Ast* ast, const char* fmt, ...);


#if 0
#ifdef ENABLE_DUMP
#include "dumper.h"
void dumpAst(Ast* ptr);
#endif
#endif

// defined at the end of parser.y
const char* tokenToStr(int tok);

#endif /* _AST_H */