%{
#include "common.h"
#include "ast/ast.h"
#include "parser.h"
#include "memory.h"
#include <stdio.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"

void yyerror(const char* s);

typedef struct _file_stack_ {
    const char* fname;
    int line;
    int col;
    FILE* fptr;
    YY_BUFFER_STATE buffer;
    struct _file_stack_* next;
} FileStack;

#define MAX_INCL 15
FileStack* fstack = NULL;
int incl_depth = 0;

int bidx = 0;
char buffer[1024 * 64];
const char* file_name;

static void __append_char(char ch) {
    // TODO: bounds checking
    buffer[bidx] = ch;
    bidx++;
}

static void __append_str(const char* str) {
    // TODO: bounds checking
    strcpy(&buffer[bidx], str);
    bidx += strlen(str);
}

int yycolumn = 1;

/* This is executed before every action. */
#define YY_USER_ACTION                                                   \
  fstack->line = prev_yylineno; fstack->col = yycolumn;                  \
  if (yylineno == prev_yylineno) yycolumn += yyleng;                     \
  else {                                                                 \
    for (yycolumn = 1; yytext[yyleng - yycolumn] != '\n'; ++yycolumn) {} \
    prev_yylineno = yylineno;                                            \
  }

%}

/* state definitions */
%x SQUOTES
%x DQUOTES
%x COMMENT
%option noinput nounput
%option yylineno
%option noyywrap

%%

   /* Any indented text before the first rule goes at the top of the lexer.  */
   // int start_line, start_column;
   int prev_yylineno = yylineno;

\n      {}
[ \t\r] {}

"break"     { return BREAK; }
"case"      { return CASE; }
"continue"  { return CONTINUE; }
"const"     { return CONST; }
"default"   { return DEFAULT; }
"import"    { return IMPORT; }
"do"        { return DO; }
"else"      { return ELSE; }
"for"       { return FOR; }
"if"        { return IF; }
"return"    { return RETURN; }
"switch"    { return SWITCH; }
"while"     { return WHILE; }
"true"      { return TRUE; }
"false"     { return FALSE; }
"in"        { return IN; }
"yield"     { return YIELD; }
"exit"      { return EXIT; }
"try"       { return TRY; }
"except"    { return EXCEPT; }
"raise"     { return RAISE; }
"create"    { return CTOR; }
"destroy"   { return DTOR; }

"namespace" { return NAMESPACE; }
"class"     { return CLASS; }
"struct"    { return STRUCT; }

"public"    { nop_lval.scope = PUBLIC; return PUBLIC; }
"private"   { nop_lval.scope = PRIVATE; return PRIVATE; }
"protected" { nop_lval.scope = PROTECTED; return PROTECTED; }

"num"       { nop_lval.type = NUMBER; return NUMBER; }
"number"    { nop_lval.type = NUMBER; return NUMBER; }
"nothing"   { nop_lval.type = NOTHING; return NOTHING; }
"noth"      { nop_lval.type = NOTHING; return NOTHING; }
"string"    { nop_lval.type = STRING; return STRING; }
"strg"      { nop_lval.type = STRING; return STRING; }
"bool"      { nop_lval.type = BOOLEAN; return BOOLEAN; }
"boolean"   { nop_lval.type = BOOLEAN; return BOOLEAN; }
"list"      { nop_lval.type = LIST; return LIST; }
"dict"      { nop_lval.type = DICT; return DICT; }
"trace"     { nop_lval.type = TRACE; return TRACE; }
"print"     { nop_lval.type = PRINT; return PRINT; }
"type"      { nop_lval.type = TYPE; return TYPE; }

"<=" { return LORE; }
">=" { return GORE; }
"==" { return EQU; }
"!=" { return NEQU; }
"||" { return OR; }
"or" { return OR; }
"&&" { return AND; }
"and" { return AND; }

"+" { return '+'; }
"-" { return '-'; }
"=" { return '='; }
"/" { return '/'; }
"*" { return '*'; }
"%" { return '%'; }
"(" { return '('; }
")" { return ')'; }
"#" { return '#'; }
"{" { return '{'; }
"}" { return '}'; }
"," { return ','; }
"." { return '.'; }
"<" { return '<'; }
">" { return '>'; }
":" { return ':'; }
"|" { return '|'; }
"[" { return '['; }
"]" { return ']'; }
"@" { return '@'; }
"$" { return '$'; }
"&" { return '&'; }
"~" { return '~'; }
"!" { return '!'; }

[a-zA-Z_][a-zA-Z_0-9]* {
        nop_lval.symbol = (char*)strdup(yytext);
        return SYMBOL;
    }

[0-9]+ {
        nop_lval.num = (double)strtol(yytext, NULL, 10);
        return NUM;
    }

    /* recognize a float */
([0-9]*\.)?[0-9]+([Ee][-+]?[0-9]+)? {
        nop_lval.num = strtod(yytext, NULL);
        return NUM;
    }

0[Xx][0-9a-fA-F]+ {
        nop_lval.num = (double)strtol(yytext, NULL, 16);
        return NUM;
    }

    /* double quoted strings have escapes managed */
\"  {
        bidx = 0;
        memset(buffer, 0, sizeof(buffer));
        BEGIN(DQUOTES);
    }

<DQUOTES>\" {
        nop_lval.str = (char*)strdup(buffer);
        BEGIN(INITIAL);
        return STRG;
    }

    /* the short rule matches before the long one does */
<DQUOTES>\\n { __append_char('\n'); }
<DQUOTES>\\r { __append_char('\r'); }
<DQUOTES>\\e { __append_char('\x1b'); }
<DQUOTES>\\t { __append_char('\t'); }
<DQUOTES>\\b { __append_char('\b'); }
<DQUOTES>\\f { __append_char('\f'); }
<DQUOTES>\\v { __append_char('\v'); }
<DQUOTES>\\\\ { __append_char('\\'); }
<DQUOTES>\\\" { __append_char('\"'); }
<DQUOTES>\\\' { __append_char('\''); }
<DQUOTES>\\\? { __append_char('\?'); }
<DQUOTES>\\.  { __append_char(yytext[1]); }
<DQUOTES>\\[0-7]{1,3} { __append_char((char)strtol(yytext + 1, 0, 8)); }
<DQUOTES>\\[xX][0-9a-fA-F]{1,3} { __append_char((char)strtol(yytext + 2, 0, 16)); }
<DQUOTES>[^\\\"\n]*  { __append_str(yytext); }
<DQUOTES>\n     { yylineno++; } /* track line numbers, but strip new line */

    /* single quoted strings are absolute literals */
\'  {
        bidx = 0;
        memset(buffer, 0, sizeof(buffer));
        BEGIN(SQUOTES);
    }

<SQUOTES>\' {
        nop_lval.str = (char*)strdup(buffer);
        BEGIN(INITIAL);
        return STRG;
    }

<SQUOTES>[^\\'\n]*  { __append_str(yytext); }
<SQUOTES>\\.    { __append_str(yytext); }
<SQUOTES>\n     {
        __append_str(yytext);
        yylineno++;
    } /* don't strip new lines */

.   {
        printf("Warning: unrecognized character: %c (0x%02X)\n", yytext[0], yytext[0]);
    }

    /* comments */
";".*\n {}

<<EOF>> {

        incl_depth--;

        FileStack* tmp = fstack;
        _free(tmp->fname);
        fclose(tmp->fptr);
        _free(tmp);
        fstack = fstack->next;

        if(fstack == NULL) {
            yyterminate();
        }
        else {
            yy_delete_buffer(YY_CURRENT_BUFFER);
            yy_switch_to_buffer(fstack->buffer);
        }
    }


%%

const char* _strdup(const char* str) {

    size_t len = strlen(str) + 1;
    char* buf = malloc(len);
    memcpy(buf, str, len);
    return buf;
}

int open_file(const char *fname) {

    if(incl_depth > MAX_INCL) {
        fprintf(stderr, "FATAL ERROR: Maximum include depth exceeded\n");
        exit(1);
    }
    incl_depth++;

    FileStack* fs = _alloc_ds(FileStack);
    fs->fname = _copy_str(fname);
    fs->line = 1;
    fs->col = 1;
    fs->next = NULL;

    // file_name = _copy_str(fname);
    yyin = fopen(fname, "r");
    if(yyin == NULL) {
        fprintf(stderr, "fatal error: cannot open input file: %s: %s\n", fname,
                strerror(errno));
        exit(1);
    }
    fs->fptr = yyin;
    fs->buffer = yy_create_buffer(yyin, YY_BUF_SIZE);
    yy_switch_to_buffer(fs->buffer);

    if(fstack != NULL) {
        fs->next = fstack;
        fstack = fs;
    }
    else
        fstack = fs;

    BEGIN(INITIAL);
    return 0;
}

int get_line_no() {

    if(fstack != NULL)
        return fstack->line;
    else
        return -1;
}

int get_col_no() {

    if(fstack != NULL)
        return fstack->col;
    else
        return -1;
}

const char* get_file_name() {

    if(fstack != NULL)
        return fstack->fname;
    else
        return "no file open";
}
