/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 93 of your 30 day trial period.
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
* Date: 12/24/19
* Time: 12:23:24
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
extern union Value;
unordered_map<string, string> ID_Table;
unordered_map<string, VarEntry> Var_Table;
unordered_map<string, StructEntry> Struct_Table;
unordered_map<string, FuncEntry> Fuction_Table;
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
							yylval->value.ivalue = temp;
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
							yylval->value.ivalue = temp;
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
							yylval->value.ivalue = temp;
							return(CONSTANT); 
						
#line 354 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 129 ".\\mylexer.l"
 
							// 3e8 科学计数法
							stringstream ss;
							ss<<yytext;
							double temp;
							ss>>temp;
							yylval = generate_const_node();
							yylval->v_type = Double;
							yylval->value.fvalue = temp;
							return(CONSTANT); 
						
#line 371 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 140 ".\\mylexer.l"
 
							// 1.23e4  科学计数法
							stringstream ss;
							ss<<yytext;
							double temp;
							ss>>temp;
							yylval = generate_const_node();
							yylval->v_type = Double;
							yylval->value.fvalue = temp;
							return(CONSTANT); 
						
#line 388 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 154 ".\\mylexer.l"
 
							// 字符串常量
							stringstream ss;
							ss<<yytext;
							string temp;
							ss>>temp;
							yylval = generate_const_node();
							yylval->svalue = temp;
							yylval->v_type = String;
							return(STRING_LITERAL); 
						
#line 405 "mylexer.cpp"
		}
		break;
#line 165 ".\\mylexer.l"
			
#line 410 "mylexer.cpp"
	case 25:
		{
#line 167 ".\\mylexer.l"
 return(RIGHT_ASSIGN); 
#line 415 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 168 ".\\mylexer.l"
 return(LEFT_ASSIGN); 
#line 422 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 169 ".\\mylexer.l"
 return(ADD_ASSIGN); 
#line 429 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 170 ".\\mylexer.l"
 return(SUB_ASSIGN); 
#line 436 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 171 ".\\mylexer.l"
 return(MUL_ASSIGN); 
#line 443 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 172 ".\\mylexer.l"
 return(DIV_ASSIGN); 
#line 450 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 173 ".\\mylexer.l"
 return(MOD_ASSIGN); 
#line 457 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 174 ".\\mylexer.l"
 return(AND_ASSIGN); 
#line 464 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 175 ".\\mylexer.l"
 return(XOR_ASSIGN); 
#line 471 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 176 ".\\mylexer.l"
 return(OR_ASSIGN); 
#line 478 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 177 ".\\mylexer.l"
 return(RIGHT_OP); 
#line 485 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 178 ".\\mylexer.l"
 return(LEFT_OP); 
#line 492 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 179 ".\\mylexer.l"
 return(INC_OP); 
#line 499 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 180 ".\\mylexer.l"
 return(DEC_OP); 
#line 506 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 181 ".\\mylexer.l"
 return(AND_OP); 
#line 513 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 182 ".\\mylexer.l"
 return(OR_OP); 
#line 520 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 183 ".\\mylexer.l"
 return(LE_OP); 
#line 527 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 184 ".\\mylexer.l"
 return(GE_OP); 
#line 534 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 185 ".\\mylexer.l"
 return(EQ_OP); 
#line 541 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 186 ".\\mylexer.l"
 return(NE_OP); 
#line 548 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 187 ".\\mylexer.l"
 return(';'); 
#line 555 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 188 ".\\mylexer.l"
 return('{'); 
#line 562 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 189 ".\\mylexer.l"
 return('}'); 
#line 569 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 190 ".\\mylexer.l"
 return(','); 
#line 576 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 191 ".\\mylexer.l"
 return(':'); 
#line 583 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 192 ".\\mylexer.l"
 return('='); 
#line 590 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 193 ".\\mylexer.l"
 return('('); 
#line 597 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 194 ".\\mylexer.l"
 return(')'); 
#line 604 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 195 ".\\mylexer.l"
 return('['); 
#line 611 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 196 ".\\mylexer.l"
 return(']'); 
#line 618 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 197 ".\\mylexer.l"
 return('.'); 
#line 625 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 198 ".\\mylexer.l"
 return('&'); 
#line 632 "mylexer.cpp"
		}
		break;
	case 57:
		{
#line 199 ".\\mylexer.l"
 return('!'); 
#line 639 "mylexer.cpp"
		}
		break;
	case 58:
		{
#line 200 ".\\mylexer.l"
 return('-'); 
#line 646 "mylexer.cpp"
		}
		break;
	case 59:
		{
#line 201 ".\\mylexer.l"
 return('+'); 
#line 653 "mylexer.cpp"
		}
		break;
	case 60:
		{
#line 202 ".\\mylexer.l"
 return('*'); 
#line 660 "mylexer.cpp"
		}
		break;
	case 61:
		{
#line 203 ".\\mylexer.l"
 return('/'); 
#line 667 "mylexer.cpp"
		}
		break;
	case 62:
		{
#line 204 ".\\mylexer.l"
 return('%'); 
#line 674 "mylexer.cpp"
		}
		break;
	case 63:
		{
#line 205 ".\\mylexer.l"
 return('<'); 
#line 681 "mylexer.cpp"
		}
		break;
	case 64:
		{
#line 206 ".\\mylexer.l"
 return('>'); 
#line 688 "mylexer.cpp"
		}
		break;
	case 65:
		{
#line 207 ".\\mylexer.l"
 return('^'); 
#line 695 "mylexer.cpp"
		}
		break;
	case 66:
		{
#line 208 ".\\mylexer.l"
 return('|'); 
#line 702 "mylexer.cpp"
		}
		break;
	case 67:
		{
#line 209 ".\\mylexer.l"
 countline(yytext); 
#line 709 "mylexer.cpp"
		}
		break;
	case 68:
		{
#line 210 ".\\mylexer.l"
 /* Add code to complain about unmatched characters */ 
#line 716 "mylexer.cpp"
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

	yytransitionmax = 335;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 4, 1 },
		{ 4, 1 },
		{ 48, 8 },
		{ 53, 14 },
		{ 77, 34 },
		{ 88, 111 },
		{ 51, 12 },
		{ 90, 62 },
		{ 72, 30 },
		{ 90, 62 },
		{ 111, 111 },
		{ 56, 88 },
		{ 78, 34 },
		{ 43, 5 },
		{ 57, 16 },
		{ 73, 30 },
		{ 112, 88 },
		{ 44, 25 },
		{ 84, 41 },
		{ 54, 14 },
		{ 86, 55 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 52, 12 },
		{ 49, 8 },
		{ 7, 1 },
		{ 8, 1 },
		{ 58, 16 },
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
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 86, 55 },
		{ 63, 17 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 26, 1 },
		{ 85, 41 },
		{ 27, 1 },
		{ 28, 1 },
		{ 24, 1 },
		{ 63, 17 },
		{ 24, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 32, 1 },
		{ 33, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 34, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 35, 1 },
		{ 36, 1 },
		{ 24, 1 },
		{ 37, 1 },
		{ 38, 1 },
		{ 39, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 40, 1 },
		{ 41, 1 },
		{ 42, 1 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 70, 29 },
		{ 0, 46 },
		{ 108, 86 },
		{ 71, 29 },
		{ 108, 86 },
		{ 67, 23 },
		{ 68, 23 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 45, 44 },
		{ 47, 7 },
		{ 42, 7 },
		{ 69, 28 },
		{ 24, 137 },
		{ 89, 56 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 24, 137 },
		{ 59, 61 },
		{ 40, 21 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 61, 61 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 26, 21 },
		{ 62, 61 },
		{ 64, 21 },
		{ 65, 21 },
		{ 46, 44 },
		{ 0, 57 },
		{ 27, 19 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 91, 91 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 55, 59 },
		{ 62, 61 },
		{ 50, 11 },
		{ 74, 31 },
		{ 75, 32 },
		{ 93, 64 },
		{ 94, 68 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 92, 92 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 109, 109 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 18, 18 },
		{ 60, 60 },
		{ 60, 60 },
		{ 60, 60 },
		{ 60, 60 },
		{ 60, 60 },
		{ 60, 60 },
		{ 60, 60 },
		{ 60, 60 },
		{ 95, 70 },
		{ 96, 71 },
		{ 97, 72 },
		{ 98, 73 },
		{ 99, 74 },
		{ 100, 75 },
		{ 101, 76 },
		{ 102, 78 },
		{ 103, 79 },
		{ 104, 80 },
		{ 105, 81 },
		{ 106, 82 },
		{ 107, 83 },
		{ 76, 33 },
		{ 110, 87 },
		{ 66, 22 },
		{ 79, 35 },
		{ 80, 36 },
		{ 113, 95 },
		{ 114, 96 },
		{ 115, 97 },
		{ 116, 98 },
		{ 117, 99 },
		{ 118, 100 },
		{ 119, 103 },
		{ 120, 104 },
		{ 121, 105 },
		{ 122, 106 },
		{ 123, 107 },
		{ 81, 37 },
		{ 124, 110 },
		{ 82, 38 },
		{ 125, 114 },
		{ 126, 116 },
		{ 127, 117 },
		{ 128, 119 },
		{ 129, 120 },
		{ 130, 121 },
		{ 131, 123 },
		{ 56, 124 },
		{ 132, 126 },
		{ 133, 127 },
		{ 134, 128 },
		{ 135, 129 },
		{ 136, 132 },
		{ 137, 136 },
		{ 83, 39 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 68 },
		{ 0, 0, 67 },
		{ 0, -45, 57 },
		{ 44, 0, 68 },
		{ 0, 101, 62 },
		{ 0, -33, 56 },
		{ 0, 0, 51 },
		{ 0, 0, 52 },
		{ 0, 188, 60 },
		{ 0, -34, 59 },
		{ 0, 0, 48 },
		{ 0, -39, 58 },
		{ 59, 0, 55 },
		{ 88, -30, 61 },
		{ 60, -32, 20 },
		{ 61, 222, 21 },
		{ 0, 159, 49 },
		{ 0, 0, 45 },
		{ 0, 157, 63 },
		{ 0, 242, 50 },
		{ 0, 72, 64 },
		{ 137, 0, 18 },
		{ 137, -14, 18 },
		{ 0, 0, 53 },
		{ 0, 0, 54 },
		{ 0, 103, 65 },
		{ 137, 17, 18 },
		{ 137, -93, 18 },
		{ 137, 139, 18 },
		{ 137, 143, 18 },
		{ 137, 190, 18 },
		{ 137, -95, 18 },
		{ 137, 203, 18 },
		{ 137, 189, 18 },
		{ 137, 207, 18 },
		{ 137, 208, 18 },
		{ 137, 230, 18 },
		{ 0, 0, 46 },
		{ 0, -40, 66 },
		{ 0, 0, 47 },
		{ 0, 0, 44 },
		{ 46, 127, 0 },
		{ 0, 0, 24 },
		{ -44, 119, 0 },
		{ 0, 0, 31 },
		{ 0, 0, 39 },
		{ 0, 0, 32 },
		{ 0, 0, 29 },
		{ 0, 0, 37 },
		{ 0, 0, 27 },
		{ 0, 0, 38 },
		{ 0, 0, 28 },
		{ 59, -46, 23 },
		{ 111, 119, 0 },
		{ -57, 210, 1 },
		{ 0, 0, 30 },
		{ 0, 190, 0 },
		{ 61, 232, 20 },
		{ 0, 147, 0 },
		{ 91, -33, 0 },
		{ 92, 0, 0 },
		{ 0, 191, 36 },
		{ 0, 0, 41 },
		{ 0, 0, 43 },
		{ 0, 0, 42 },
		{ 0, 192, 35 },
		{ 0, 0, 33 },
		{ 137, 177, 18 },
		{ 137, 188, 18 },
		{ 137, 193, 18 },
		{ 137, 181, 18 },
		{ 137, 175, 7 },
		{ 137, 178, 18 },
		{ 137, 180, 18 },
		{ 137, 0, 11 },
		{ 137, 179, 18 },
		{ 137, 180, 18 },
		{ 137, 183, 18 },
		{ 137, 193, 18 },
		{ 137, 194, 18 },
		{ 137, 195, 18 },
		{ 0, 0, 34 },
		{ 0, 0, 40 },
		{ 109, 87, 0 },
		{ 111, 260, 0 },
		{ 0, -28, 0 },
		{ 124, 0, 0 },
		{ 91, 0, 0 },
		{ 0, 180, 22 },
		{ 0, 157, 19 },
		{ 0, 0, 26 },
		{ 0, 0, 25 },
		{ 137, 198, 18 },
		{ 137, 210, 18 },
		{ 137, 194, 18 },
		{ 137, 193, 18 },
		{ 137, 212, 18 },
		{ 137, 210, 18 },
		{ 137, 0, 10 },
		{ 137, 0, 12 },
		{ 137, 195, 18 },
		{ 137, 196, 18 },
		{ 137, 203, 18 },
		{ 137, 215, 18 },
		{ 137, 208, 18 },
		{ 109, 0, 0 },
		{ 0, 212, 23 },
		{ 87, 271, 0 },
		{ -87, -34, 0 },
		{ 0, 0, 2 },
		{ 137, 0, 3 },
		{ 137, 213, 18 },
		{ 137, 0, 5 },
		{ 137, 216, 18 },
		{ 137, 214, 18 },
		{ 137, 0, 8 },
		{ 137, 209, 18 },
		{ 137, 225, 18 },
		{ 137, 215, 18 },
		{ 137, 0, 16 },
		{ 137, 225, 18 },
		{ 0, 280, 2 },
		{ 137, 0, 4 },
		{ 137, 218, 18 },
		{ 137, 228, 18 },
		{ 137, 220, 18 },
		{ 137, 215, 18 },
		{ 137, 0, 15 },
		{ 137, 0, 17 },
		{ 137, 215, 18 },
		{ 137, 0, 9 },
		{ 137, 0, 13 },
		{ 137, 0, 14 },
		{ 137, 232, 18 },
		{ 0, 70, 6 }
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
		0
	};
	yybackup = backup;
}
#line 212 ".\\mylexer.l"


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



