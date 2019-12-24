/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 94 of your 30 day trial period.
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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 12/24/19
* Time: 20:43:17
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

****************************************************************************/

#include "mylexer.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string temp_operator;
extern int line;
int temp_top = -1;
int max_top = -1;
int label_number=0;
int next_label = 0;
bool label_need = false;
vector<string> temp_table; 

#line 61 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 36 ".\\myparser.y"

	// place any extra initialisation code here

#line 85 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 41 ".\\myparser.y"

	// place any extra cleanup code here

#line 99 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 70 ".\\myparser.y"

		// 类型检查
		if(yyattribute(1 - 1)->state == Not_Def){
			cout<<"未定义标识符 "<<yyattribute(1 - 1)->name<<" at line "<<line<<endl;
		}
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 215 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 77 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 228 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 78 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 241 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 79 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 254 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 83 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 267 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 84 ".\\myparser.y"
cout<<"[]";
#line 280 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 85 ".\\myparser.y"
cout<<"()";
#line 293 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 86 ".\\myparser.y"
cout<<"arguement list"<<endl;
#line 306 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 87 ".\\myparser.y"

		// 结构操作，取出该结构的成员
		cout<<"."<<endl;
	
#line 322 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 91 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 341 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 98 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 360 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 108 ".\\myparser.y"


	
#line 375 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 111 ".\\myparser.y"


	
#line 390 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 117 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 403 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 118 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 422 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 125 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 441 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 132 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_pre_code(yyattribute(2 - 2), temp_operator);
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 460 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 142 ".\\myparser.y"
temp_operator = "&";
#line 473 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 143 ".\\myparser.y"
temp_operator = "*";
#line 486 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 144 ".\\myparser.y"
temp_operator = "-";
#line 499 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 145 ".\\myparser.y"
temp_operator = "~";
#line 512 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 146 ".\\myparser.y"
temp_operator = "!";
#line 525 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 150 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 538 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 151 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(3 - 3),"*");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"*");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
	
#line 570 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 171 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(3 - 3),"/");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"/");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 604 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 193 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"%");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 636 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 216 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 649 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 217 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		// 下面根据+号给出语法制导翻译，翻译出二者的句子
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(3 - 3),"+");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"+");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 683 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 239 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(3 - 3),"-");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"-");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 712 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 259 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 725 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 260 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"<<");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		

	
#line 757 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 280 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),">>");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 788 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 302 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 801 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 303 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 819 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 309 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 837 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 315 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 855 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 321 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 873 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 330 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 886 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 331 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 904 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 337 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 922 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 346 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 935 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 347 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"&");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 966 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 369 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 979 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 370 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"^");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 1010 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 392 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1023 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 393 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(3 - 3),"|");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
		
	
#line 1054 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 415 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1067 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 416 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 1085 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 425 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1098 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 426 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 1116 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 436 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1129 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 437 ".\\myparser.y"

		// 分两种情况，直接就是id或者是 *i= 或者是 &i = 
		// 以及 a[i] = 
		// 直接就是id
		// if($1->name == ""){
		// 	Node*temp = $1;
		// 	while(temp->children[0] != NULL){
		// 		temp = temp->children[0];
		// 	}
		// }
		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(3 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3), yyattribute(3 - 3), temp_operator);
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3), yyattribute(3 - 3), temp_operator);
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		// 规约了两个临时变量，需要返还一个
	
#line 1172 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 471 ".\\myparser.y"
temp_operator = "=";
#line 1185 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 472 ".\\myparser.y"
temp_operator = "*=";
#line 1198 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 473 ".\\myparser.y"
temp_operator = "/=";
#line 1211 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 474 ".\\myparser.y"
temp_operator = "%=";
#line 1224 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 475 ".\\myparser.y"
temp_operator = "+=";
#line 1237 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 476 ".\\myparser.y"
temp_operator = "-=";
#line 1250 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 477 ".\\myparser.y"
temp_operator = "<<=";
#line 1263 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 478 ".\\myparser.y"
temp_operator = ">>=";
#line 1276 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 479 ".\\myparser.y"
temp_operator = "&=";
#line 1289 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 480 ".\\myparser.y"
temp_operator = "^=";
#line 1302 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 481 ".\\myparser.y"
temp_operator = "|=";
#line 1315 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 485 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1328 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 486 ".\\myparser.y"

		// 和 list的处理方法一样

	
#line 1344 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 497 ".\\myparser.y"

		// 变量声明语句
		// 遍历init_declarator_list, 把所有项加入符号表
		(*(YYSTYPE YYFAR*)yyvalptr) = generate_decl_node();
		Node*temp = yyattribute(2 - 3);
		while(temp != NULL){
			ID_Table[temp->name] = "VAR";
			VarEntry entry;
			entry.name = temp->name;
			entry.type = yyattribute(1 - 3)->v_type;
			entry.ivalue = temp->ivalue;
			entry.fvalue = temp->fvalue;
			entry.state = temp->state;
			Var_Table[temp->name] = entry;
			// 需要额外初始化的代码加上
			(*(YYSTYPE YYFAR*)yyvalptr)->code += temp->code;
			temp = temp->sibing;
		}
		// 怎样保留那些需要复杂初始化的代码呢
	
#line 1376 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 520 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1389 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 525 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 1402 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 526 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
		Node*temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing !=NULL)
			temp = temp->sibing;
		temp->sibing = yyattribute(3 - 3);
	
#line 1421 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 536 ".\\myparser.y"

		// a
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		// 存入符号表，状态为未初始化
		(*(YYSTYPE YYFAR*)yyvalptr)->state = Not_Init;
	
#line 1439 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 542 ".\\myparser.y"

		// a=1
		// 如果用常量初始化，则$3->has_value=true
		if(yyattribute(3 - 3)->has_value){
			(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
			copyValue((*(YYSTYPE YYFAR*)yyvalptr), yyattribute(3 - 3));
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Valid;
		}
		else{
			// 否则生成赋值语句的代码
			(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 3)->code; // 先把计算结果的代码加上
			if(yyattribute(3 - 3)->v_type == Double)
				(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3), yyattribute(3 - 3),"-");
			else
				(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3), yyattribute(3 - 3),"-");
			(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Valid;
		}

	
#line 1471 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 566 ".\\myparser.y"

#line 1484 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 567 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Char;
#line 1497 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 568 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Integer;
#line 1510 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 569 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Double;
#line 1523 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 570 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
#line 1536 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 576 ".\\myparser.y"

		//cout<<"struct!"<<endl;
	
#line 1551 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 616 ".\\myparser.y"

		// declarator *a

	
#line 1567 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 620 ".\\myparser.y"

		// a
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 1583 "myparser.cpp"
			}
		}
		break;
	case 79:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 628 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		// cout<< "声明语句标识符"<<endl;
	
#line 1599 "myparser.cpp"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 688 ".\\myparser.y"

		// 秀啊，还用表达式来初始化，那初始化值就是没有的了
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 1615 "myparser.cpp"
			}
		}
		break;
	case 81:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 713 ".\\myparser.y"
printf("designator");
#line 1628 "myparser.cpp"
			}
		}
		break;
	case 82:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 718 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1641 "myparser.cpp"
			}
		}
		break;
	case 83:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 719 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1654 "myparser.cpp"
			}
		}
		break;
	case 84:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 721 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1667 "myparser.cpp"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 729 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		Node*temp = yyattribute(2 - 3);
		while(temp != NULL){
			(*(YYSTYPE YYFAR*)yyvalptr)->code += temp->code;
			temp = temp->sibing;
		}
	
#line 1687 "myparser.cpp"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 740 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1700 "myparser.cpp"
			}
		}
		break;
	case 87:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 741 ".\\myparser.y"

		// 要串起来
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
		Node*temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing != NULL)
			temp = temp->sibing;
		temp->sibing = yyattribute(2 - 2);
	
#line 1720 "myparser.cpp"
			}
		}
		break;
	case 88:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 752 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1733 "myparser.cpp"
			}
		}
		break;
	case 89:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 753 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1746 "myparser.cpp"
			}
		}
		break;
	case 90:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 758 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
	
#line 1761 "myparser.cpp"
			}
		}
		break;
	case 91:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 764 ".\\myparser.y"


	
#line 1776 "myparser.cpp"
			}
		}
		break;
	case 92:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 767 ".\\myparser.y"


	
#line 1791 "myparser.cpp"
			}
		}
		break;
	case 93:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 775 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 6);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(4 - 6);
		// 循环一般需要两个标签
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 6)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		// 接下来应该是正式运行的代码
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(6 - 6)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		label_number++;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(4 - 6)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcmp "+ temp_table[yyattribute(4 - 6)->it] +", 0\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tje L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 1821 "myparser.cpp"
			}
		}
		break;
	case 94:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 793 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(4 - 7);
		// 循环一般需要两个标签
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		// 接下来应该是正式运行的代码
		// 正式运行的代码要加$5
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(7 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(5 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		label_number++;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(4 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcmp "+ temp_table[yyattribute(4 - 7)->it] +", 0\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tje L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 1853 "myparser.cpp"
			}
		}
		break;
	case 95:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 813 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 6);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(4 - 6);
		// 循环一般需要两个标签
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 6)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		// 接下来应该是正式运行的代码
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(6 - 6)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		label_number++;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(4 - 6)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcmp "+ temp_table[yyattribute(4 - 6)->it] +", 0\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tje L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 1883 "myparser.cpp"
			}
		}
		break;
	case 96:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 831 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(4 - 7);
		// 循环一般需要两个标签
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		// 接下来应该是正式运行的代码
		// 正式运行的代码要加$5
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(7 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(5 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L" + to_string(label_number+1) + "\n";
		label_number++;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L" + to_string(label_number) + ":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(4 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcmp "+ temp_table[yyattribute(4 - 7)->it] +", 0\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tje L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 1915 "myparser.cpp"
			}
		}
		break;
	case 97:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 861 ".\\myparser.y"

		cout<<generate_header();
		cout<<generate_var_define();
		cout<<yyattribute(1 - 1)->code;
		cout<<"end start"<<endl;
	
#line 1933 "myparser.cpp"
			}
		}
		break;
	case 98:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 871 ".\\myparser.y"

#line 1946 "myparser.cpp"
			}
		}
		break;
	case 99:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 876 ".\\myparser.y"


	
#line 1961 "myparser.cpp"
			}
		}
		break;
	case 100:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 879 ".\\myparser.y"

		// 无参函数定义
		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 3)->name + " proc\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tret\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 3)->name + " endp\n";
	
#line 1981 "myparser.cpp"
			}
		}
		break;
	case 101:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 890 ".\\myparser.y"


	
#line 1996 "myparser.cpp"
			}
		}
		break;
	case 102:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 893 ".\\myparser.y"


	
#line 2011 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "\'!\'", 33 },
		{ "\'%\'", 37 },
		{ "\'&\'", 38 },
		{ "\'(\'", 40 },
		{ "\')\'", 41 },
		{ "\'*\'", 42 },
		{ "\'+\'", 43 },
		{ "\',\'", 44 },
		{ "\'-\'", 45 },
		{ "\'.\'", 46 },
		{ "\'/\'", 47 },
		{ "\':\'", 58 },
		{ "\';\'", 59 },
		{ "\'<\'", 60 },
		{ "\'=\'", 61 },
		{ "\'>\'", 62 },
		{ "\'[\'", 91 },
		{ "\']\'", 93 },
		{ "\'^\'", 94 },
		{ "\'{\'", 123 },
		{ "\'|\'", 124 },
		{ "\'}\'", 125 },
		{ "\'~\'", 126 },
		{ "error", 256 },
		{ "IDENTIFIER", 257 },
		{ "CONSTANT", 258 },
		{ "STRING_LITERAL", 259 },
		{ "INC_OP", 260 },
		{ "DEC_OP", 261 },
		{ "LEFT_OP", 262 },
		{ "RIGHT_OP", 263 },
		{ "LE_OP", 264 },
		{ "GE_OP", 265 },
		{ "EQ_OP", 266 },
		{ "NE_OP", 267 },
		{ "AND_OP", 268 },
		{ "OR_OP", 269 },
		{ "MUL_ASSIGN", 270 },
		{ "DIV_ASSIGN", 271 },
		{ "MOD_ASSIGN", 272 },
		{ "ADD_ASSIGN", 273 },
		{ "SUB_ASSIGN", 274 },
		{ "LEFT_ASSIGN", 275 },
		{ "RIGHT_ASSIGN", 276 },
		{ "AND_ASSIGN", 277 },
		{ "XOR_ASSIGN", 278 },
		{ "OR_ASSIGN", 279 },
		{ "TYPE_NAME", 280 },
		{ "CHAR", 281 },
		{ "INT", 282 },
		{ "DOUBLE", 283 },
		{ "VOID", 284 },
		{ "BOOL", 285 },
		{ "STRUCT", 286 },
		{ "UNION", 287 },
		{ "IF", 288 },
		{ "ELSE", 289 },
		{ "WHILE", 290 },
		{ "DO", 291 },
		{ "FOR", 292 },
		{ "CONTINUE", 293 },
		{ "BREAK", 294 },
		{ "RETURN", 295 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: translation_unit",
		"primary_expression: IDENTIFIER",
		"primary_expression: CONSTANT",
		"primary_expression: STRING_LITERAL",
		"primary_expression: \'(\' expression \')\'",
		"postfix_expression: primary_expression",
		"postfix_expression: postfix_expression \'[\' expression \']\'",
		"postfix_expression: postfix_expression \'(\' \')\'",
		"postfix_expression: postfix_expression \'(\' argument_expression_list \')\'",
		"postfix_expression: postfix_expression \'.\' IDENTIFIER",
		"postfix_expression: postfix_expression INC_OP",
		"postfix_expression: postfix_expression DEC_OP",
		"argument_expression_list: assignment_expression",
		"argument_expression_list: argument_expression_list \',\' assignment_expression",
		"unary_expression: postfix_expression",
		"unary_expression: INC_OP unary_expression",
		"unary_expression: DEC_OP unary_expression",
		"unary_expression: unary_operator unary_expression",
		"unary_operator: \'&\'",
		"unary_operator: \'*\'",
		"unary_operator: \'-\'",
		"unary_operator: \'~\'",
		"unary_operator: \'!\'",
		"multiplicative_expression: unary_expression",
		"multiplicative_expression: multiplicative_expression \'*\' unary_expression",
		"multiplicative_expression: multiplicative_expression \'/\' unary_expression",
		"multiplicative_expression: multiplicative_expression \'%\' unary_expression",
		"additive_expression: multiplicative_expression",
		"additive_expression: additive_expression \'+\' multiplicative_expression",
		"additive_expression: additive_expression \'-\' multiplicative_expression",
		"shift_expression: additive_expression",
		"shift_expression: shift_expression LEFT_OP additive_expression",
		"shift_expression: shift_expression RIGHT_OP additive_expression",
		"relational_expression: shift_expression",
		"relational_expression: relational_expression \'<\' shift_expression",
		"relational_expression: relational_expression \'>\' shift_expression",
		"relational_expression: relational_expression LE_OP shift_expression",
		"relational_expression: relational_expression GE_OP shift_expression",
		"equality_expression: relational_expression",
		"equality_expression: equality_expression EQ_OP relational_expression",
		"equality_expression: equality_expression NE_OP relational_expression",
		"and_expression: equality_expression",
		"and_expression: and_expression \'&\' equality_expression",
		"exclusive_or_expression: and_expression",
		"exclusive_or_expression: exclusive_or_expression \'^\' and_expression",
		"inclusive_or_expression: exclusive_or_expression",
		"inclusive_or_expression: inclusive_or_expression \'|\' exclusive_or_expression",
		"logical_and_expression: inclusive_or_expression",
		"logical_and_expression: logical_and_expression AND_OP inclusive_or_expression",
		"logical_or_expression: logical_and_expression",
		"logical_or_expression: logical_or_expression OR_OP logical_and_expression",
		"assignment_expression: logical_or_expression",
		"assignment_expression: unary_expression assignment_operator assignment_expression",
		"assignment_operator: \'=\'",
		"assignment_operator: MUL_ASSIGN",
		"assignment_operator: DIV_ASSIGN",
		"assignment_operator: MOD_ASSIGN",
		"assignment_operator: ADD_ASSIGN",
		"assignment_operator: SUB_ASSIGN",
		"assignment_operator: LEFT_ASSIGN",
		"assignment_operator: RIGHT_ASSIGN",
		"assignment_operator: AND_ASSIGN",
		"assignment_operator: XOR_ASSIGN",
		"assignment_operator: OR_ASSIGN",
		"expression: assignment_expression",
		"expression: expression \',\' assignment_expression",
		"constant_expression: logical_or_expression",
		"declaration: declaration_specifiers init_declarator_list \';\'",
		"declaration_specifiers: type_specifier",
		"declaration_specifiers: type_specifier declaration_specifiers",
		"init_declarator_list: init_declarator",
		"init_declarator_list: init_declarator_list \',\' init_declarator",
		"init_declarator: declarator",
		"init_declarator: declarator \'=\' initializer",
		"type_specifier: VOID",
		"type_specifier: CHAR",
		"type_specifier: INT",
		"type_specifier: DOUBLE",
		"type_specifier: BOOL",
		"type_specifier: struct_or_union_specifier",
		"type_specifier: TYPE_NAME",
		"struct_or_union_specifier: struct_or_union IDENTIFIER \'{\' struct_declaration_list \'}\'",
		"struct_or_union_specifier: struct_or_union \'{\' struct_declaration_list \'}\'",
		"struct_or_union_specifier: struct_or_union IDENTIFIER",
		"struct_or_union: STRUCT",
		"struct_or_union: UNION",
		"struct_declaration_list: struct_declaration",
		"struct_declaration_list: struct_declaration_list struct_declaration",
		"struct_declaration: specifier_qualifier_list struct_declarator_list \';\'",
		"specifier_qualifier_list: type_specifier specifier_qualifier_list",
		"specifier_qualifier_list: type_specifier",
		"struct_declarator_list: struct_declarator",
		"struct_declarator_list: struct_declarator_list \',\' struct_declarator",
		"struct_declarator: declarator",
		"struct_declarator: \':\' constant_expression",
		"struct_declarator: declarator \':\' constant_expression",
		"declarator: pointer direct_declarator",
		"declarator: direct_declarator",
		"direct_declarator: IDENTIFIER",
		"direct_declarator: \'(\' declarator \')\'",
		"direct_declarator: direct_declarator \'[\' assignment_expression \']\'",
		"direct_declarator: direct_declarator \'[\' \'*\' \']\'",
		"direct_declarator: direct_declarator \'[\' \']\'",
		"direct_declarator: direct_declarator \'(\' parameter_type_list \')\'",
		"direct_declarator: direct_declarator \'(\' identifier_list \')\'",
		"direct_declarator: direct_declarator \'(\' \')\'",
		"pointer: \'*\'",
		"pointer: \'*\' pointer",
		"parameter_type_list: parameter_list",
		"parameter_list: parameter_declaration",
		"parameter_list: parameter_list \',\' parameter_declaration",
		"parameter_declaration: declaration_specifiers declarator",
		"parameter_declaration: declaration_specifiers abstract_declarator",
		"parameter_declaration: declaration_specifiers",
		"identifier_list: IDENTIFIER",
		"identifier_list: identifier_list \',\' IDENTIFIER",
		"abstract_declarator: pointer",
		"abstract_declarator: direct_abstract_declarator",
		"abstract_declarator: pointer direct_abstract_declarator",
		"direct_abstract_declarator: \'(\' abstract_declarator \')\'",
		"direct_abstract_declarator: \'[\' \']\'",
		"direct_abstract_declarator: \'[\' assignment_expression \']\'",
		"direct_abstract_declarator: direct_abstract_declarator \'[\' \']\'",
		"direct_abstract_declarator: direct_abstract_declarator \'[\' assignment_expression \']\'",
		"direct_abstract_declarator: \'[\' \'*\' \']\'",
		"direct_abstract_declarator: direct_abstract_declarator \'[\' \'*\' \']\'",
		"direct_abstract_declarator: \'(\' \')\'",
		"direct_abstract_declarator: \'(\' parameter_type_list \')\'",
		"direct_abstract_declarator: direct_abstract_declarator \'(\' \')\'",
		"direct_abstract_declarator: direct_abstract_declarator \'(\' parameter_type_list \')\'",
		"initializer: assignment_expression",
		"initializer: \'{\' initializer_list \'}\'",
		"initializer: \'{\' initializer_list \',\' \'}\'",
		"initializer_list: initializer",
		"initializer_list: designation initializer",
		"initializer_list: initializer_list \',\' initializer",
		"initializer_list: initializer_list \',\' designation initializer",
		"designation: designator_list \'=\'",
		"designator_list: designator",
		"designator_list: designator_list designator",
		"designator: \'[\' constant_expression \']\'",
		"designator: \'.\' IDENTIFIER",
		"statement: compound_statement",
		"statement: expression_statement",
		"statement: selection_statement",
		"statement: iteration_statement",
		"statement: jump_statement",
		"compound_statement: \'{\' \'}\'",
		"compound_statement: \'{\' block_item_list \'}\'",
		"block_item_list: block_item",
		"block_item_list: block_item_list block_item",
		"block_item: declaration",
		"block_item: statement",
		"expression_statement: \';\'",
		"expression_statement: expression \';\'",
		"selection_statement: IF \'(\' expression \')\' statement",
		"selection_statement: IF \'(\' expression \')\' statement ELSE statement",
		"iteration_statement: WHILE \'(\' expression \')\' statement",
		"iteration_statement: DO statement WHILE \'(\' expression \')\' \';\'",
		"iteration_statement: FOR \'(\' expression_statement expression_statement \')\' statement",
		"iteration_statement: FOR \'(\' expression_statement expression_statement expression \')\' statement",
		"iteration_statement: FOR \'(\' declaration expression_statement \')\' statement",
		"iteration_statement: FOR \'(\' declaration expression_statement expression \')\' statement",
		"jump_statement: CONTINUE \';\'",
		"jump_statement: BREAK \';\'",
		"jump_statement: RETURN \';\'",
		"jump_statement: RETURN expression \';\'",
		"translation_unit: external_declaration",
		"translation_unit: translation_unit external_declaration",
		"external_declaration: function_definition",
		"external_declaration: declaration",
		"function_definition: declaration_specifiers declarator declaration_list compound_statement",
		"function_definition: declaration_specifiers declarator compound_statement",
		"declaration_list: declaration",
		"declaration_list: declaration_list declaration"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 1, 0 },
		{ 1, 1, 1 },
		{ 1, 1, 2 },
		{ 1, 3, 3 },
		{ 2, 1, 4 },
		{ 2, 4, 5 },
		{ 2, 3, 6 },
		{ 2, 4, 7 },
		{ 2, 3, 8 },
		{ 2, 2, 9 },
		{ 2, 2, 10 },
		{ 3, 1, 11 },
		{ 3, 3, 12 },
		{ 4, 1, 13 },
		{ 4, 2, 14 },
		{ 4, 2, 15 },
		{ 4, 2, 16 },
		{ 5, 1, 17 },
		{ 5, 1, 18 },
		{ 5, 1, 19 },
		{ 5, 1, 20 },
		{ 5, 1, 21 },
		{ 6, 1, 22 },
		{ 6, 3, 23 },
		{ 6, 3, 24 },
		{ 6, 3, 25 },
		{ 7, 1, 26 },
		{ 7, 3, 27 },
		{ 7, 3, 28 },
		{ 8, 1, 29 },
		{ 8, 3, 30 },
		{ 8, 3, 31 },
		{ 9, 1, 32 },
		{ 9, 3, 33 },
		{ 9, 3, 34 },
		{ 9, 3, 35 },
		{ 9, 3, 36 },
		{ 10, 1, 37 },
		{ 10, 3, 38 },
		{ 10, 3, 39 },
		{ 11, 1, 40 },
		{ 11, 3, 41 },
		{ 12, 1, 42 },
		{ 12, 3, 43 },
		{ 13, 1, 44 },
		{ 13, 3, 45 },
		{ 14, 1, 46 },
		{ 14, 3, 47 },
		{ 15, 1, 48 },
		{ 15, 3, 49 },
		{ 16, 1, 50 },
		{ 16, 3, 51 },
		{ 17, 1, 52 },
		{ 17, 1, 53 },
		{ 17, 1, 54 },
		{ 17, 1, 55 },
		{ 17, 1, 56 },
		{ 17, 1, 57 },
		{ 17, 1, 58 },
		{ 17, 1, 59 },
		{ 17, 1, 60 },
		{ 17, 1, 61 },
		{ 17, 1, 62 },
		{ 18, 1, 63 },
		{ 18, 3, 64 },
		{ 19, 1, -1 },
		{ 20, 3, 65 },
		{ 21, 1, 66 },
		{ 21, 2, -1 },
		{ 22, 1, 67 },
		{ 22, 3, 68 },
		{ 23, 1, 69 },
		{ 23, 3, 70 },
		{ 24, 1, 71 },
		{ 24, 1, 72 },
		{ 24, 1, 73 },
		{ 24, 1, 74 },
		{ 24, 1, 75 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 25, 5, 76 },
		{ 25, 4, -1 },
		{ 25, 2, -1 },
		{ 26, 1, -1 },
		{ 26, 1, -1 },
		{ 27, 1, -1 },
		{ 27, 2, -1 },
		{ 28, 3, -1 },
		{ 29, 2, -1 },
		{ 29, 1, -1 },
		{ 30, 1, -1 },
		{ 30, 3, -1 },
		{ 31, 1, -1 },
		{ 31, 2, -1 },
		{ 31, 3, -1 },
		{ 32, 2, 77 },
		{ 32, 1, 78 },
		{ 33, 1, 79 },
		{ 33, 3, -1 },
		{ 33, 4, -1 },
		{ 33, 4, -1 },
		{ 33, 3, -1 },
		{ 33, 4, -1 },
		{ 33, 4, -1 },
		{ 33, 3, -1 },
		{ 34, 1, -1 },
		{ 34, 2, -1 },
		{ 35, 1, -1 },
		{ 36, 1, -1 },
		{ 36, 3, -1 },
		{ 37, 2, -1 },
		{ 37, 2, -1 },
		{ 37, 1, -1 },
		{ 38, 1, -1 },
		{ 38, 3, -1 },
		{ 39, 1, -1 },
		{ 39, 1, -1 },
		{ 39, 2, -1 },
		{ 40, 3, -1 },
		{ 40, 2, -1 },
		{ 40, 3, -1 },
		{ 40, 3, -1 },
		{ 40, 4, -1 },
		{ 40, 3, -1 },
		{ 40, 4, -1 },
		{ 40, 2, -1 },
		{ 40, 3, -1 },
		{ 40, 3, -1 },
		{ 40, 4, -1 },
		{ 41, 1, 80 },
		{ 41, 3, -1 },
		{ 41, 4, -1 },
		{ 42, 1, -1 },
		{ 42, 2, -1 },
		{ 42, 3, -1 },
		{ 42, 4, -1 },
		{ 43, 2, -1 },
		{ 44, 1, -1 },
		{ 44, 2, -1 },
		{ 45, 3, 81 },
		{ 45, 2, -1 },
		{ 46, 1, 82 },
		{ 46, 1, 83 },
		{ 46, 1, -1 },
		{ 46, 1, 84 },
		{ 46, 1, -1 },
		{ 47, 2, -1 },
		{ 47, 3, 85 },
		{ 48, 1, 86 },
		{ 48, 2, 87 },
		{ 49, 1, 88 },
		{ 49, 1, 89 },
		{ 50, 1, -1 },
		{ 50, 2, 90 },
		{ 51, 5, 91 },
		{ 51, 7, 92 },
		{ 52, 5, -1 },
		{ 52, 7, -1 },
		{ 52, 6, 93 },
		{ 52, 7, 94 },
		{ 52, 6, 95 },
		{ 52, 7, 96 },
		{ 53, 2, -1 },
		{ 53, 2, -1 },
		{ 53, 2, -1 },
		{ 53, 3, -1 },
		{ 54, 1, 97 },
		{ 54, 2, -1 },
		{ 55, 1, 98 },
		{ 55, 1, -1 },
		{ 56, 4, 99 },
		{ 56, 3, 100 },
		{ 57, 1, 101 },
		{ 57, 2, 102 }
	};
	yyreduction = reduction;

	yytokenaction_size = 273;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 285, YYAT_SHIFT, 50 },
		{ 241, YYAT_SHIFT, 263 },
		{ 62, YYAT_SHIFT, 128 },
		{ 97, YYAT_SHIFT, 174 },
		{ 192, YYAT_SHIFT, 18 },
		{ 285, YYAT_SHIFT, 51 },
		{ 192, YYAT_SHIFT, 19 },
		{ 285, YYAT_SHIFT, 52 },
		{ 13, YYAT_SHIFT, 27 },
		{ 285, YYAT_SHIFT, 53 },
		{ 23, YYAT_SHIFT, 33 },
		{ 242, YYAT_SHIFT, 265 },
		{ 285, YYAT_SHIFT, 54 },
		{ 200, YYAT_SHIFT, 119 },
		{ 123, YYAT_SHIFT, 200 },
		{ 240, YYAT_SHIFT, 241 },
		{ 258, YYAT_SHIFT, 275 },
		{ 64, YYAT_SHIFT, 140 },
		{ 222, YYAT_SHIFT, 151 },
		{ 181, YYAT_SHIFT, 241 },
		{ 222, YYAT_SHIFT, 152 },
		{ 281, YYAT_SHIFT, 287 },
		{ 192, YYAT_SHIFT, 111 },
		{ 64, YYAT_SHIFT, 141 },
		{ 177, YYAT_SHIFT, 237 },
		{ 41, YYAT_SHIFT, 107 },
		{ 285, YYAT_SHIFT, 78 },
		{ 39, YYAT_SHIFT, 40 },
		{ 25, YYAT_SHIFT, 40 },
		{ 122, YYAT_SHIFT, 119 },
		{ 274, YYAT_SHIFT, 283 },
		{ 176, YYAT_SHIFT, 176 },
		{ 176, YYAT_SHIFT, 234 },
		{ 176, YYAT_SHIFT, 19 },
		{ 258, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 176 },
		{ 179, YYAT_SHIFT, 176 },
		{ 102, YYAT_SHIFT, 19 },
		{ 40, YYAT_SHIFT, 100 },
		{ 208, YYAT_SHIFT, 172 },
		{ 276, YYAT_SHIFT, 285 },
		{ 171, YYAT_SHIFT, 172 },
		{ 113, YYAT_SHIFT, 192 },
		{ 276, YYAT_SHIFT, 172 },
		{ 122, YYAT_SHIFT, 198 },
		{ 221, YYAT_SHIFT, 151 },
		{ 22, YYAT_SHIFT, 31 },
		{ 221, YYAT_SHIFT, 152 },
		{ 167, YYAT_SHIFT, 1 },
		{ 167, YYAT_SHIFT, 2 },
		{ 167, YYAT_SHIFT, 3 },
		{ 167, YYAT_SHIFT, 4 },
		{ 167, YYAT_SHIFT, 5 },
		{ 167, YYAT_SHIFT, 6 },
		{ 167, YYAT_SHIFT, 7 },
		{ 167, YYAT_SHIFT, 8 },
		{ 171, YYAT_SHIFT, 232 },
		{ 113, YYAT_SHIFT, 193 },
		{ 200, YYAT_SHIFT, 120 },
		{ 272, YYAT_SHIFT, 281 },
		{ 205, YYAT_SHIFT, 251 },
		{ 22, YYAT_SHIFT, 32 },
		{ 242, YYAT_SHIFT, 266 },
		{ 205, YYAT_SHIFT, 252 },
		{ 225, YYAT_SHIFT, 158 },
		{ 225, YYAT_SHIFT, 159 },
		{ 240, YYAT_SHIFT, 242 },
		{ 70, YYAT_SHIFT, 151 },
		{ 64, YYAT_SHIFT, 142 },
		{ 70, YYAT_SHIFT, 152 },
		{ 181, YYAT_SHIFT, 242 },
		{ 220, YYAT_SHIFT, 160 },
		{ 23, YYAT_SHIFT, 34 },
		{ 220, YYAT_SHIFT, 161 },
		{ 122, YYAT_SHIFT, 120 },
		{ 177, YYAT_SHIFT, 238 },
		{ 41, YYAT_SHIFT, 108 },
		{ 105, YYAT_SHIFT, 183 },
		{ 39, YYAT_SHIFT, 41 },
		{ 25, YYAT_SHIFT, 41 },
		{ 105, YYAT_SHIFT, 184 },
		{ 219, YYAT_SHIFT, 160 },
		{ 176, YYAT_SHIFT, 177 },
		{ 219, YYAT_SHIFT, 161 },
		{ 224, YYAT_SHIFT, 147 },
		{ 270, YYAT_SHIFT, 280 },
		{ 102, YYAT_SHIFT, 177 },
		{ 179, YYAT_SHIFT, 177 },
		{ 208, YYAT_SHIFT, 253 },
		{ 224, YYAT_SHIFT, 148 },
		{ 285, YYAT_SHIFT, 34 },
		{ 267, YYAT_SHIFT, 279 },
		{ 200, YYAT_SHIFT, 248 },
		{ 285, YYAT_SHIFT, 56 },
		{ 224, YYAT_SHIFT, 149 },
		{ 123, YYAT_SHIFT, 201 },
		{ 217, YYAT_SHIFT, 156 },
		{ 217, YYAT_SHIFT, 157 },
		{ 258, YYAT_ERROR, 0 },
		{ 42, YYAT_SHIFT, 1 },
		{ 42, YYAT_SHIFT, 2 },
		{ 42, YYAT_SHIFT, 3 },
		{ 42, YYAT_SHIFT, 4 },
		{ 42, YYAT_SHIFT, 5 },
		{ 42, YYAT_SHIFT, 6 },
		{ 42, YYAT_SHIFT, 7 },
		{ 42, YYAT_SHIFT, 8 },
		{ 12, YYAT_SHIFT, 1 },
		{ 12, YYAT_SHIFT, 2 },
		{ 12, YYAT_SHIFT, 3 },
		{ 12, YYAT_SHIFT, 4 },
		{ 12, YYAT_SHIFT, 5 },
		{ 12, YYAT_SHIFT, 6 },
		{ 12, YYAT_SHIFT, 7 },
		{ 12, YYAT_SHIFT, 8 },
		{ 223, YYAT_SHIFT, 147 },
		{ 68, YYAT_SHIFT, 147 },
		{ 74, YYAT_SHIFT, 160 },
		{ 265, YYAT_SHIFT, 278 },
		{ 74, YYAT_SHIFT, 161 },
		{ 223, YYAT_SHIFT, 148 },
		{ 68, YYAT_SHIFT, 148 },
		{ 216, YYAT_SHIFT, 156 },
		{ 216, YYAT_SHIFT, 157 },
		{ 264, YYAT_SHIFT, 277 },
		{ 223, YYAT_SHIFT, 149 },
		{ 68, YYAT_SHIFT, 149 },
		{ 215, YYAT_SHIFT, 156 },
		{ 215, YYAT_SHIFT, 157 },
		{ 214, YYAT_SHIFT, 156 },
		{ 214, YYAT_SHIFT, 157 },
		{ 73, YYAT_SHIFT, 158 },
		{ 73, YYAT_SHIFT, 159 },
		{ 72, YYAT_SHIFT, 156 },
		{ 72, YYAT_SHIFT, 157 },
		{ 257, YYAT_SHIFT, 273 },
		{ 256, YYAT_ERROR, 0 },
		{ 250, YYAT_SHIFT, 55 },
		{ 239, YYAT_SHIFT, 262 },
		{ 237, YYAT_SHIFT, 261 },
		{ 236, YYAT_SHIFT, 260 },
		{ 235, YYAT_SHIFT, 259 },
		{ 13, YYAT_SHIFT, 28 },
		{ 231, YYAT_SHIFT, 78 },
		{ 229, YYAT_SHIFT, 256 },
		{ 228, YYAT_SHIFT, 255 },
		{ 227, YYAT_SHIFT, 254 },
		{ 226, YYAT_SHIFT, 155 },
		{ 218, YYAT_SHIFT, 162 },
		{ 213, YYAT_SHIFT, 163 },
		{ 209, YYAT_SHIFT, 150 },
		{ 197, YYAT_SHIFT, 247 },
		{ 189, YYAT_SHIFT, 146 },
		{ 185, YYAT_ERROR, 0 },
		{ 184, YYAT_SHIFT, 243 },
		{ 166, YYAT_SHIFT, 229 },
		{ 141, YYAT_SHIFT, 207 },
		{ 140, YYAT_SHIFT, 204 },
		{ 97, YYAT_SHIFT, 1 },
		{ 97, YYAT_SHIFT, 2 },
		{ 97, YYAT_SHIFT, 3 },
		{ 97, YYAT_SHIFT, 4 },
		{ 97, YYAT_SHIFT, 5 },
		{ 97, YYAT_SHIFT, 6 },
		{ 97, YYAT_SHIFT, 7 },
		{ 97, YYAT_SHIFT, 8 },
		{ 119, YYAT_SHIFT, 196 },
		{ 118, YYAT_SHIFT, 195 },
		{ 117, YYAT_SHIFT, 194 },
		{ 112, YYAT_SHIFT, 191 },
		{ 109, YYAT_SHIFT, 187 },
		{ 107, YYAT_SHIFT, 186 },
		{ 106, YYAT_SHIFT, 185 },
		{ 104, YYAT_SHIFT, 182 },
		{ 87, YYAT_SHIFT, 173 },
		{ 86, YYAT_SHIFT, 170 },
		{ 85, YYAT_SHIFT, 169 },
		{ 84, YYAT_SHIFT, 168 },
		{ 83, YYAT_SHIFT, 167 },
		{ 81, YYAT_SHIFT, 165 },
		{ 80, YYAT_SHIFT, 164 },
		{ 76, YYAT_SHIFT, 163 },
		{ 75, YYAT_SHIFT, 162 },
		{ 71, YYAT_SHIFT, 155 },
		{ 69, YYAT_SHIFT, 150 },
		{ 67, YYAT_SHIFT, 146 },
		{ 55, YYAT_ERROR, 0 },
		{ 49, YYAT_SHIFT, 33 },
		{ 45, YYAT_SHIFT, 115 },
		{ 38, YYAT_SHIFT, 34 },
		{ 36, YYAT_ERROR, 0 },
		{ 34, YYAT_SHIFT, 79 },
		{ 29, YYAT_SHIFT, 47 },
		{ 28, YYAT_SHIFT, 46 },
		{ 24, YYAT_ERROR, 0 },
		{ 19, YYAT_SHIFT, 19 },
		{ 9, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 129 },
		{ 62, YYAT_SHIFT, 130 },
		{ 62, YYAT_SHIFT, 131 },
		{ 62, YYAT_SHIFT, 132 },
		{ 62, YYAT_SHIFT, 133 },
		{ 62, YYAT_SHIFT, 134 },
		{ 62, YYAT_SHIFT, 135 },
		{ 62, YYAT_SHIFT, 136 },
		{ 62, YYAT_SHIFT, 137 },
		{ 62, YYAT_SHIFT, 138 },
		{ 192, YYAT_SHIFT, 20 },
		{ 222, YYAT_SHIFT, 153 },
		{ 222, YYAT_SHIFT, 154 },
		{ 285, YYAT_SHIFT, 57 },
		{ 285, YYAT_SHIFT, 58 },
		{ 285, YYAT_SHIFT, 59 },
		{ 285, YYAT_SHIFT, 60 },
		{ 285, YYAT_SHIFT, 61 },
		{ 23, YYAT_SHIFT, 1 },
		{ 23, YYAT_SHIFT, 2 },
		{ 23, YYAT_SHIFT, 3 },
		{ 23, YYAT_SHIFT, 4 },
		{ 23, YYAT_SHIFT, 5 },
		{ 23, YYAT_SHIFT, 6 },
		{ 23, YYAT_SHIFT, 7 },
		{ 23, YYAT_SHIFT, 8 },
		{ 64, YYAT_SHIFT, 143 },
		{ 64, YYAT_SHIFT, 144 },
		{ -1, YYAT_ERROR, 0 },
		{ 241, YYAT_SHIFT, 1 },
		{ 241, YYAT_SHIFT, 2 },
		{ 241, YYAT_SHIFT, 3 },
		{ 241, YYAT_SHIFT, 4 },
		{ 241, YYAT_SHIFT, 5 },
		{ 241, YYAT_SHIFT, 6 },
		{ 241, YYAT_SHIFT, 7 },
		{ 241, YYAT_SHIFT, 8 },
		{ 176, YYAT_SHIFT, 20 },
		{ 221, YYAT_SHIFT, 153 },
		{ 221, YYAT_SHIFT, 154 },
		{ -1, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 20 },
		{ 179, YYAT_SHIFT, 20 },
		{ 40, YYAT_SHIFT, 101 },
		{ 285, YYAT_SHIFT, 80 },
		{ -1, YYAT_ERROR, 0 },
		{ 285, YYAT_SHIFT, 81 },
		{ 285, YYAT_SHIFT, 82 },
		{ 285, YYAT_SHIFT, 83 },
		{ 285, YYAT_SHIFT, 84 },
		{ 285, YYAT_SHIFT, 85 },
		{ 285, YYAT_SHIFT, 86 },
		{ 258, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 153 },
		{ 70, YYAT_SHIFT, 154 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 84 },
		{ 0, 0, YYAT_REDUCE, 85 },
		{ 196, 1, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 170 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ -173, 1, YYAT_REDUCE, 68 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_REDUCE, 169 },
		{ 0, 0, YYAT_REDUCE, 167 },
		{ 0, 0, YYAT_REDUCE, 168 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ 153, 1, YYAT_REDUCE, 106 },
		{ 0, 0, YYAT_REDUCE, 98 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 2, 1, YYAT_ERROR, 0 },
		{ -51, 1, YYAT_REDUCE, 72 },
		{ 152, 1, YYAT_DEFAULT, 36 },
		{ -12, 1, YYAT_REDUCE, 97 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 70, 1, YYAT_REDUCE, 83 },
		{ 151, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 107 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_DEFAULT, 250 },
		{ 66, 1, YYAT_DEFAULT, 97 },
		{ 0, 0, YYAT_REDUCE, 173 },
		{ 132, 1, YYAT_DEFAULT, 192 },
		{ 0, 0, YYAT_REDUCE, 172 },
		{ 66, 1, YYAT_DEFAULT, 185 },
		{ -13, 1, YYAT_REDUCE, 96 },
		{ -3, 1, YYAT_DEFAULT, 241 },
		{ -17, 1, YYAT_DEFAULT, 256 },
		{ -181, 1, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_DEFAULT, 192 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 63, 1, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 99 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 126, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 61, 1, YYAT_DEFAULT, 200 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ -59, 1, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -23, 1, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 130 },
		{ -84, 1, YYAT_REDUCE, 51 },
		{ 79, 1, YYAT_REDUCE, 27 },
		{ -84, 1, YYAT_REDUCE, 49 },
		{ 7, 1, YYAT_REDUCE, 38 },
		{ 89, 1, YYAT_REDUCE, 45 },
		{ -129, 1, YYAT_REDUCE, 33 },
		{ -135, 1, YYAT_REDUCE, 41 },
		{ 74, 1, YYAT_REDUCE, 30 },
		{ 144, 1, YYAT_REDUCE, 43 },
		{ 57, 1, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 153 },
		{ 0, 0, YYAT_REDUCE, 147 },
		{ 140, 1, YYAT_ERROR, 0 },
		{ 139, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 138, 1, YYAT_ERROR, 0 },
		{ 118, 1, YYAT_ERROR, 0 },
		{ 117, 1, YYAT_ERROR, 0 },
		{ 116, 1, YYAT_DEFAULT, 256 },
		{ 115, 1, YYAT_DEFAULT, 171 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 151 },
		{ 0, 0, YYAT_REDUCE, 152 },
		{ 0, 0, YYAT_REDUCE, 145 },
		{ 0, 0, YYAT_REDUCE, 142 },
		{ 0, 0, YYAT_REDUCE, 144 },
		{ 0, 0, YYAT_REDUCE, 143 },
		{ 0, 0, YYAT_REDUCE, 146 },
		{ 0, 0, YYAT_REDUCE, 149 },
		{ -122, 1, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_REDUCE, 174 },
		{ 0, 0, YYAT_REDUCE, 171 },
		{ 0, 0, YYAT_REDUCE, 105 },
		{ 0, 0, YYAT_REDUCE, 114 },
		{ -5, 1, YYAT_REDUCE, 113 },
		{ 0, 0, YYAT_REDUCE, 109 },
		{ 132, 1, YYAT_ERROR, 0 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 128, 1, YYAT_REDUCE, 108 },
		{ 78, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 102 },
		{ 77, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 89 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 111, 1, YYAT_REDUCE, 93 },
		{ -2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 91 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 43, 1, YYAT_DEFAULT, 185 },
		{ 126, 1, YYAT_DEFAULT, 276 },
		{ -91, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 133 },
		{ -17, 1, YYAT_ERROR, 0 },
		{ -30, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 250 },
		{ 0, 0, YYAT_REDUCE, 138 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 116, 1, YYAT_DEFAULT, 258 },
		{ -101, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ -135, 1, YYAT_ERROR, 0 },
		{ -232, 1, YYAT_DEFAULT, 231 },
		{ 0, 0, YYAT_REDUCE, 163 },
		{ 0, 0, YYAT_REDUCE, 164 },
		{ 0, 0, YYAT_REDUCE, 165 },
		{ -3, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 154 },
		{ 0, 0, YYAT_REDUCE, 148 },
		{ 0, 0, YYAT_REDUCE, 150 },
		{ -9, 1, YYAT_DEFAULT, 241 },
		{ -18, 1, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 111 },
		{ -4, 1, YYAT_REDUCE, 116 },
		{ 0, 0, YYAT_REDUCE, 112 },
		{ -21, 1, YYAT_REDUCE, 117 },
		{ 0, 0, YYAT_REDUCE, 103 },
		{ 0, 0, YYAT_REDUCE, 104 },
		{ -103, 1, YYAT_ERROR, 0 },
		{ 112, 1, YYAT_DEFAULT, 241 },
		{ 0, 0, YYAT_REDUCE, 101 },
		{ 0, 0, YYAT_REDUCE, 100 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ -117, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 94 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ -36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 88 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 141 },
		{ 58, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 137 },
		{ 0, 0, YYAT_REDUCE, 139 },
		{ -33, 1, YYAT_DEFAULT, 250 },
		{ 0, 0, YYAT_REDUCE, 131 },
		{ 0, 0, YYAT_REDUCE, 134 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ -5, 1, YYAT_ERROR, 0 },
		{ -118, 1, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 25, 1, YYAT_REDUCE, 48 },
		{ -133, 1, YYAT_REDUCE, 34 },
		{ -135, 1, YYAT_REDUCE, 35 },
		{ -140, 1, YYAT_REDUCE, 36 },
		{ -166, 1, YYAT_REDUCE, 37 },
		{ 110, 1, YYAT_REDUCE, 44 },
		{ 38, 1, YYAT_REDUCE, 31 },
		{ 28, 1, YYAT_REDUCE, 32 },
		{ -15, 1, YYAT_REDUCE, 39 },
		{ -42, 1, YYAT_REDUCE, 40 },
		{ 78, 1, YYAT_REDUCE, 28 },
		{ 47, 1, YYAT_REDUCE, 29 },
		{ -202, 1, YYAT_REDUCE, 42 },
		{ 53, 1, YYAT_REDUCE, 46 },
		{ 105, 1, YYAT_DEFAULT, 276 },
		{ 104, 1, YYAT_DEFAULT, 276 },
		{ 104, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 231 },
		{ 84, 1, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 166 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 126 },
		{ 100, 1, YYAT_ERROR, 0 },
		{ 99, 1, YYAT_ERROR, 0 },
		{ 46, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 120 },
		{ 45, 1, YYAT_ERROR, 0 },
		{ -25, 1, YYAT_REDUCE, 118 },
		{ -40, 1, YYAT_ERROR, 0 },
		{ -31, 1, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 115 },
		{ 0, 0, YYAT_REDUCE, 110 },
		{ 0, 0, YYAT_REDUCE, 95 },
		{ 0, 0, YYAT_REDUCE, 92 },
		{ 0, 0, YYAT_REDUCE, 140 },
		{ 0, 0, YYAT_REDUCE, 132 },
		{ 0, 0, YYAT_REDUCE, 135 },
		{ 14, 1, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 95, 1, YYAT_DEFAULT, 258 },
		{ 94, 1, YYAT_DEFAULT, 258 },
		{ -25, 1, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_REDUCE, 119 },
		{ 0, 0, YYAT_REDUCE, 127 },
		{ 0, 0, YYAT_REDUCE, 124 },
		{ 0, 0, YYAT_REDUCE, 121 },
		{ 0, 0, YYAT_REDUCE, 128 },
		{ 83, 1, YYAT_ERROR, 0 },
		{ 25, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 122 },
		{ -2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 136 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -204, 1, YYAT_REDUCE, 155 },
		{ 0, 0, YYAT_REDUCE, 157 },
		{ 18, 1, YYAT_DEFAULT, 276 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ -11, 1, YYAT_DEFAULT, 276 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ -1, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 129 },
		{ 0, 0, YYAT_REDUCE, 125 },
		{ 0, 0, YYAT_REDUCE, 123 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ -38, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 161 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 0, 0, YYAT_REDUCE, 159 },
		{ -33, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 156 },
		{ 0, 0, YYAT_REDUCE, 158 },
		{ 0, 0, YYAT_REDUCE, 162 },
		{ 0, 0, YYAT_REDUCE, 160 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 186;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 285, 63 },
		{ 285, 64 },
		{ 258, 276 },
		{ 285, 62 },
		{ 285, 65 },
		{ 285, 68 },
		{ 285, 74 },
		{ 285, 72 },
		{ 285, 70 },
		{ 285, 73 },
		{ 285, 75 },
		{ 285, 71 },
		{ 285, 76 },
		{ 285, 69 },
		{ 285, 67 },
		{ 285, 88 },
		{ 231, 87 },
		{ 285, 87 },
		{ 97, 89 },
		{ 97, 36 },
		{ 9, 10 },
		{ 9, 11 },
		{ 97, 12 },
		{ 97, 14 },
		{ 97, 13 },
		{ 163, 226 },
		{ 163, -1 },
		{ 163, -1 },
		{ 163, -1 },
		{ 140, 205 },
		{ 258, -1 },
		{ 258, -1 },
		{ 163, -1 },
		{ 23, 35 },
		{ 258, -1 },
		{ 258, -1 },
		{ 258, -1 },
		{ 258, -1 },
		{ 250, 66 },
		{ 283, 288 },
		{ 38, 98 },
		{ 38, 36 },
		{ 140, 206 },
		{ 280, 286 },
		{ 97, 90 },
		{ 285, 289 },
		{ 285, 92 },
		{ 97, 175 },
		{ 231, 258 },
		{ 285, 94 },
		{ 285, 93 },
		{ 285, 91 },
		{ 285, 95 },
		{ 167, 230 },
		{ 167, 36 },
		{ 9, 17 },
		{ 9, 15 },
		{ 167, 12 },
		{ 167, 14 },
		{ 167, 13 },
		{ 23, 37 },
		{ 241, 102 },
		{ 275, 284 },
		{ 250, 268 },
		{ 241, 12 },
		{ 241, 14 },
		{ 241, 13 },
		{ 38, 99 },
		{ 273, 282 },
		{ 191, 188 },
		{ 23, 38 },
		{ 176, 29 },
		{ 176, 25 },
		{ 176, 179 },
		{ 176, 236 },
		{ 241, 264 },
		{ 241, 106 },
		{ 241, 103 },
		{ 176, 235 },
		{ 176, 181 },
		{ 191, 189 },
		{ 191, -1 },
		{ 12, 26 },
		{ 167, 231 },
		{ 191, 245 },
		{ 117, -1 },
		{ 257, 274 },
		{ 102, 178 },
		{ 117, 42 },
		{ 102, 179 },
		{ 36, 22 },
		{ 36, 21 },
		{ 117, 116 },
		{ 117, 43 },
		{ 102, 180 },
		{ 102, 181 },
		{ 162, 225 },
		{ 162, -1 },
		{ 12, -1 },
		{ 200, 249 },
		{ 36, 49 },
		{ 200, 250 },
		{ 200, 122 },
		{ 200, 125 },
		{ 192, 246 },
		{ 192, 112 },
		{ 192, 25 },
		{ 192, 24 },
		{ 185, -1 },
		{ 185, -1 },
		{ 185, 244 },
		{ 161, 224 },
		{ 161, -1 },
		{ 161, -1 },
		{ 55, 121 },
		{ 55, 123 },
		{ 55, 124 },
		{ 40, 104 },
		{ 256, 272 },
		{ 252, 269 },
		{ 40, 105 },
		{ 252, -1 },
		{ 149, 212 },
		{ 255, 271 },
		{ 149, -1 },
		{ 159, 222 },
		{ 159, -1 },
		{ 157, 68 },
		{ 157, 220 },
		{ 155, 218 },
		{ 155, -1 },
		{ 154, 217 },
		{ 154, -1 },
		{ 150, 71 },
		{ 150, 213 },
		{ 146, 76 },
		{ 146, 209 },
		{ 46, 117 },
		{ 46, 44 },
		{ 43, 113 },
		{ 43, 114 },
		{ 42, -1 },
		{ 42, 110 },
		{ 34, 97 },
		{ 34, 96 },
		{ 31, -1 },
		{ 31, 48 },
		{ 18, -1 },
		{ 18, 29 },
		{ 0, 9 },
		{ 0, 16 },
		{ 254, 270 },
		{ 242, 267 },
		{ 230, 257 },
		{ 179, 240 },
		{ 177, 239 },
		{ 172, 233 },
		{ 165, 228 },
		{ 164, 227 },
		{ 160, 223 },
		{ 158, 221 },
		{ 156, 219 },
		{ 153, 216 },
		{ 152, 215 },
		{ 151, 214 },
		{ 148, 211 },
		{ 147, 210 },
		{ 142, 208 },
		{ 139, 203 },
		{ 124, 202 },
		{ 122, 199 },
		{ 120, 197 },
		{ 111, 190 },
		{ 86, 171 },
		{ 82, 166 },
		{ 65, 145 },
		{ 62, 139 },
		{ 61, 127 },
		{ 60, 126 },
		{ 52, 118 },
		{ 41, 109 },
		{ 33, 77 },
		{ 27, 45 },
		{ 24, 39 },
		{ 19, 30 },
		{ 11, 23 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 95, 9 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 12 },
		{ 0, -1 },
		{ 153, 36 },
		{ 61, 185 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 116, 192 },
		{ 150, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 13, 38 },
		{ 150, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 155, 46 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 123, 36 },
		{ 0, -1 },
		{ 140, 250 },
		{ 95, 97 },
		{ 0, -1 },
		{ 68, 18 },
		{ 0, -1 },
		{ 20, 12 },
		{ 0, -1 },
		{ 82, 241 },
		{ 164, 252 },
		{ 113, 117 },
		{ 109, 192 },
		{ 0, -1 },
		{ 0, 117 },
		{ 110, 117 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 161, 258 },
		{ 0, -1 },
		{ 0, -1 },
		{ 73, 200 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 174, 149 },
		{ 173, 149 },
		{ 159, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 171, 149 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 128, 285 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 155, 258 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 285 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 55, 18 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 153, 191 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 64, 12 },
		{ 0, -1 },
		{ 0, -1 },
		{ 152, 191 },
		{ 0, -1 },
		{ 125, -1 },
		{ 0, -1 },
		{ 128, 250 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 152, 252 },
		{ 26, 252 },
		{ 0, -1 },
		{ 149, 258 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 122, 150 },
		{ 162, 149 },
		{ 161, 149 },
		{ 118, 161 },
		{ 121, 163 },
		{ 156, 154 },
		{ 155, 154 },
		{ 154, 154 },
		{ 123, 159 },
		{ 118, 163 },
		{ 154, 157 },
		{ 121, 161 },
		{ 151, 159 },
		{ 116, 162 },
		{ 153, 161 },
		{ 105, 154 },
		{ 86, 155 },
		{ 13, 191 },
		{ 140, 258 },
		{ 139, 258 },
		{ 0, -1 },
		{ 33, 231 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 140, 252 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, 241 },
		{ 139, 252 },
		{ 0, -1 },
		{ 114, 24 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 73, 241 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 65, 252 },
		{ 73, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 58, 250 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 103, 231 },
		{ -2, 258 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 40, -1 },
		{ 136, 252 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 252 },
		{ 0, -1 },
		{ 103, 258 },
		{ 0, -1 },
		{ 105, 285 },
		{ 77, 285 },
		{ 100, 258 },
		{ 68, 258 },
		{ -16, 285 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 285 },
		{ 0, -1 },
		{ 16, 285 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, 285 },
		{ 0, -1 },
		{ 0, -1 },
		{ -7, 285 },
		{ 0, -1 },
		{ -1, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 904 ".\\myparser.y"

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
			ofstream outf("out.txt");
			cout.rdbuf(outf.rdbuf());
			n = parser.yyparse();
			// parse_tree.get_label();
			// parse_tree.gen_code(*lexer.yyout);
		}
	}
	system("pause");
	return n;
}


