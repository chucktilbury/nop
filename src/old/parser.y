%debug
%defines
%locations

%{

#include "ast.h"

#include "common.h"
#include "scanner.h"
#include "memory.h"
#include "errors.h"

FILE* outfile = NULL;
extern const char* file_name;

#ifdef ENABLE_TRACE
#   define TRACE(f, ...) do{ \
        fprintf(stderr, "parser:"); \
        fprintf(stderr, (f), ## __VA_ARGS__); \
        fprintf(stderr, "\n");  \
    } while(0)
#else
#   define TRACE(f, ...)
#endif

Namespace* root_namespace = NULL;
static int current_scope = 0;

%}

%union {
    char* str;
    double num;
    //int type;
    //int scope;

    Namespace* yystruct_namespace;
    Struct* yystruct_struct;
    Class* yystruct_class;
    Symbol* yystruct_symbol;
    Type* type;
    FuncDecl* yystruct_func;
    ParameterLst* yystruct_parmlst;
    ConstExpr* yystruct_const_expr;
    void* yystruct_item;     // generic item
    Name* yystruct_name;    // compound_name
};

%token BREAK CASE CONTINUE CONST DEFAULT
%token DO ELSE FOR IF RETURN SWITCH IMPORT
%token NAMESPACE CLASS STRUCT WHILE
%token TRUE FALSE IN YIELD EXIT
%token EQU NEQU LORE GORE OR AND
%token TRY EXCEPT RAISE CTOR DTOR

%token<type> NUMBER NOTHING STRING LIST DICT BOOLEAN USER_DEFINED
%token PUBLIC PRIVATE PROTECTED
%token<str> SYMBOL
%token<num> LNUM
%token<str> STRG

%type<yystruct_namespace> namespace_name namespace_definition
%type<yystruct_class> class_name class_definition
%type<yystruct_struct> struct_declaration
%type<yystruct_symbol> symbol_declaration symbol_type
%type<yystruct_name> compound_name
%type<yystruct_func> func_definition func_declaration
%type<yystruct_parmlst> parameter_def parameter_def_list
%type<yystruct_const_expr> constant_expression
%type<yystruct_item> module_item module_list struct_body
%type<yystruct_item> class_definition_list class_definition_item

    /*%type<scope> current_scope */
%type<type> type_definition

%define parse.error verbose
%locations

%right '='
%left CAST
%left OR
%left AND
%left EQU NEQU
%left LORE GORE '<' '>'
%left '+' '-'
%left '*' '/' '%'
%left NEGATE

%%

module
    : {
        TRACE("before everything");
        // initialize the parser here
        root_namespace = createNamespace("root");
        current_scope = PRIVATE;

    } module_list {
        TRACE("after everything\n--------------");
        // finish the root namespace
        copyPtrLst(root_namespace->elements, $2);

        // tear down the parser here
#ifdef ENABLE_DUMP
        dumpNamespace(root_namespace);
#endif
        destroyNamespace(root_namespace);
    }
    ;

module_list
    : module_item {
            TRACE("module_list:CREATE");
            $$ = createPtrLst();
            addPtrLst($$, $1);
        }
    | module_list module_item {
            TRACE("module_list:ADD");
            addPtrLst($1, $2);
        }
    ;

module_item
    : class_definition {
            TRACE("module_definition_item:class_definition");
            $$ = (void*)$1;
        }
    | data_definition {
            TRACE("module_definition_item:data_definition");
            //$$ = (void*)$1;
        }
    | func_definition {
            TRACE("module_definition_item:func_definition");
            $$ = (void*)$1;
    }
    | func_declaration {
        }
    | namespace_definition {
            TRACE("module_definition_item:namespace_definition");
            $$ = (void*)$1;
        }
    | struct_declaration {
            TRACE("module_definition_item:struct_declaration");
            $$ = (void*)$1;
        }
    | scope_operator {
            TRACE("module_item:scope_operator");
            $$ = NULL;
        }
    | IMPORT STRG {
            TRACE("import_statement: \"%s\"", $2);
            openFile($2);
        }
    ;

compound_name
    : SYMBOL {
            TRACE("compound_name:CREATE \"%s\"", $1);
            $$ = createName($1);
        }
    | compound_name '.' SYMBOL {
            TRACE("compound_name:ADD \"%s\"", $3);
            addName($$, $3);
        }
    ;

namespace_name
    : NAMESPACE SYMBOL {
            TRACE("namespace_name: \"%s\"", $2);
            $$ = createNamespace($2);
        }
    ;

namespace_definition
    : namespace_name '{' module_list '}' {
            TRACE("namespace_definition {body}");
            copyPtrLst($1->elements, $3);
        }
    | namespace_name '{' '}' {
            TRACE("namespace_definition {}");
        }
    ;

class_name
    : CLASS SYMBOL {
            TRACE("class_name: \"%s\"", $2);
            $$ = createClass($2, current_scope, NULL);
        }
    | CLASS SYMBOL '(' ')' {
            TRACE("class_name: \"%s\"", $2);
            $$ = createClass($2, current_scope, NULL);
        }
    | CLASS SYMBOL '(' compound_name ')' {
            TRACE("class_name: \"%s\"", $2);
            $$ = createClass($2, current_scope, $4);
        }
    ;

class_definition
    : class_name'{' class_definition_list '}' {
            TRACE("class_definition:class_name {body}");
            $$ = $1;
            copyPtrLst($1->elements, $3);
        }
    | class_name '{' '}' {
            TRACE("class_definition:class_name {}");
            $$ = $1;
        }
    ;

class_definition_list
    : class_definition_item {
            TRACE("class_definition_list:CREATE");
            $$ = createPtrLst();
            addPtrLst($$, $1);
        }
    | class_definition_list class_definition_item {
            TRACE("class_definition_list:ADD");
            addPtrLst($1, $2);
        }
    ;

    /*
     * Current scope is in a stack. class and namespace push
     */
scope_operator
    : PRIVATE {
            TRACE("scope_operator:PRIVATE");
            current_scope = PRIVATE;
        }
    | PUBLIC {
            TRACE("scope_operator:PUBLIC");
            current_scope = PUBLIC;
        }
    | PROTECTED {
            TRACE("scope_operator:PROTECTED");
            current_scope = PROTECTED;
        }
    ;

class_definition_item
    : symbol_declaration {
            TRACE("class_definition_item:symbol_declaration");
            $$ = (void*)$1;
        }
        /* | func_declaration {
            TRACE("class_definition_item:func_declaration");
            $$ = (void*)$1;
        } */
    | method_declaration {
        }
    | struct_declaration {
            TRACE("class_definition_item:struct_declaration");
            $$ = (void*)$1;
        }
    | scope_operator {
            TRACE("class_definition_item:scope_operator");
            $$ = NULL;
        }
    | constructor_decl {
            TRACE("class_definition_item:constructor_decl");
        }
    | destructor_decl {
            TRACE("class_definition_item:destructor_decl");
        }
    ;

type_definition
    : NUMBER {
            TRACE("type_definition:NUMBER");
            $$ = createType(NUMBER, NULL);
        }
    | STRING {
            TRACE("type_definition:STRING");
            $$ = createType(STRING, NULL);
        }
    | BOOLEAN {
            TRACE("type_definition:BOOLEAN");
            $$ = createType(BOOLEAN, NULL);
        }
    | NOTHING {
            TRACE("type_definition:NOTHING");
            $$ = createType(NOTHING, NULL);
        }
    | LIST {
            TRACE("type_definition:LIST");
            $$ = createType(LIST, NULL);
        }
    | DICT {
            TRACE("type_definition:DICT");
            $$ = createType(DICT, NULL);
        }
    | compound_name {
            TRACE("type_definition:compound_name");
            // resolve the name and then assign the type.
            $$ = createType(USER_DEFINED, $1);
        }
    | USER_DEFINED  {
        /* this is here to not have an unused token, but
        the scanner never returns it, so this rule is never active. */
        }
    ;

symbol_type
    : type_definition SYMBOL {
            TRACE("symbol_type: \"%s\"", $2);
            $$ = createSymbol($2, $1, current_scope, false);
        }
    ;

constructor_decl
    : CTOR '(' parameter_def_list ')' {
            TRACE("constructor_decl: after parameter list");
        }
    ;

destructor_decl
    : DTOR {
            TRACE("destructor_decl:DTOR");
        }
    ;

struct_declaration
    : STRUCT SYMBOL '{' struct_body '}' {
            TRACE("struct_declaration:{struct body}");
            $$ = createStruct($2, current_scope);
            copyPtrLst($$->elements, $4);
        }
    | STRUCT SYMBOL '{' '}' {
            TRACE("struct_declaration:{}");
            $$ = createStruct($2, current_scope);
        }
    ;

struct_body
    : symbol_declaration {
            TRACE("struct_body:CREATE");
            $$ = createPtrLst();
            $1->scope = PUBLIC; // all struct vars are public
            addPtrLst($$, $1);
        }
    | struct_body symbol_declaration {
            TRACE("struct_body:ADD");
            $2->scope = PUBLIC;
            addPtrLst($1, $2);
        }
    ;

symbol_declaration
    : symbol_type {
            TRACE("symbol_declaration:symbol_type");
            $$ = $1;

        }
    | CONST symbol_type {
            TRACE("symbol_declaration:CONST:symbol_type");
            $$ = $2;
            $$->is_const = true;
        }
    ;

parameter_def_list
    : symbol_declaration {
            TRACE("parameter_decl_list:CREATE");
            $$ = createParameterLst();
            $1->scope = PRIVATE;
            addParameterLst($$, $1);
        }
    | parameter_def_list ',' symbol_declaration {
            TRACE("parameter_decl_list:ADD");
            $3->scope = PRIVATE;
            addParameterLst($1, $3);
        }
    ;

empty_parameter
    : '(' ')' {
        }
    ;

parameter_def
    : '(' parameter_def_list ')' {
            TRACE("parameter_def:(parameter_def_list)");
            $$ = $2;
        }
    | empty_parameter {
            TRACE("parameter_def:()");
            $$ = NULL;
        }
    ;

parameter_decl_element
    : type_definition {
        }
    | CONST type_definition {
        }
    ;

parameter_decl_list
    : parameter_decl_element {
        }
    | parameter_decl_list ',' parameter_decl_element {
        }
    ;

parameter_decl
    : '(' parameter_decl_list ')' {
        }
    | empty_parameter {
        }
    ;

method_declaration
    : SYMBOL parameter_decl parameter_decl {
        }
    ;

func_declaration
    : compound_name parameter_decl parameter_decl {
            TRACE("func_declaration");
            //$$ = createFuncDecl($1, $2);
        }
    ;

array_initializer
    : '[' expression_list ']' {
            TRACE("array_initializer:[expression_list]");
        }
    ;

    /* todo: what if someone tries to put a dict item in an array or visav */
dict_init_item
    : expression {
            TRACE("dict_init_item:expression");
        }
    | dict_initializer {
            TRACE("dict_init_item:dict_initializer");
        }
    | array_initializer {
            TRACE("dict_init_item:array_initializer");
        }
    ;


dict_init_element
    : STRG ':' dict_init_item {
            TRACE("dict_init_element:STRG:expression");
        }
    | compound_name ':' dict_init_item {
            // name has to name a string
            TRACE("dict_init_element:compound_name:expression");
        }
    ;

dict_init_list
    : dict_init_element {
            TRACE("dict_init_list:CREATE");
        }
    | dict_init_list ',' dict_init_element {
            TRACE("dict_init_list:ADD");
        }
    ;

dict_initializer
    : '[' dict_init_list ']' {
            TRACE("dict_initializer:[dict_init_list]");
        }
    ;

cast_specifier
    : type_definition '@' {
            TRACE("cast_specifier");
        }
    ;

initialzer
    : expression {
            TRACE("initialzer:expression");
        }
    | array_initializer {
            TRACE("initialzer:array_initializer");
        }
    | dict_initializer {
            TRACE("initialzer:dict_initializer");
        }
    ;

data_definition
    : symbol_declaration {
            TRACE("data_definition:symbol_declaration");
        }
    | symbol_declaration '=' initialzer {
            TRACE("data_definition:symbol_declaration=initialzer");
        }
    ;

    /* func_definition_name
    : type_definition compound_name {
            TRACE("func_definition_name:type_definition compound_name");
        }
    ; */

    /* method_definition_name
    : func_definition_name ':' SYMBOL {
            TRACE("method_definition_name:func_definition_name : \"%s\"", $3);
        }
    ; */

ctor_definition_name
    : compound_name '.' CTOR {
            TRACE("ctor_definition_name:compound_name : CTOR");
        }
    ;

dtor_definition_name
    : compound_name '.' DTOR {
            TRACE("dtor_definition_name:compound_name : DTOR");
        }
    ;

func_body
    : '{' func_body_statement_list '}' {
            TRACE("func_body:{func_body_statement_list}");
        }
    | '{' '}' {
            TRACE("func_body:{}");
        }
    ;

func_definition
    : compound_name parameter_def parameter_def func_body {
            TRACE("func_definition:func_definition_name");
        }
        /* | method_definition_name parameter_def func_body {
            TRACE("func_definition:method_definition_name");
        } */
    | ctor_definition_name parameter_def func_body {
            TRACE("func_definition:ctor_definition_name");
        }
    | dtor_definition_name func_body {
            TRACE("func_definition:dtor_definition_name");
        }
    ;

func_body_statement
    : data_definition {
            TRACE("func_body_statement:data_definition");
        }
    | compound_name '=' initialzer {
            TRACE("func_body_statement:compound_name = expression");
        }
    | if_statement {
            TRACE("func_body_statement:if_statement");
        }
    | for_statement {
            TRACE("func_body_statement:for_statement");
        }
    | while_statement {
            TRACE("func_body_statement:while_statement");
        }
    | switch_statement {
            TRACE("func_body_statement:switch_statement");
        }
    | do_statement {
            TRACE("func_body_statement:do_statement");
        }
    | try_statement {
            TRACE("func_body_statement:try_statement");
        }
    | func_reference {
            TRACE("func_body_statement:func_reference");
        }
    | RAISE '(' expression ')' {
            TRACE("func_body_statement:RAISE(expression)");
        }
    | RETURN {
            TRACE("func_body_statement:RETURN");
        }
    | RETURN '(' expression ')' {
            TRACE("func_body_statement:RETURN(expression)");
        }
    | EXIT '(' expression ')' {
            TRACE("func_body_statement:EXIT(expression)");
        }
    ;

func_body_statement_list
    : func_body_statement {
            TRACE("func_body_statement_list:CREATE");
        }
    | func_body_statement_list func_body_statement {
            TRACE("func_body_statement_list:ADD");
        }
    ;

loop_body_statement
    : func_body_statement {
            TRACE("loop_body_statement:func_body_statement");
        }
    | BREAK {
            TRACE("loop_body_statement:BREAK");
        }
    | CONTINUE {
            TRACE("loop_body_statement:CONTINUE");
        }
    | YIELD {
            TRACE("loop_body_statement:YIELD");
        }
    ;

loop_body_statement_list
    : loop_body_statement {
            TRACE("loop_body_statement_list:CREATE");
        }
    | loop_body_statement_list loop_body_statement {
            TRACE("loop_body_statement_list:ADD");
        }
    ;

loop_body
    : '{' loop_body_statement_list '}' {
            TRACE("loop_body:{loop_body_statement_list}");
        }
    | '{' '}' {
            TRACE("loop_body:{}");
        }
    ;

func_reference
    : compound_name '(' expression_list ')' {
            TRACE("func_reference:compound_name(expression_list)");
        }
    ;

except_clause
    : EXCEPT '(' compound_name ')' func_body {
            TRACE("except_clause:func_body");
        }
    ;

except_clause_intermediate_list
    : except_clause {
            TRACE("except_clause_intermediate_list:create");
        }
    | except_clause_intermediate_list except_clause {
            TRACE("except_clause_intermediate_list:add");
        }
    ;

except_clause_final
    : EXCEPT '(' ')' func_body {
            TRACE("except_clause_final:()func_body");
        }
    | EXCEPT func_body {
            TRACE("except_clause_final:func_body");
        }
    ;

except_clause_list
    : except_clause_intermediate_list
    | except_clause_intermediate_list except_clause_final
    | except_clause_final
    ;

try_statement
    : TRY '{' func_body_statement_list '}' except_clause_list {
            TRACE("try_statement:except_clause_list");
        }
    ;

else_clause
    : ELSE '(' expression ')' {
            TRACE("else_clause:ELSE(expression)");
        } func_body {
            TRACE("else_clause:func_body");
        }
    ;

else_clause_intermediate_list
    : else_clause {
            TRACE("else_clause_intermediate_list:CREATE");
        }
    | else_clause_intermediate_list else_clause {
            TRACE("else_clause_intermediate_list:ADD");
        }
    ;

else_clause_final
    : ELSE '(' ')' func_body {
            TRACE("else_clause_final:ELSE() func_body");
        }
    | ELSE func_body {
            TRACE("else_clause_final:ELSE func_body");
        }
    ;

else_clause_list
    : else_clause_intermediate_list
    | else_clause_intermediate_list else_clause_final
    | else_clause_final
    ;

if_clause
    : IF '(' expression ')' func_body {
            TRACE("if_clause:func_body");
        }
    ;

if_statement
    : if_clause {
            TRACE("if_statement:if_clause");
        }
    | if_clause else_clause_list {
            TRACE("if_statement:if_clause:else_clause_list");
        }
    ;

for_statement
    : FOR '(' SYMBOL IN compound_name ')' loop_body {
            TRACE("for_statement:loop_body");
        }
    ;

while_statement
    : WHILE '(' expression ')' loop_body {
            TRACE("while_statement:loop_body");
        }
    ;

case_clause
    : CASE constant_expression func_body {
            TRACE("case_clause:func_body");
        }
    ;

case_clause_intermediate_list
    : case_clause {
            TRACE("case_clause_intermediate_list:CREATE");
        }
    | case_clause_intermediate_list case_clause {
            TRACE("case_clause_intermediate_list:ADD");
        }
    ;

case_clause_list
    : case_clause_intermediate_list  {
            TRACE("case_clause_list:case_clause_intermediate_list");
        }
    | case_clause_intermediate_list DEFAULT func_body  {
            TRACE("case_clause_list:case_clause_intermediate_list:DEFAULT:func_body");
        }
    ;

switch_statement
    : SWITCH '(' compound_name ')' '{' case_clause_list '}'  {
            TRACE("switch_statement");
        }
    ;

do_statement
    : DO loop_body WHILE '(' expression ')' {
            TRACE("do_statement");
        }
    ;

constant_expression
    : LNUM {
            TRACE("constant_expression:LNUM");
            $$ = createConstNum($1);
        }
    | TRUE {
            TRACE("constant_expression:TRUE");
            $$ = createConstBool(true);
        }
    | FALSE {
            TRACE("constant_expression:FALSE");
            $$ = createConstBool(false);
        }
    | STRG {
            TRACE("constant_expression:STRG");
            $$ = createConstBool($1);
        }
    ;

    /* This is num for array references. Dict references have a string.
    Other kinds of values are syntax error */
array_parameter
    : '[' expression_factor ']' {
            TRACE("array_parameter:[expression_factor]");
        }
    | '[' array_parameter ']' {
            TRACE("array_parameter:array_parameter");
        }
    ;

array_parameter_list
    : array_parameter {
            TRACE("array_parameter_list:CREATE");
        }
    | array_parameter_list array_parameter {
            TRACE("array_parameter_list:ADD");
        }
    ;

array_reference
    : compound_name array_parameter_list {
            TRACE("array_reference");
        }
    ;

expression_factor
    : constant_expression {
            TRACE("expression_factor:constant_expression");
        }
    | func_reference {
            TRACE("expression_factor:func_reference");
        }
    | compound_name {
            TRACE("expression_factor:compound_name");
        }
    | array_reference {
            TRACE("expression_factor:array_reference");
        }
    ;

expression
    : expression_factor {
            TRACE("expression:expression_factor");
        }
    | expression '+' expression {
            TRACE("expression:+");
        }
    | expression '-' expression {
            TRACE("expression:-");
        }
    | expression '*' expression {
            TRACE("expression:*");
        }
    | expression '/' expression {
            TRACE("expression:/");
        }
    | expression '%' expression {
            TRACE("expression:%%");
        }
    | expression EQU expression {
            TRACE("expression:EQU");
        }
    | expression NEQU expression {
            TRACE("expression:NEQU");
        }
    | expression LORE expression {
            TRACE("expression:LORE");
        }
    | expression GORE expression {
            TRACE("expression:GORE");
        }
    | expression OR expression {
            TRACE("expression:OR");
        }
    | expression AND expression {
            TRACE("expression:AND");
        }
    | expression '<' expression {
            TRACE("expression:<");
        }
    | expression '>' expression {
            TRACE("expression:>");
        }
    | '-' expression %prec NEGATE {
            TRACE("expression:- (NEGATE)");
        }
    | '!' expression %prec NEGATE {
            TRACE("expression:!");
        }
    | '(' expression ')'
    |  cast_specifier expression %prec CAST {
            TRACE("cast_expression:expression");
        }
    ;

expression_list
    : /* empty */
    | expression {
            TRACE("expression_list:CREATE");
        }
    | expression_list ',' expression {
            TRACE("expression_list:ADD");
        }
    ;

%%

void yyerror(const char* s) {

    fprintf(stderr, "%s:%d:%d %s\n", get_file_name(), get_line_no(), get_col_no(), s);
    //error("%s", s);
}

const char* tokenToStr(int tok) {
    return yysymbol_name(YYTRANSLATE(tok));
}
