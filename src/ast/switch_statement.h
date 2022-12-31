/**
 * @file switch_statement.h
 *
 */
#ifndef _SWITCH_STATEMENT_H_
#define _SWITCH_STATEMENT_H_

#include "ast.h"

typedef enum {
    INVALID_SWITCH_STATEMENT,
} SwitchStatementType;

typedef struct {
    Ast ast;
    SwitchStatementType type;
} SwitchStatement;

SwitchStatement* createSwitchStatement();
void destroySwitchStatement(SwitchStatement*);

#ifdef ENABLE_DUMP
void dumpSwitchStatement(SwitchStatement* ptr);
#endif

#endif
