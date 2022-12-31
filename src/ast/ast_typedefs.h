/**
 * @file ast_typedefs.h
 *
 * This is the group include for all of the AST modules.
 */
#ifndef _AST_TYPEDEFS_H_
#define _AST_TYPEDEFS_H_

/*
 * Typedefs.
 */
typedef struct _module_ Module;
typedef struct _module_list_ ModuleList;
typedef struct _compound_name_ CompoundName;
typedef struct _scope_operator_ ScopeOperator;
typedef struct _type_definition_ TypeDefinition;
typedef struct _constant_expression_ ConstantExpression;
typedef struct _symbol_type_ SymbolType;
typedef struct _cast_specifier_ CastSpecifier;
typedef struct _compound_name_in_parens_rule_ CompoundNameInParensRule;
typedef struct _array_reference_ ArrayReference;
typedef struct _expression_factor_ ExpressionFactor;
typedef struct _expression_ Expression;
typedef struct _expression_list_ ExpressionList;
typedef struct _expression_in_parens_rule_ ExpressionInParensRule;
typedef struct _expression_list_in_parens_ ExpressionListInParens;
typedef struct _func_reference_ FuncReference;
typedef struct _namespace_definition_ NamespaceDefinition;
typedef struct _class_name_parent_ ClassNameParent;
typedef struct _class_name_ ClassName;
typedef struct _class_definition_ ClassDefinition;
typedef struct _class_definition_list_ ClassDefinitionList;
typedef struct _empty_parens_rule_ EmptyParensRule;
typedef struct _func_decl_parameter_list_ FuncDeclParameterList;
typedef struct _constructor_decl_ ConstructorDecl;
typedef struct _destructor_decl_ DestructorDecl;
typedef struct _symbol_declaration_ SymbolDeclaration;
typedef struct _struct_declaration_ StructDeclaration;
typedef struct _struct_body_ StructBody;
typedef struct _method_declaration_ MethodDeclaration;
typedef struct _parameter_def_list_ ParameterDefList;
typedef struct _parameter_decl_element_ ParameterDeclElement;
typedef struct _parameter_decl_list_ ParameterDeclList;
typedef struct _array_initializer_ ArrayInitializer;
typedef struct _dict_init_item_ DictInitItem;
typedef struct _dict_init_element_ DictInitElement;
typedef struct _dict_init_list_ DictInitList;
typedef struct _dict_initializer_ DictInitializer;
typedef struct _initialzer_ Initialzer;
typedef struct _data_definition_ DataDefinition;
typedef struct _func_def_parameter_list_ FuncDefParameterList;
typedef struct _func_body_statement_list_ FuncBodyStatementList;
typedef struct _func_body_ FuncBody;
typedef struct _func_definition_ FuncDefinition;
typedef struct _break_statement_ BreakStatement;
typedef struct _continue_statement_ ContinueStatement;
typedef struct _yield_statement_ YieldStatement;
typedef struct _loop_body_statement_ LoopBodyStatement;
typedef struct _loop_body_statement_list_ LoopBodyStatementList;
typedef struct _loop_body_ LoopBody;
typedef struct _except_clause_ ExceptClause;
typedef struct _except_clause_intermediate_list_ ExceptClauseIntermediateList;
typedef struct _except_clause_final_ ExceptClauseFinal;
typedef struct _except_clause_list_ ExceptClauseList;
typedef struct _try_statement_ TryStatement;
typedef struct _else_clause_ ElseClause;
typedef struct _else_clause_intermediate_list_ ElseClauseIntermediateList;
typedef struct _else_clause_final_ ElseClauseFinal;
typedef struct _else_clause_list_ ElseClauseList;
typedef struct _if_clause_ IfClause;
typedef struct _if_statement_ IfStatement;
typedef struct _for_statement_ ForStatement;
typedef struct _while_statement_ WhileStatement;
typedef struct _case_clause_ CaseClause;
typedef struct _case_clause_intermediate_list_ CaseClauseIntermediateList;
typedef struct _case_clause_list_ CaseClauseList;
typedef struct _switch_statement_ SwitchStatement;
typedef struct _do_statement_ DoStatement;
typedef struct _array_parameter_ ArrayParameter;
typedef struct _array_parameter_list_ ArrayParameterList;
typedef struct _class_definition_item_ ClassDefinitionItem;
typedef struct _module_item_ ModuleItem;
typedef struct _trace_statement_ TraceStatement;
typedef struct _return_statement_ ReturnStatement;
typedef struct _print_statement_ PrintStatement;
typedef struct _exit_statement_ ExitStatement;
typedef struct _raise_statement_ RaiseStatement;
typedef struct _type_statement_ TypeStatement;
typedef struct _func_body_statement_ FuncBodyStatement;

#endif /* _AST_TYPEDEFS_H_ */

