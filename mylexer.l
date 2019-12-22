%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

****************************************************************************/
#pragma  once 
#include "myparser.h"
#include<sstream>
#include<string>
int line = 0;

extern class Node;
extern Node* generate_const_node();
extern unordered_map<string, string> ID_Table; // 指示ID是普通变量，结构，还是函数
extern unordered_map<string, VarEntry> Var_Table; // 存储普通变量的类型和初始值
extern unordered_map<string, StructEntry> Struct_Table;// 存储结构体的
extern unordered_map<string, FuncEntry> Fuction_Table;// 存储函数定义
void count(char*section);
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

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

// place any declarations here
D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			([Ee][+-]?{D}+)


%%

/////////////////////////////////////////////////////////////////////////////
// rules section


%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here

"//".*			{}
("/*"(([^\*]"/")|([^\/]"*")|([^\/\*]))*"*/") {count(yytext);}
"bool"			{ return(BOOL); }
"break"			{ return(BREAK); }
"char"			{ return(CHAR); }
"continue"		{ return(CONTINUE); }
"do"			{ return(DO); }
"else"			{ return(ELSE); }
"double"		{ return(DOUBLE); }
"for"			{ return(FOR); }
"if"			{ return(IF); }
"int"			{ return(INT); }
"return"		{ return(RETURN); }
"struct"		{ return(STRUCT); }
"union"			{ return(UNION); }
"void"			{ return(VOID); }
"while"			{ return(WHILE); }

{L}({L}|{D})*			{ 
							// 如果找到类型了，应当给这个标识符类型，否则就是空类型
							// check_type(yytext);
							yylval = new Node();
							yylval->nd_type = ID_t;
							yylval->v_type = None;
							// ID的名字存储在了temp_name中
							yylval->temp_name = yytext;
							return(IDENTIFIER); 
						}

0[xX]{H}+				{ 
							// 16进制整数
							stringstream ss;
							ss<<yytext;
							int temp;
							ss>>hex>>temp;
							yylval = generate_expr_node();
							yylval->v_type = Integer;
							yylval->value.ivalue = temp;
							return(CONSTANT);
						}
0[0-7]*					{ 
							// 8进制整数
							stringstream ss;
							ss<<yytext;
							int temp;
							ss>>oct>>temp;
							yylval = generate_expr_node();
							yylval->v_type = Integer;
							yylval->value.ivalue = temp;
							return(CONSTANT); 
						}
[1-9]{D}*				{ 
							// 10进制整数
							stringstream ss;
							ss<<yytext;
							int temp;
							ss>>dec>>temp;
							yylval = generate_expr_node();
							yylval->v_type = Integer;
							yylval->value.ivalue = temp;
							return(CONSTANT); 
						}


{D}+{E}					{ 
							// 3e8 科学计数法
							stringstream ss;
							ss<<yytext;
							double temp;
							ss>>temp;
							yylval = generate_expr_node();
							yylval->v_type = Double;
							yylval->value.fvalue = temp;
							return(CONSTANT); 
						}
{D}*"."{D}+{E}?			{ 
							// 1.23e4  科学计数法
							stringstream ss;
							ss<<yytext;
							double temp;
							ss>>temp;
							yylval = generate_expr_node();
							yylval->v_type = Double;
							yylval->value.fvalue = temp;
							return(CONSTANT); 
						}



L?\"(\\.|[^\\"\n])*\"	{ 
							// 字符串常量
							stringstream ss;
							ss<<yytext;
							string temp;
							ss>>temp;
							yylval = generate_const_node();
							yylval->svalue = temp;
							yylval->v_type = String;
							return(STRING_LITERAL); 
						}

">>="			{ return(RIGHT_ASSIGN); }
"<<="			{ return(LEFT_ASSIGN); }
"+="			{ return(ADD_ASSIGN); }
"-="			{ return(SUB_ASSIGN); }
"*="			{ return(MUL_ASSIGN); }
"/="			{ return(DIV_ASSIGN); }
"%="			{ return(MOD_ASSIGN); }
"&="			{ return(AND_ASSIGN); }
"^="			{ return(XOR_ASSIGN); }
"|="			{ return(OR_ASSIGN); }
">>"			{ return(RIGHT_OP); }
"<<"			{ return(LEFT_OP); }
"++"			{ return(INC_OP); }
"--"			{ return(DEC_OP); }
"&&"			{ return(AND_OP); }
"||"			{ return(OR_OP); }
"<="			{ return(LE_OP); }
">="			{ return(GE_OP); }
"=="			{ return(EQ_OP); }
"!="			{ return(NE_OP); }
";"				{ return(';'); }
("{"|"<%")		{ return('{'); }
("}"|"%>")		{ return('}'); }
","				{ return(','); }
":"				{ return(':'); }
"="				{ return('='); }
"("				{ return('('); }
")"				{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>")		{ return(']'); }
"."				{ return('.'); }
"&"				{ return('&'); }
"!"				{ return('!'); }
"-"				{ return('-'); }
"+"				{ return('+'); }
"*"				{ return('*'); }
"/"				{ return('/'); }
"%"				{ return('%'); }
"<"				{ return('<'); }
">"				{ return('>'); }
"^"				{ return('^'); }
"|"				{ return('|'); }
[ \t\v\n\f]		{ count(yytext); }
.			{ /* Add code to complain about unmatched characters */ }

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int yywrap(void)
{
	return 1;
}


// 用来计算行号给出错误信息
int column = 0;

void check_type(char*id){
	;
}

void count(char*section){
	for(int i=0;section[i]!='\0',i++){
		if(section[i]=='\0')
			line++;
	}
}


// 检查标识符的类型，留着以后有用
// int check_type(void)
// {
// /*
// * pseudo code --- this is what it should check
// *
// *	if (yytext == type_name)
// *		return TYPE_NAME;
// *
// *	return IDENTIFIER;
// */

// /*
// *	it actually will only return IDENTIFIER
// */

// 	return IDENTIFIER;
// }


