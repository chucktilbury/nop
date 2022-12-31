/**
 * @file dumper.h
 *
 * @brief Utility functions that support dumping the AST.
 *
 */
#ifndef _DUMPER_H
#define _DUMPER_H

#include "ast.h"

void dump_line(const char* fmt, ...);
void dump_inc();
void dump_dec();
// void dumpAst(Ast* ptr);
// void padAstDump();
// void addPadAstDump();
// void subPadAstDump();

const char* scopeToStr(int scope);
const char* typeToStr(int type);
const char* astTypeToStr(AstType t);

#endif /* _DUMPER_H */
