/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 92 of your 30 day trial period.
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
* Date: 12/22/19
* Time: 16:19:02
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
int temp_top = 0;
vector<string> temp_table; 

#line 57 "myparser.cpp"
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
#line 32 ".\\myparser.y"

	// place any extra initialisation code here

#line 81 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 37 ".\\myparser.y"

	// place any extra cleanup code here

#line 95 "myparser.cpp"
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
#line 66 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 205 "myparser.cpp"
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
#line 67 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 218 "myparser.cpp"
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
#line 68 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 231 "myparser.cpp"
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
#line 69 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
#line 244 "myparser.cpp"
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
#line 73 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 257 "myparser.cpp"
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
#line 74 ".\\myparser.y"
cout<<"[]";
#line 270 "myparser.cpp"
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
#line 75 ".\\myparser.y"
cout<<"()";
#line 283 "myparser.cpp"
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
#line 76 ".\\myparser.y"
cout<<"arguement list"<<endl;
#line 296 "myparser.cpp"
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
#line 77 ".\\myparser.y"

		// 结构操作，取出该结构的成员
		cout<<"."<<endl;
	
#line 312 "myparser.cpp"
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
#line 81 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2),"++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(1 - 2)->it;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 331 "myparser.cpp"
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
#line 88 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(1 - 2)->it;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 350 "myparser.cpp"
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
#line 98 ".\\myparser.y"


	
#line 365 "myparser.cpp"
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
#line 101 ".\\myparser.y"


	
#line 380 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 108 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(2 - 2)->it;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 399 "myparser.cpp"
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
#line 115 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(2 - 2)->it;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 418 "myparser.cpp"
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
#line 122 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(2 - 2)->code + generate_pre_code(yyattribute(2 - 2), temp_operator);
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(2 - 2)->it;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 437 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 132 ".\\myparser.y"
temp_operator = "&";
#line 450 "myparser.cpp"
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
#line 133 ".\\myparser.y"
temp_operator = "*";
#line 463 "myparser.cpp"
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
#line 134 ".\\myparser.y"
temp_operator = "-";
#line 476 "myparser.cpp"
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
#line 135 ".\\myparser.y"
temp_operator = "~";
#line 489 "myparser.cpp"
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
#line 136 ".\\myparser.y"
temp_operator = "!";
#line 502 "myparser.cpp"
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
#line 140 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 515 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 141 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(2 - 3),"*");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"*");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 548 "myparser.cpp"
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
#line 162 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(2 - 3),"/");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"/");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 582 "myparser.cpp"
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
#line 184 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"%");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 614 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 207 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 627 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 208 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		// 下面根据+号给出语法制导翻译，翻译出二者的句子
		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(2 - 3),"+");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"+");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 661 "myparser.cpp"
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
#line 230 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		if(yyattribute(1 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3),yyattribute(2 - 3),"-");
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"-");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 690 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 250 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 703 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 251 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"<<");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;

	
#line 735 "myparser.cpp"
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
#line 271 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),">>");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 766 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 293 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 779 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 294 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 797 "myparser.cpp"
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
#line 300 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 815 "myparser.cpp"
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
#line 306 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 833 "myparser.cpp"
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
#line 312 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 851 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 321 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 864 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 322 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 882 "myparser.cpp"
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
#line 328 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 900 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 337 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 913 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 338 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"&");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 944 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 360 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 957 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 361 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"^");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 988 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 383 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1001 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 384 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);

		(*(YYSTYPE YYFAR*)yyvalptr)->code = yyattribute(1 - 3)->code + yyattribute(3 - 3)->code; // 先把孩子的代码加上
		if(yyattribute(1 - 3)->v_type != yyattribute(3 - 3)->v_type)
		{
			(*(YYSTYPE YYFAR*)yyvalptr)->state = Type_Err;
			cout<<"error in line "<<line<<endl;
		}
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 3)->v_type;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3),yyattribute(2 - 3),"|");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = yyattribute(3 - 3)->it;
		// 规约了两个临时变量，需要返还一个
		temp_top--;
	
#line 1032 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 406 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1045 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 407 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 1063 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 416 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1076 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 417 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
	
#line 1094 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 427 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1107 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 428 ".\\myparser.y"

		//怎么拿到变量的标识符呢
		// $$ = new Node();
		// $$->op = $2;
		
	
#line 1125 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 474 ".\\myparser.y"

		// a
	
#line 1140 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 477 ".\\myparser.y"

		// a=1
		//
	
#line 1156 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 495 ".\\myparser.y"

		//cout<<"struct!"<<endl;
	
#line 1171 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 535 ".\\myparser.y"

		// declarator *a

	
#line 1187 "myparser.cpp"
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
#line 539 ".\\myparser.y"

		// a
	
#line 1202 "myparser.cpp"
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
#line 546 ".\\myparser.y"


	
#line 1217 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 627 ".\\myparser.y"
printf("designator");
#line 1230 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 693 ".\\myparser.y"


	
#line 1245 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 696 ".\\myparser.y"


	
#line 1260 "myparser.cpp"
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
#line 702 ".\\myparser.y"


	
#line 1275 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 705 ".\\myparser.y"


	
#line 1290 "myparser.cpp"
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
		{ 4, 1, -1 },
		{ 4, 2, 13 },
		{ 4, 2, 14 },
		{ 4, 2, 15 },
		{ 5, 1, 16 },
		{ 5, 1, 17 },
		{ 5, 1, 18 },
		{ 5, 1, 19 },
		{ 5, 1, 20 },
		{ 6, 1, 21 },
		{ 6, 3, 22 },
		{ 6, 3, 23 },
		{ 6, 3, 24 },
		{ 7, 1, 25 },
		{ 7, 3, 26 },
		{ 7, 3, 27 },
		{ 8, 1, 28 },
		{ 8, 3, 29 },
		{ 8, 3, 30 },
		{ 9, 1, 31 },
		{ 9, 3, 32 },
		{ 9, 3, 33 },
		{ 9, 3, 34 },
		{ 9, 3, 35 },
		{ 10, 1, 36 },
		{ 10, 3, 37 },
		{ 10, 3, 38 },
		{ 11, 1, 39 },
		{ 11, 3, 40 },
		{ 12, 1, 41 },
		{ 12, 3, 42 },
		{ 13, 1, 43 },
		{ 13, 3, 44 },
		{ 14, 1, 45 },
		{ 14, 3, 46 },
		{ 15, 1, 47 },
		{ 15, 3, 48 },
		{ 16, 1, 49 },
		{ 16, 3, 50 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 17, 1, -1 },
		{ 18, 1, -1 },
		{ 18, 3, -1 },
		{ 19, 1, -1 },
		{ 20, 3, -1 },
		{ 21, 1, -1 },
		{ 21, 2, -1 },
		{ 22, 1, -1 },
		{ 22, 3, -1 },
		{ 23, 1, 51 },
		{ 23, 3, 52 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 24, 1, -1 },
		{ 25, 5, 53 },
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
		{ 32, 2, 54 },
		{ 32, 1, 55 },
		{ 33, 1, 56 },
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
		{ 41, 1, -1 },
		{ 41, 3, -1 },
		{ 41, 4, -1 },
		{ 42, 1, -1 },
		{ 42, 2, -1 },
		{ 42, 3, -1 },
		{ 42, 4, -1 },
		{ 43, 2, -1 },
		{ 44, 1, -1 },
		{ 44, 2, -1 },
		{ 45, 3, 57 },
		{ 45, 2, -1 },
		{ 46, 1, -1 },
		{ 46, 1, -1 },
		{ 46, 1, -1 },
		{ 46, 1, -1 },
		{ 46, 1, -1 },
		{ 47, 2, -1 },
		{ 47, 3, -1 },
		{ 48, 1, -1 },
		{ 48, 2, -1 },
		{ 49, 1, -1 },
		{ 49, 1, -1 },
		{ 50, 1, -1 },
		{ 50, 2, -1 },
		{ 51, 5, -1 },
		{ 51, 7, -1 },
		{ 52, 5, -1 },
		{ 52, 7, -1 },
		{ 52, 6, -1 },
		{ 52, 7, -1 },
		{ 52, 6, -1 },
		{ 52, 7, -1 },
		{ 53, 2, -1 },
		{ 53, 2, -1 },
		{ 53, 2, -1 },
		{ 53, 3, -1 },
		{ 54, 1, -1 },
		{ 54, 2, -1 },
		{ 55, 1, -1 },
		{ 55, 1, -1 },
		{ 56, 4, 58 },
		{ 56, 3, 59 },
		{ 57, 1, 60 },
		{ 57, 2, 61 }
	};
	yyreduction = reduction;

	yytokenaction_size = 273;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 285, YYAT_SHIFT, 48 },
		{ 241, YYAT_SHIFT, 263 },
		{ 64, YYAT_SHIFT, 134 },
		{ 95, YYAT_SHIFT, 174 },
		{ 192, YYAT_SHIFT, 18 },
		{ 285, YYAT_SHIFT, 49 },
		{ 192, YYAT_SHIFT, 19 },
		{ 285, YYAT_SHIFT, 50 },
		{ 14, YYAT_SHIFT, 27 },
		{ 285, YYAT_SHIFT, 51 },
		{ 21, YYAT_SHIFT, 31 },
		{ 242, YYAT_SHIFT, 265 },
		{ 285, YYAT_SHIFT, 52 },
		{ 200, YYAT_SHIFT, 119 },
		{ 124, YYAT_SHIFT, 200 },
		{ 240, YYAT_SHIFT, 241 },
		{ 258, YYAT_SHIFT, 275 },
		{ 63, YYAT_SHIFT, 129 },
		{ 211, YYAT_SHIFT, 153 },
		{ 181, YYAT_SHIFT, 241 },
		{ 211, YYAT_SHIFT, 154 },
		{ 281, YYAT_SHIFT, 287 },
		{ 192, YYAT_SHIFT, 111 },
		{ 63, YYAT_SHIFT, 130 },
		{ 177, YYAT_SHIFT, 237 },
		{ 41, YYAT_SHIFT, 107 },
		{ 285, YYAT_SHIFT, 76 },
		{ 39, YYAT_SHIFT, 40 },
		{ 25, YYAT_SHIFT, 40 },
		{ 122, YYAT_SHIFT, 119 },
		{ 274, YYAT_SHIFT, 283 },
		{ 176, YYAT_SHIFT, 176 },
		{ 176, YYAT_SHIFT, 234 },
		{ 176, YYAT_SHIFT, 19 },
		{ 258, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 176 },
		{ 180, YYAT_SHIFT, 176 },
		{ 102, YYAT_SHIFT, 19 },
		{ 40, YYAT_SHIFT, 100 },
		{ 207, YYAT_SHIFT, 172 },
		{ 276, YYAT_SHIFT, 285 },
		{ 171, YYAT_SHIFT, 172 },
		{ 113, YYAT_SHIFT, 192 },
		{ 276, YYAT_SHIFT, 172 },
		{ 122, YYAT_SHIFT, 198 },
		{ 210, YYAT_SHIFT, 153 },
		{ 22, YYAT_SHIFT, 37 },
		{ 210, YYAT_SHIFT, 154 },
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
		{ 22, YYAT_SHIFT, 38 },
		{ 242, YYAT_SHIFT, 266 },
		{ 205, YYAT_SHIFT, 252 },
		{ 225, YYAT_SHIFT, 147 },
		{ 225, YYAT_SHIFT, 148 },
		{ 240, YYAT_SHIFT, 242 },
		{ 70, YYAT_SHIFT, 153 },
		{ 63, YYAT_SHIFT, 131 },
		{ 70, YYAT_SHIFT, 154 },
		{ 181, YYAT_SHIFT, 242 },
		{ 224, YYAT_SHIFT, 151 },
		{ 21, YYAT_SHIFT, 32 },
		{ 224, YYAT_SHIFT, 152 },
		{ 122, YYAT_SHIFT, 120 },
		{ 177, YYAT_SHIFT, 238 },
		{ 41, YYAT_SHIFT, 108 },
		{ 105, YYAT_SHIFT, 183 },
		{ 39, YYAT_SHIFT, 41 },
		{ 25, YYAT_SHIFT, 41 },
		{ 105, YYAT_SHIFT, 184 },
		{ 223, YYAT_SHIFT, 151 },
		{ 176, YYAT_SHIFT, 177 },
		{ 223, YYAT_SHIFT, 152 },
		{ 215, YYAT_SHIFT, 157 },
		{ 270, YYAT_SHIFT, 280 },
		{ 102, YYAT_SHIFT, 177 },
		{ 180, YYAT_SHIFT, 177 },
		{ 207, YYAT_SHIFT, 253 },
		{ 215, YYAT_SHIFT, 158 },
		{ 285, YYAT_SHIFT, 32 },
		{ 267, YYAT_SHIFT, 279 },
		{ 200, YYAT_SHIFT, 248 },
		{ 285, YYAT_SHIFT, 54 },
		{ 215, YYAT_SHIFT, 159 },
		{ 124, YYAT_SHIFT, 201 },
		{ 219, YYAT_SHIFT, 160 },
		{ 219, YYAT_SHIFT, 161 },
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
		{ 214, YYAT_SHIFT, 157 },
		{ 71, YYAT_SHIFT, 157 },
		{ 69, YYAT_SHIFT, 151 },
		{ 265, YYAT_SHIFT, 278 },
		{ 69, YYAT_SHIFT, 152 },
		{ 214, YYAT_SHIFT, 158 },
		{ 71, YYAT_SHIFT, 158 },
		{ 218, YYAT_SHIFT, 160 },
		{ 218, YYAT_SHIFT, 161 },
		{ 264, YYAT_SHIFT, 277 },
		{ 214, YYAT_SHIFT, 159 },
		{ 71, YYAT_SHIFT, 159 },
		{ 217, YYAT_SHIFT, 160 },
		{ 217, YYAT_SHIFT, 161 },
		{ 216, YYAT_SHIFT, 160 },
		{ 216, YYAT_SHIFT, 161 },
		{ 72, YYAT_SHIFT, 160 },
		{ 72, YYAT_SHIFT, 161 },
		{ 66, YYAT_SHIFT, 147 },
		{ 66, YYAT_SHIFT, 148 },
		{ 257, YYAT_SHIFT, 273 },
		{ 256, YYAT_ERROR, 0 },
		{ 250, YYAT_SHIFT, 53 },
		{ 239, YYAT_SHIFT, 262 },
		{ 237, YYAT_SHIFT, 261 },
		{ 236, YYAT_SHIFT, 260 },
		{ 235, YYAT_SHIFT, 259 },
		{ 14, YYAT_SHIFT, 28 },
		{ 231, YYAT_SHIFT, 76 },
		{ 229, YYAT_SHIFT, 256 },
		{ 228, YYAT_SHIFT, 255 },
		{ 227, YYAT_SHIFT, 254 },
		{ 226, YYAT_SHIFT, 150 },
		{ 213, YYAT_SHIFT, 162 },
		{ 212, YYAT_SHIFT, 146 },
		{ 209, YYAT_SHIFT, 163 },
		{ 197, YYAT_SHIFT, 247 },
		{ 189, YYAT_SHIFT, 149 },
		{ 185, YYAT_ERROR, 0 },
		{ 184, YYAT_SHIFT, 243 },
		{ 166, YYAT_SHIFT, 229 },
		{ 130, YYAT_SHIFT, 206 },
		{ 129, YYAT_SHIFT, 203 },
		{ 95, YYAT_SHIFT, 1 },
		{ 95, YYAT_SHIFT, 2 },
		{ 95, YYAT_SHIFT, 3 },
		{ 95, YYAT_SHIFT, 4 },
		{ 95, YYAT_SHIFT, 5 },
		{ 95, YYAT_SHIFT, 6 },
		{ 95, YYAT_SHIFT, 7 },
		{ 95, YYAT_SHIFT, 8 },
		{ 119, YYAT_SHIFT, 196 },
		{ 118, YYAT_SHIFT, 195 },
		{ 117, YYAT_SHIFT, 194 },
		{ 112, YYAT_SHIFT, 191 },
		{ 109, YYAT_SHIFT, 187 },
		{ 107, YYAT_SHIFT, 186 },
		{ 106, YYAT_SHIFT, 185 },
		{ 103, YYAT_SHIFT, 182 },
		{ 96, YYAT_SHIFT, 31 },
		{ 86, YYAT_SHIFT, 173 },
		{ 84, YYAT_SHIFT, 170 },
		{ 83, YYAT_SHIFT, 169 },
		{ 82, YYAT_SHIFT, 168 },
		{ 81, YYAT_SHIFT, 167 },
		{ 79, YYAT_SHIFT, 165 },
		{ 78, YYAT_SHIFT, 164 },
		{ 74, YYAT_SHIFT, 163 },
		{ 73, YYAT_SHIFT, 162 },
		{ 68, YYAT_SHIFT, 150 },
		{ 67, YYAT_SHIFT, 149 },
		{ 65, YYAT_SHIFT, 146 },
		{ 53, YYAT_ERROR, 0 },
		{ 45, YYAT_SHIFT, 115 },
		{ 37, YYAT_ERROR, 0 },
		{ 36, YYAT_SHIFT, 32 },
		{ 32, YYAT_SHIFT, 77 },
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
		{ 64, YYAT_SHIFT, 135 },
		{ 64, YYAT_SHIFT, 136 },
		{ 64, YYAT_SHIFT, 137 },
		{ 64, YYAT_SHIFT, 138 },
		{ 64, YYAT_SHIFT, 139 },
		{ 64, YYAT_SHIFT, 140 },
		{ 64, YYAT_SHIFT, 141 },
		{ 64, YYAT_SHIFT, 142 },
		{ 64, YYAT_SHIFT, 143 },
		{ 64, YYAT_SHIFT, 144 },
		{ 192, YYAT_SHIFT, 20 },
		{ 211, YYAT_SHIFT, 155 },
		{ 211, YYAT_SHIFT, 156 },
		{ 285, YYAT_SHIFT, 55 },
		{ 285, YYAT_SHIFT, 56 },
		{ 285, YYAT_SHIFT, 57 },
		{ 285, YYAT_SHIFT, 58 },
		{ 285, YYAT_SHIFT, 59 },
		{ 21, YYAT_SHIFT, 1 },
		{ 21, YYAT_SHIFT, 2 },
		{ 21, YYAT_SHIFT, 3 },
		{ 21, YYAT_SHIFT, 4 },
		{ 21, YYAT_SHIFT, 5 },
		{ 21, YYAT_SHIFT, 6 },
		{ 21, YYAT_SHIFT, 7 },
		{ 21, YYAT_SHIFT, 8 },
		{ 63, YYAT_SHIFT, 132 },
		{ 63, YYAT_SHIFT, 133 },
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
		{ 210, YYAT_SHIFT, 155 },
		{ 210, YYAT_SHIFT, 156 },
		{ -1, YYAT_ERROR, 0 },
		{ 102, YYAT_SHIFT, 20 },
		{ 180, YYAT_SHIFT, 20 },
		{ 40, YYAT_SHIFT, 101 },
		{ 285, YYAT_SHIFT, 78 },
		{ -1, YYAT_ERROR, 0 },
		{ 285, YYAT_SHIFT, 79 },
		{ 285, YYAT_SHIFT, 80 },
		{ 285, YYAT_SHIFT, 81 },
		{ 285, YYAT_SHIFT, 82 },
		{ 285, YYAT_SHIFT, 83 },
		{ 285, YYAT_SHIFT, 84 },
		{ 258, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 258, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 155 },
		{ 70, YYAT_SHIFT, 156 }
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
		{ 0, 0, YYAT_DEFAULT, 37 },
		{ 0, 0, YYAT_REDUCE, 170 },
		{ -173, 1, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 169 },
		{ 0, 0, YYAT_REDUCE, 167 },
		{ 0, 0, YYAT_REDUCE, 168 },
		{ 0, 0, YYAT_DEFAULT, 37 },
		{ 153, 1, YYAT_REDUCE, 106 },
		{ 0, 0, YYAT_REDUCE, 98 },
		{ -51, 1, YYAT_REDUCE, 72 },
		{ 2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 152, 1, YYAT_DEFAULT, 37 },
		{ -12, 1, YYAT_REDUCE, 97 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 70, 1, YYAT_REDUCE, 83 },
		{ 151, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 107 },
		{ 0, 0, YYAT_DEFAULT, 250 },
		{ 66, 1, YYAT_DEFAULT, 95 },
		{ 0, 0, YYAT_DEFAULT, 37 },
		{ 0, 0, YYAT_REDUCE, 173 },
		{ 0, 0, YYAT_REDUCE, 172 },
		{ 67, 1, YYAT_DEFAULT, 185 },
		{ 131, 1, YYAT_DEFAULT, 192 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ -13, 1, YYAT_REDUCE, 96 },
		{ -3, 1, YYAT_DEFAULT, 241 },
		{ -17, 1, YYAT_DEFAULT, 256 },
		{ -181, 1, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_DEFAULT, 192 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 63, 1, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 99 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 62, 1, YYAT_DEFAULT, 200 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 130 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ -23, 1, YYAT_REDUCE, 14 },
		{ -59, 1, YYAT_REDUCE, 23 },
		{ -82, 1, YYAT_REDUCE, 49 },
		{ -133, 1, YYAT_REDUCE, 41 },
		{ -84, 1, YYAT_REDUCE, 51 },
		{ 90, 1, YYAT_REDUCE, 45 },
		{ 74, 1, YYAT_REDUCE, 30 },
		{ 7, 1, YYAT_REDUCE, 38 },
		{ 79, 1, YYAT_REDUCE, 27 },
		{ -131, 1, YYAT_REDUCE, 33 },
		{ 145, 1, YYAT_REDUCE, 43 },
		{ 58, 1, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 153 },
		{ 0, 0, YYAT_REDUCE, 147 },
		{ 141, 1, YYAT_ERROR, 0 },
		{ 140, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 285 },
		{ 139, 1, YYAT_ERROR, 0 },
		{ 119, 1, YYAT_ERROR, 0 },
		{ 118, 1, YYAT_ERROR, 0 },
		{ 117, 1, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 116, 1, YYAT_DEFAULT, 171 },
		{ 0, 0, YYAT_REDUCE, 151 },
		{ 0, 0, YYAT_REDUCE, 152 },
		{ 0, 0, YYAT_REDUCE, 142 },
		{ 0, 0, YYAT_REDUCE, 143 },
		{ 0, 0, YYAT_REDUCE, 144 },
		{ 0, 0, YYAT_REDUCE, 145 },
		{ 0, 0, YYAT_REDUCE, 146 },
		{ 0, 0, YYAT_REDUCE, 149 },
		{ -122, 1, YYAT_DEFAULT, 285 },
		{ 113, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 174 },
		{ 0, 0, YYAT_REDUCE, 171 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_REDUCE, 105 },
		{ 0, 0, YYAT_REDUCE, 114 },
		{ -5, 1, YYAT_REDUCE, 113 },
		{ 132, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 109 },
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
		{ 0, 0, YYAT_REDUCE, 138 },
		{ -30, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 250 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 116, 1, YYAT_DEFAULT, 258 },
		{ -101, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 256 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
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
		{ 0, 0, YYAT_REDUCE, 112 },
		{ -4, 1, YYAT_REDUCE, 116 },
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
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ -5, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 26, 1, YYAT_REDUCE, 48 },
		{ -15, 1, YYAT_REDUCE, 39 },
		{ -42, 1, YYAT_REDUCE, 40 },
		{ -119, 1, YYAT_REDUCE, 50 },
		{ 110, 1, YYAT_REDUCE, 44 },
		{ 78, 1, YYAT_REDUCE, 28 },
		{ 47, 1, YYAT_REDUCE, 29 },
		{ -133, 1, YYAT_REDUCE, 34 },
		{ -135, 1, YYAT_REDUCE, 35 },
		{ -140, 1, YYAT_REDUCE, 36 },
		{ -166, 1, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 38, 1, YYAT_REDUCE, 31 },
		{ 28, 1, YYAT_REDUCE, 32 },
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

	yynontermgoto_size = 185;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 285, 60 },
		{ 285, 63 },
		{ 258, 276 },
		{ 285, 64 },
		{ 285, 62 },
		{ 285, 71 },
		{ 285, 69 },
		{ 285, 72 },
		{ 285, 70 },
		{ 285, 66 },
		{ 285, 73 },
		{ 285, 68 },
		{ 285, 74 },
		{ 285, 65 },
		{ 285, 67 },
		{ 285, 85 },
		{ 231, 86 },
		{ 285, 86 },
		{ 95, 87 },
		{ 95, 33 },
		{ 9, 11 },
		{ 9, 10 },
		{ 95, 12 },
		{ 95, 13 },
		{ 95, 14 },
		{ 163, 226 },
		{ 163, -1 },
		{ 163, -1 },
		{ 163, -1 },
		{ 129, 205 },
		{ 258, -1 },
		{ 258, -1 },
		{ 163, -1 },
		{ 21, 34 },
		{ 258, -1 },
		{ 258, -1 },
		{ 258, -1 },
		{ 258, -1 },
		{ 250, 61 },
		{ 283, 288 },
		{ 36, 97 },
		{ 36, 33 },
		{ 129, 204 },
		{ 280, 286 },
		{ 95, 88 },
		{ 285, 289 },
		{ 285, 89 },
		{ 95, 175 },
		{ 231, 258 },
		{ 285, 90 },
		{ 285, 91 },
		{ 285, 92 },
		{ 285, 93 },
		{ 167, 230 },
		{ 167, 33 },
		{ 9, 17 },
		{ 9, 15 },
		{ 167, 12 },
		{ 167, 13 },
		{ 167, 14 },
		{ 21, 35 },
		{ 241, 102 },
		{ 275, 284 },
		{ 250, 268 },
		{ 241, 12 },
		{ 241, 13 },
		{ 241, 14 },
		{ 36, 98 },
		{ 273, 282 },
		{ 191, 188 },
		{ 21, 36 },
		{ 176, 29 },
		{ 176, 25 },
		{ 176, 180 },
		{ 176, 236 },
		{ 241, 264 },
		{ 241, 106 },
		{ 241, 104 },
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
		{ 102, 180 },
		{ 162, 225 },
		{ 162, -1 },
		{ 117, 116 },
		{ 117, 43 },
		{ 102, 179 },
		{ 102, 181 },
		{ 256, 272 },
		{ 200, 249 },
		{ 12, -1 },
		{ 200, 250 },
		{ 200, 122 },
		{ 200, 123 },
		{ 192, 246 },
		{ 192, 112 },
		{ 192, 25 },
		{ 192, 24 },
		{ 37, 99 },
		{ 185, -1 },
		{ 185, -1 },
		{ 185, 244 },
		{ 161, 224 },
		{ 161, -1 },
		{ 161, -1 },
		{ 156, 69 },
		{ 156, 219 },
		{ 37, 96 },
		{ 53, 121 },
		{ 53, 124 },
		{ 53, 125 },
		{ 40, 103 },
		{ 255, 271 },
		{ 252, 269 },
		{ 40, 105 },
		{ 252, -1 },
		{ 159, 222 },
		{ 254, 270 },
		{ 159, -1 },
		{ 152, 215 },
		{ 152, -1 },
		{ 150, 213 },
		{ 150, -1 },
		{ 149, 74 },
		{ 149, 212 },
		{ 148, 211 },
		{ 148, -1 },
		{ 146, 68 },
		{ 146, 209 },
		{ 46, 117 },
		{ 46, 44 },
		{ 43, 113 },
		{ 43, 114 },
		{ 42, -1 },
		{ 42, 110 },
		{ 33, 22 },
		{ 33, 23 },
		{ 32, 95 },
		{ 32, 94 },
		{ 18, -1 },
		{ 18, 29 },
		{ 0, 9 },
		{ 0, 16 },
		{ 242, 267 },
		{ 230, 257 },
		{ 180, 240 },
		{ 177, 239 },
		{ 172, 233 },
		{ 165, 228 },
		{ 164, 227 },
		{ 160, 223 },
		{ 158, 221 },
		{ 157, 220 },
		{ 155, 218 },
		{ 154, 217 },
		{ 153, 216 },
		{ 151, 214 },
		{ 147, 210 },
		{ 145, 208 },
		{ 131, 207 },
		{ 125, 202 },
		{ 122, 199 },
		{ 120, 197 },
		{ 111, 190 },
		{ 84, 171 },
		{ 80, 166 },
		{ 64, 145 },
		{ 62, 128 },
		{ 59, 127 },
		{ 58, 126 },
		{ 50, 118 },
		{ 41, 109 },
		{ 31, 75 },
		{ 27, 45 },
		{ 24, 39 },
		{ 19, 30 },
		{ 10, 21 }
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
		{ 152, 33 },
		{ 0, -1 },
		{ 61, 185 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 116, 192 },
		{ 149, -1 },
		{ 0, -1 },
		{ 13, 36 },
		{ 0, -1 },
		{ 0, -1 },
		{ 149, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 154, 46 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 139, 250 },
		{ 97, 95 },
		{ 121, 37 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 12 },
		{ 83, 18 },
		{ 0, -1 },
		{ 0, -1 },
		{ 84, 241 },
		{ 163, 252 },
		{ 113, 117 },
		{ 109, 192 },
		{ 0, -1 },
		{ 0, 117 },
		{ 110, 117 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 160, 258 },
		{ 0, -1 },
		{ 0, -1 },
		{ 75, 200 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 173, 159 },
		{ 172, 159 },
		{ 0, -1 },
		{ 0, -1 },
		{ 171, 159 },
		{ 0, -1 },
		{ 157, -1 },
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
		{ 127, 285 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 154, 258 },
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
		{ 152, 191 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 64, 12 },
		{ 0, -1 },
		{ 0, -1 },
		{ 151, 191 },
		{ 0, -1 },
		{ 124, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 127, 250 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 252 },
		{ 0, -1 },
		{ 149, 258 },
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
		{ 150, 252 },
		{ 123, 163 },
		{ 156, 148 },
		{ 124, 162 },
		{ 118, 146 },
		{ 118, 163 },
		{ 158, 152 },
		{ 121, 161 },
		{ 155, 156 },
		{ 154, 156 },
		{ 153, 156 },
		{ 106, 161 },
		{ 156, 159 },
		{ 155, 159 },
		{ 120, 152 },
		{ 151, 161 },
		{ 103, 148 },
		{ 80, 150 },
		{ 13, 191 },
		{ 139, 258 },
		{ 138, 258 },
		{ 0, -1 },
		{ 33, 231 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 139, 252 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, 241 },
		{ 138, 252 },
		{ 0, -1 },
		{ 0, -1 },
		{ 113, 24 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 72, 241 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 65, 252 },
		{ 71, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 56, 250 },
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
		{ 102, 231 },
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
		{ 135, 252 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 22, 252 },
		{ 0, -1 },
		{ 105, 258 },
		{ 0, -1 },
		{ 79, 285 },
		{ 74, 285 },
		{ 78, 258 },
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
#line 716 ".\\myparser.y"

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


