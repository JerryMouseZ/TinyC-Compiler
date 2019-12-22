%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

****************************************************************************/

#include "mylexer.h"
#include<iostream>
#include "tree.h"
using namespace std;

string temp_operator;
extern int line;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE Node*
#endif
}

// place any declarations here
%token IDENTIFIER CONSTANT STRING_LITERAL
%token INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN

%token CHAR INT DOUBLE VOID
%token BOOL 
%token STRUCT UNION

%token IF ELSE WHILE DO FOR CONTINUE BREAK RETURN

%start translation_unit

%%
primary_expression
	: IDENTIFIER {$$ = $1;}
	| CONSTANT	{$$ = $1;}
	| STRING_LITERAL {$$ = $1;}
	| '(' expression ')' {$$ = $2;}
	;

postfix_expression
	: primary_expression	{$$ = $1;}
	| postfix_expression '[' expression ']'	{cout<<"[]";}
	| postfix_expression '(' ')'	{cout<<"()";}
	| postfix_expression '(' argument_expression_list ')'	{cout<<"arguement list"<<endl;}
	| postfix_expression '.' IDENTIFIER	{
		// 结构操作，取出该结构的成员
		cout<<"."<<endl;
	}
	| postfix_expression INC_OP {
		$$ = generate_expr_node();
		$$->children[0]=$1;
		$$->code = $1->code 
				+ "\tmov eax, " + glbtemp[$1->it] + "\n"
				+ "\tinc eax" + "\n"
				+ "\tmov [ebp - " + to_string(main_map[$1->val]) + "], eax" + "\n";
		$$->it = $1->it;
		$$->sort = $1->sort;
	}
	| postfix_expression DEC_OP {
		$$ = generate_expr_node();
		$$->children[0]=$1;
		$$->code = $1->code 
				+ "\tmov eax, " + glbtemp[$1->it] + "\n"
				+ "\tdec eax" + "\n"
				+ "\tmov [ebp - " + to_string(main_map[$1->val]) + "], eax" + "\n";
		$$->it = $1->it;
		$$->sort = $1->sort;
	}
	;

argument_expression_list
	: assignment_expression {

	}
	| argument_expression_list ',' assignment_expression {

	}
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression {
		$$ = generate_expr_node();
		$$->children[0]=$2;
		$$->code = $2->code 
				+ "\tmov eax, " + glbtemp[$2->it] + "\n"
				+ "\tinc eax" + "\n"
				+ "\tmov " + glbtemp[$2->it] + ", eax" + "\n"
				+ "\tmov [ebp - " + to_string(main_map[$2->val]) + "], eax" + "\n";
		$$->it = $2->it;
		$$->sort = $2->sort;
	}
	| DEC_OP unary_expression {
		$$ = generate_expr_node();
		$$->children[0]=$2;
		$$->code = $2->code 
				+ "\tmov eax, " + glbtemp[$2->it] + "\n"
				+ "\tdec eax" + "\n"
				+ "\tmov " + glbtemp[$2->it] + ", eax" + "\n"
				+ "\tmov [ebp - " + to_string(main_map[$2->val]) + "], eax" + "\n";
		$$->it = $2->it;
		$$->sort = $2->sort;
	}
	| unary_operator unary_expression {
		//一堆前缀单目运算符，先给出一种
		
	}
	;

unary_operator
	: '&' {temp_operator = "&";}
	| '*' {temp_operator = "*";}
	| '-' {temp_operator = "-";}
	| '~' {temp_operator = "~";}
	| '!' {temp_operator = "!";}
	;

multiplicative_expression
	: unary_expression {$$ = $1;}
	| multiplicative_expression '*' unary_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		if($$->v_type==Double){
			$$ += generate_double_code($1,$2,"*");
		}
		else{
			$$->code += generate_expr_code($1,$2,"*");
		}
		$$->it = $3->it;

	}
	| multiplicative_expression '/' unary_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		if($$->v_type==Double){
			$$ += generate_double_code($1,$2,"/");
		}
		else{
			$$->code += generate_expr_code($1,$2,"/");
		}
		$$->it = $3->it;
	}
	| multiplicative_expression '%' unary_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		$$->code += generate_expr_code($1,$2,"%");
		$$->it = $3->it;
	}
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression	{
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
		// 下面根据+号给出语法制导翻译，翻译出二者的句子
		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		if($$->v_type==Double){
			$$ += generate_double_code($1,$2,"+");
		}
		else{
			$$->code += generate_expr_code($1,$2,"+");
		}
		$$->it = $3->it;
	}
	| additive_expression '-' multiplicative_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		if($$->v_type==Double){
			$$ += generate_double_code($1,$2,"-");
		}
		else{
			$$->code += generate_expr_code($1,$2,"-");
		}
		$$->it = $3->it;
	}
	;

shift_expression
	: additive_expression	{$$ = $1;}
	| shift_expression LEFT_OP additive_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		$$->code += generate_expr_code($1,$2,"<<");
		}
		$$->it = $3->it;

	}
	| shift_expression RIGHT_OP additive_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		$$->code += generate_expr_code($1,$2,">>");
		}
		$$->it = $3->it;
	}
	;

relational_expression
	: shift_expression	{$$ = $1;}
	| relational_expression '<' shift_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	| relational_expression '>' shift_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	| relational_expression LE_OP shift_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	| relational_expression GE_OP shift_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	| equality_expression NE_OP relational_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression '&' equality_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		$$->code += generate_expr_code($1,$2,"&");
		}
		$$->it = $3->it;
	}
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression '^' and_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		$$->code += generate_expr_code($1 , $2, "^");
		}
		$$->it = $3->it;
	}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;

		if($1->v_type != $3->v_type)
		{
			$$->state = Type_Err;
			cout<<"wrong at line: "<<line<<endl;
		}
		else
			$$->v_type = $1->v_type;
		$$->code = $1->code + $3->code;
		$$->code += generate_expr_code($1,$2,"|");
		}
		$$->it = $3->it;
	}
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {
		$$ = generate_expr_node();
		$$->children[0] = $1;
		$$->children[1] = $3;
		$1->sibing = $3;
	}
	;


assignment_expression
	: logical_or_expression {$$ = $1;}
	| unary_expression assignment_operator assignment_expression {
		//怎么拿到变量的标识符呢
		// $$ = new Node();
		// $$->op = $2;
		
	}
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: logical_or_expression
	;

declaration
	: declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator {
		// a
	}
	| declarator '=' initializer {
		// a=1
		// 这里不应该使用赋值语句，而是存进变量表中节点的初始值
	}
	;


type_specifier
	: VOID
	| CHAR
	| INT
	| DOUBLE
	| BOOL
	| struct_or_union_specifier
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'	{
		//cout<<"struct!"<<endl;
	}
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;



declarator
	: pointer direct_declarator {
		// declarator *a

	}
	| direct_declarator {
		// a

	}
	;


direct_declarator
	: IDENTIFIER {
		$$ = $1;
		$$ = generate_ID_Node();
	}
	| '(' declarator ')'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' pointer
	;

parameter_type_list
	: parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER {

	}
	| identifier_list ',' IDENTIFIER {

	}
	;


abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '[' '*' ']'
	| direct_abstract_declarator '[' '*' ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| designation initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'	{printf("designator");}
	| '.' IDENTIFIER
	;

statement
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;



compound_statement
	: '{' '}'
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {

	}
	| declaration_specifiers declarator compound_statement {

	}			
	;

declaration_list
	: declaration {

	}
	| declaration_list declaration {

	}
	;

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)


%%
#include <stdio.h>
#include<fstream>
using namespace std;
extern char yytext[];
extern int column;

void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
/////////////////////////////////////////////////////////////////////////////
// programs section

int main(int argc, char*argv[])
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			// 最后测试成功了以后再改文件
			// lexer.yyin = new ifstream(argv[1]);
			// lexer.yyout = new ofstream(argv[2]);
			n = parser.yyparse();
			// parse_tree.get_label();
			// parse_tree.gen_code(*lexer.yyout);
		}
	}
	system("pause");
	return n;
}

