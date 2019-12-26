/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 95 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 12/26/19
* Time: 09:54:17
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

****************************************************************************/
#pragma  once 
#include "myparser.h"
#include<sstream>
#include<string>

extern class Node;
extern Node* generate_const_node();
extern enum VALUE_TYPE;
extern enum ID_TYPE;
extern enum NODE_TYPE;
unordered_map<string, string> ID_Table;
unordered_map<string, VarEntry> Var_Table;
unordered_map<string, VALUE_TYPE> Temp_Table;
unordered_map<string, StructEntry> Struct_Table;
unordered_map<string, FuncEntry> Function_Table;
unordered_map<string, PointerEntry> Pointer_Table;
int line = 1;
void countline(char*dd);
extern Node* check_type(char *id);

#line 65 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 40 ".\\mylexer.l"

	// place any extra initialisation code here

#line 89 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 45 ".\\mylexer.l"

	// place any extra cleanup code here

#line 101 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 62 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 172 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 69 ".\\mylexer.l"

#line 179 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 70 ".\\mylexer.l"
countline(yytext);
#line 186 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 71 ".\\mylexer.l"
 return(BOOL); 
#line 193 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 72 ".\\mylexer.l"
 return(BREAK); 
#line 200 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 73 ".\\mylexer.l"
 return(CHAR); 
#line 207 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 74 ".\\mylexer.l"
 return(CONTINUE); 
#line 214 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 75 ".\\mylexer.l"
 return(DO); 
#line 221 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 76 ".\\mylexer.l"
 return(ELSE); 
#line 228 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 77 ".\\mylexer.l"
 return(DOUBLE); 
#line 235 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 78 ".\\mylexer.l"
 return(FOR); 
#line 242 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 79 ".\\mylexer.l"
 return(IF); 
#line 249 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 80 ".\\mylexer.l"
 return(INT); 
#line 256 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 81 ".\\mylexer.l"
 return(RETURN); 
#line 263 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 82 ".\\mylexer.l"
 return(STRUCT); 
#line 270 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 83 ".\\mylexer.l"
 return(UNION); 
#line 277 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 84 ".\\mylexer.l"
 return(VOID); 
#line 284 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 85 ".\\mylexer.l"
 return(WHILE); 
#line 291 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 87 ".\\mylexer.l"
 
							// 如果找到类型了，应当给这个标识符类型，否则就是空类型
							yylval = check_type(yytext);
							// ID的名字存储在了name中
							return(IDENTIFIER); 
						
#line 303 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 94 ".\\mylexer.l"
 
							// 16进制整数
							stringstream ss;
							ss<<yytext;
							int temp;
							ss>>hex>>temp;
							yylval = generate_const_node();
							yylval->v_type = Integer;
							yylval->ivalue = temp;
							return(CONSTANT);
						
#line 320 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 105 ".\\mylexer.l"
 
							// 8进制整数
							stringstream ss;
							ss<<yytext;
							int temp;
							ss>>oct>>temp;
							yylval = generate_const_node();
							yylval->v_type = Integer;
							yylval->ivalue = temp;
							return(CONSTANT); 
						
#line 337 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 116 ".\\mylexer.l"
 
							// 10进制整数
							stringstream ss;
							ss<<yytext;
							int temp;
							ss>>dec>>temp;
							yylval = generate_const_node();
							yylval->v_type = Integer;
							yylval->ivalue = temp;
							return(CONSTANT); 
						
#line 354 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 127 ".\\mylexer.l"
 
							yylval = generate_const_node();
							yylval->v_type = Char;
							yylval->ivalue = yytext[1];
							return(CONSTANT); 
						
#line 366 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 134 ".\\mylexer.l"
 
							// 3e8 科学计数法
							stringstream ss;
							ss<<yytext;
							double temp;
							ss>>temp;
							yylval = generate_const_node();
							yylval->v_type = Double;
							yylval->fvalue = temp;
							return(CONSTANT); 
						
#line 383 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 145 ".\\mylexer.l"
 
							// 1.23e4  科学计数法
							stringstream ss;
							ss<<yytext;
							double temp;
							ss>>temp;
							yylval = generate_const_node();
							yylval->v_type = Double;
							yylval->fvalue = temp;
							return(CONSTANT); 
						
#line 400 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 159 ".\\mylexer.l"
 
							// 字符串常量
							stringstream ss;
							ss<<yytext;
							string temp;
							ss>>temp;
							temp = temp.substr(1, temp.size()-2);
							yylval = generate_const_node();
							yylval->svalue = temp;
							yylval->v_type = String;
							return(STRING_LITERAL); 
						
#line 418 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 173 ".\\mylexer.l"
 return(RIGHT_ASSIGN); 
#line 425 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 174 ".\\mylexer.l"
 return(LEFT_ASSIGN); 
#line 432 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 175 ".\\mylexer.l"
 return(ADD_ASSIGN); 
#line 439 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 176 ".\\mylexer.l"
 return(SUB_ASSIGN); 
#line 446 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 177 ".\\mylexer.l"
 return(MUL_ASSIGN); 
#line 453 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 178 ".\\mylexer.l"
 return(DIV_ASSIGN); 
#line 460 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 179 ".\\mylexer.l"
 return(MOD_ASSIGN); 
#line 467 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 180 ".\\mylexer.l"
 return(AND_ASSIGN); 
#line 474 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 181 ".\\mylexer.l"
 return(XOR_ASSIGN); 
#line 481 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 182 ".\\mylexer.l"
 return(OR_ASSIGN); 
#line 488 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 183 ".\\mylexer.l"
 return(RIGHT_OP); 
#line 495 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 184 ".\\mylexer.l"
 return(LEFT_OP); 
#line 502 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 185 ".\\mylexer.l"
 return(INC_OP); 
#line 509 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 186 ".\\mylexer.l"
 return(DEC_OP); 
#line 516 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 187 ".\\mylexer.l"
 return(AND_OP); 
#line 523 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 188 ".\\mylexer.l"
 return(OR_OP); 
#line 530 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 189 ".\\mylexer.l"
 return(LE_OP); 
#line 537 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 190 ".\\mylexer.l"
 return(GE_OP); 
#line 544 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 191 ".\\mylexer.l"
 return(EQ_OP); 
#line 551 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 192 ".\\mylexer.l"
 return(NE_OP); 
#line 558 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 193 ".\\mylexer.l"
 return(';'); 
#line 565 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 194 ".\\mylexer.l"
 return('{'); 
#line 572 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 195 ".\\mylexer.l"
 return('}'); 
#line 579 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 196 ".\\mylexer.l"
 return(','); 
#line 586 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 197 ".\\mylexer.l"
 return(':'); 
#line 593 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 198 ".\\mylexer.l"
 return('='); 
#line 600 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 199 ".\\mylexer.l"
 return('('); 
#line 607 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 200 ".\\mylexer.l"
 return(')'); 
#line 614 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 201 ".\\mylexer.l"
 return('['); 
#line 621 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 202 ".\\mylexer.l"
 return(']'); 
#line 628 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 203 ".\\mylexer.l"
 return('.'); 
#line 635 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 204 ".\\mylexer.l"
 return('&'); 
#line 642 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 205 ".\\mylexer.l"
 return('!'); 
#line 649 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 206 ".\\mylexer.l"
 return('-'); 
#line 656 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 207 ".\\mylexer.l"
 return('+'); 
#line 663 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 208 ".\\mylexer.l"
 return('*'); 
#line 670 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 209 ".\\mylexer.l"
 return('/'); 
#line 677 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 210 ".\\mylexer.l"
 return('%'); 
#line 684 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 211 ".\\mylexer.l"
 return('<'); 
#line 691 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 212 ".\\mylexer.l"
 return('>'); 
#line 698 "mylexer.cpp"
		}
		break;
	case 66:
		{
#line 213 ".\\mylexer.l"
 return('^'); 
#line 705 "mylexer.cpp"
		}
		break;
	case 67:
		{
#line 214 ".\\mylexer.l"
 return('|'); 
#line 712 "mylexer.cpp"
		}
		break;
	case 68:
		{
#line 215 ".\\mylexer.l"
 countline(yytext); 
#line 719 "mylexer.cpp"
		}
		break;
	case 69:
		{
#line 216 ".\\mylexer.l"
 /* Add code to complain about unmatched characters */ 
#line 726 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 395;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 4, 1 },
		{ 4, 1 },
		{ 49, 8 },
		{ 57, 15 },
		{ 61, 17 },
		{ 45, 26 },
		{ 55, 13 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 59, 63 },
		{ 74, 30 },
		{ 62, 17 },
		{ 58, 15 },
		{ 75, 30 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 56, 13 },
		{ 50, 8 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 0, 130 },
		{ 88, 42 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 27, 1 },
		{ 90, 130 },
		{ 28, 1 },
		{ 29, 1 },
		{ 25, 1 },
		{ 0, 47 },
		{ 25, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 35, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 36, 1 },
		{ 37, 1 },
		{ 25, 1 },
		{ 38, 1 },
		{ 39, 1 },
		{ 40, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 25, 1 },
		{ 41, 1 },
		{ 42, 1 },
		{ 43, 1 },
		{ 0, 9 },
		{ 89, 42 },
		{ 63, 65 },
		{ 91, 52 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 65, 65 },
		{ 81, 35 },
		{ 114, 92 },
		{ 76, 31 },
		{ 114, 92 },
		{ 0, 53 },
		{ 53, 130 },
		{ 67, 18 },
		{ 92, 59 },
		{ 82, 35 },
		{ 77, 31 },
		{ 73, 29 },
		{ 66, 65 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 67, 18 },
		{ 92, 59 },
		{ 96, 66 },
		{ 95, 60 },
		{ 96, 66 },
		{ 66, 65 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 52, 9 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 60, 94 },
		{ 94, 117 },
		{ 48, 7 },
		{ 43, 7 },
		{ 0, 61 },
		{ 118, 94 },
		{ 117, 117 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 46, 45 },
		{ 71, 24 },
		{ 72, 24 },
		{ 28, 20 },
		{ 25, 144 },
		{ 54, 12 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 25, 144 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 41, 22 },
		{ 78, 32 },
		{ 79, 33 },
		{ 99, 68 },
		{ 100, 74 },
		{ 101, 75 },
		{ 102, 76 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 103, 77 },
		{ 104, 78 },
		{ 105, 79 },
		{ 47, 45 },
		{ 106, 80 },
		{ 107, 82 },
		{ 108, 83 },
		{ 109, 84 },
		{ 27, 22 },
		{ 110, 85 },
		{ 68, 22 },
		{ 69, 22 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 115, 115 },
		{ 111, 86 },
		{ 112, 87 },
		{ 113, 91 },
		{ 80, 34 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 98, 98 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 19, 19 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 97, 97 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 64, 64 },
		{ 116, 93 },
		{ 70, 23 },
		{ 83, 36 },
		{ 84, 37 },
		{ 119, 100 },
		{ 120, 101 },
		{ 121, 102 },
		{ 122, 103 },
		{ 123, 104 },
		{ 124, 105 },
		{ 125, 108 },
		{ 126, 109 },
		{ 127, 110 },
		{ 128, 111 },
		{ 129, 112 },
		{ 130, 113 },
		{ 85, 38 },
		{ 131, 116 },
		{ 86, 39 },
		{ 132, 120 },
		{ 133, 122 },
		{ 134, 123 },
		{ 135, 125 },
		{ 136, 126 },
		{ 137, 127 },
		{ 138, 129 },
		{ 87, 40 },
		{ 60, 131 },
		{ 139, 133 },
		{ 140, 134 },
		{ 141, 135 },
		{ 142, 136 },
		{ 143, 139 },
		{ 144, 143 },
		{ 44, 5 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 69 },
		{ 0, 0, 68 },
		{ 0, 333, 58 },
		{ 45, 0, 69 },
		{ 0, 153, 63 },
		{ 0, -33, 57 },
		{ 130, 79, 69 },
		{ 0, 0, 52 },
		{ 0, 0, 53 },
		{ 0, 189, 61 },
		{ 0, -34, 60 },
		{ 0, 0, 49 },
		{ 0, -39, 59 },
		{ 63, 0, 56 },
		{ 94, -40, 62 },
		{ 64, 50, 20 },
		{ 65, 284, 21 },
		{ 0, 186, 50 },
		{ 0, 0, 46 },
		{ 0, 250, 64 },
		{ 0, 300, 51 },
		{ 0, 185, 65 },
		{ 144, 0, 18 },
		{ 144, -26, 18 },
		{ 0, 0, 54 },
		{ 0, 0, 55 },
		{ 0, 81, 66 },
		{ 144, -91, 18 },
		{ 144, 30, 18 },
		{ 144, 177, 18 },
		{ 144, 181, 18 },
		{ 144, 214, 18 },
		{ 144, 30, 18 },
		{ 144, 261, 18 },
		{ 144, 247, 18 },
		{ 144, 266, 18 },
		{ 144, 267, 18 },
		{ 144, 282, 18 },
		{ 0, 0, 47 },
		{ 0, -5, 67 },
		{ 0, 0, 48 },
		{ 0, 0, 45 },
		{ 47, 211, 0 },
		{ 0, 0, 25 },
		{ -45, 78, 0 },
		{ 0, 0, 32 },
		{ 0, 0, 40 },
		{ 0, 0, 33 },
		{ 130, 0, 0 },
		{ 130, 59, 0 },
		{ -51, 126, 0 },
		{ 0, 0, 30 },
		{ 0, 0, 38 },
		{ 0, 0, 28 },
		{ 0, 0, 39 },
		{ 0, 0, 29 },
		{ 63, 70, 24 },
		{ 117, 126, 0 },
		{ -61, 206, 1 },
		{ 0, 0, 31 },
		{ 0, -38, 0 },
		{ 65, 304, 20 },
		{ 0, 74, 0 },
		{ 97, 129, 0 },
		{ 98, 0, 0 },
		{ 0, 229, 37 },
		{ 0, 0, 42 },
		{ 0, 0, 44 },
		{ 0, 0, 43 },
		{ 0, 0, 36 },
		{ 0, 0, 34 },
		{ 144, 180, 18 },
		{ 144, 191, 18 },
		{ 144, 196, 18 },
		{ 144, 190, 18 },
		{ 144, 184, 7 },
		{ 144, 187, 18 },
		{ 144, 190, 18 },
		{ 144, 0, 11 },
		{ 144, 189, 18 },
		{ 144, 190, 18 },
		{ 144, 193, 18 },
		{ 144, 204, 18 },
		{ 144, 217, 18 },
		{ 144, 218, 18 },
		{ 0, 0, 35 },
		{ 0, 0, 41 },
		{ 0, 0, 22 },
		{ 130, 262, 0 },
		{ 115, 90, 0 },
		{ 117, 318, 0 },
		{ 0, 170, 0 },
		{ 131, 0, 0 },
		{ 97, 0, 0 },
		{ 0, 294, 23 },
		{ 0, 229, 19 },
		{ 0, 0, 27 },
		{ 144, 256, 18 },
		{ 144, 268, 18 },
		{ 144, 252, 18 },
		{ 144, 251, 18 },
		{ 144, 270, 18 },
		{ 144, 268, 18 },
		{ 144, 0, 10 },
		{ 144, 0, 12 },
		{ 144, 253, 18 },
		{ 144, 254, 18 },
		{ 144, 261, 18 },
		{ 144, 273, 18 },
		{ 144, 266, 18 },
		{ 130, 314, 0 },
		{ 115, 0, 0 },
		{ 0, 264, 24 },
		{ 93, 330, 0 },
		{ -93, 171, 0 },
		{ 0, 0, 2 },
		{ 144, 0, 3 },
		{ 144, 272, 18 },
		{ 144, 0, 5 },
		{ 144, 275, 18 },
		{ 144, 273, 18 },
		{ 144, 0, 8 },
		{ 144, 268, 18 },
		{ 144, 284, 18 },
		{ 144, 274, 18 },
		{ 144, 0, 16 },
		{ 144, 284, 18 },
		{ -51, 45, 26 },
		{ 0, 340, 2 },
		{ 144, 0, 4 },
		{ 144, 278, 18 },
		{ 144, 288, 18 },
		{ 144, 280, 18 },
		{ 144, 275, 18 },
		{ 144, 0, 15 },
		{ 144, 0, 17 },
		{ 144, 275, 18 },
		{ 144, 0, 9 },
		{ 144, 0, 13 },
		{ 144, 0, 14 },
		{ 144, 292, 18 },
		{ 0, 154, 6 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 218 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section

int yywrap(void)
{
	return 1;
}


// 用来计算行号给出错误信息
int column = 0;


void countline(char * dd){
	for(int i=0;dd[i]!=0;i++){
		if(dd[i]=='\n')
			line++;
	}
}
// 至于这个行号记不记只是检查的时候有用，可以不管了
// void count(char*yytext)
// {
// 	int i;

// 	for (i = 0; yytext[i] != '\0'; i++)
// 		if (yytext[i] == '\n')
// 			column = 0;
// 		else if (yytext[i] == '\t')
// 			column += 8 - (column % 8);
// 		else
// 			column++;

// 	// ECHO;
// }

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



