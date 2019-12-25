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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 12/25/19
* Time: 22:00:38
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
int label_need = 0;
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

		// 无参函数调用
	
#line 295 "myparser.cpp"
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
#line 88 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		// 返回值在函数标识符里就应该拿到了
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 4)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 4);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 4);
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 4)->v_type;
		if(yyattribute(1 - 4)->name == "printf"){
			// 第一个参数是一个字符串常量, 后面一堆参数是要输出的东西，拿到每一个的op 
			// 用一个全局变量来传递那个字符串好像就没什么问题了
			(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tprintf(\"";
			// 参数列表
			(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 4)->svalue;
			(*(YYSTYPE YYFAR*)yyvalptr)->code += "\"";
			Node * temp = yyattribute(3 - 4)->sibing;
			while(temp != NULL){
				if(temp->it == -1)
					(*(YYSTYPE YYFAR*)yyvalptr)->code += ", " + temp->name;
				else
					(*(YYSTYPE YYFAR*)yyvalptr)->code += ", " + temp_table[temp->it];
				temp = temp->sibing;
			}
			(*(YYSTYPE YYFAR*)yyvalptr)->code += ")\n";
		}
		else if(yyattribute(1 - 4)->name == "scanf"){
			// 而且有%lf的话还要使用 call ReadFloat
			// 数里面的百分号，以 %lf 作分隔符，调用多次 invoke __scanf
			string format = yyattribute(3 - 4)->svalue;
			Node * temp = yyattribute(3 - 4)->sibing;
			int i = 0;
			while(i != -1){
				i = format.find("%", i);
				if(i == -1)
					break;
				// lf
				if(format[i+1]=='l'){
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcall ReadFloat\n";
					// 存储到相应的位置
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tmov eax, " +  temp_table[temp->it] +"\n";
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tfstp dword ptr ss:[eax]\n";
				}
				//d
				else if(format[i+1]=='d'){
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tinvoke crt_scanf, SADD('%d',13,10), ";
					(*(YYSTYPE YYFAR*)yyvalptr)->code += temp_table[temp->it] + "\n";
				}
				else if(format[i+1] == 'c'){
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tinvoke crt_scanf, SADD('%c',13,10), ";
					(*(YYSTYPE YYFAR*)yyvalptr)->code += temp_table[temp->it] + "\n";
				}
				temp = temp->sibing;
				i++;
			}
		}
		else{
			;
		}
	
#line 365 "myparser.cpp"
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
#line 146 ".\\myparser.y"

		// 结构操作，取出该结构的成员
		cout<<"."<<endl;
	
#line 381 "myparser.cpp"
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
#line 150 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 400 "myparser.cpp"
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
#line 157 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 419 "myparser.cpp"
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
#line 168 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 434 "myparser.cpp"
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
#line 171 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
		Node*temp = yyattribute(1 - 3);
		while(temp->sibing != NULL){
			temp = temp->sibing;
		}
		temp->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 3)->code;
	
#line 455 "myparser.cpp"
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
#line 183 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 468 "myparser.cpp"
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
#line 184 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 487 "myparser.cpp"
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
#line 191 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 506 "myparser.cpp"
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
#line 198 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_pre_code(yyattribute(2 - 2), temp_operator);
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 525 "myparser.cpp"
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
#line 208 ".\\myparser.y"
temp_operator = "&";
#line 538 "myparser.cpp"
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
#line 209 ".\\myparser.y"
temp_operator = "*";
#line 551 "myparser.cpp"
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
#line 210 ".\\myparser.y"
temp_operator = "-";
#line 564 "myparser.cpp"
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
#line 211 ".\\myparser.y"
temp_operator = "~";
#line 577 "myparser.cpp"
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
#line 212 ".\\myparser.y"
temp_operator = "!";
#line 590 "myparser.cpp"
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
#line 216 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 603 "myparser.cpp"
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
#line 217 ".\\myparser.y"

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

	
#line 635 "myparser.cpp"
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
#line 237 ".\\myparser.y"

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

		
	
#line 669 "myparser.cpp"
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
#line 259 ".\\myparser.y"

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

		
	
#line 701 "myparser.cpp"
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
#line 282 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 714 "myparser.cpp"
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
#line 283 ".\\myparser.y"

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

		
	
#line 748 "myparser.cpp"
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
#line 305 ".\\myparser.y"

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

		
	
#line 777 "myparser.cpp"
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
#line 325 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 790 "myparser.cpp"
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
#line 326 ".\\myparser.y"

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
	
#line 819 "myparser.cpp"
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
#line 343 ".\\myparser.y"

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
	
#line 848 "myparser.cpp"
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
#line 363 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 861 "myparser.cpp"
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
#line 364 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "<");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 884 "myparser.cpp"
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
#line 375 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), ">");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 907 "myparser.cpp"
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
#line 386 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "<=");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 930 "myparser.cpp"
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
#line 397 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), ">=");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 953 "myparser.cpp"
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
#line 411 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 966 "myparser.cpp"
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
#line 412 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "==");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 989 "myparser.cpp"
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
#line 423 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "!=");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 1012 "myparser.cpp"
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
#line 437 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1025 "myparser.cpp"
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
#line 438 ".\\myparser.y"

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

		
	
#line 1056 "myparser.cpp"
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
#line 460 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1069 "myparser.cpp"
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
#line 461 ".\\myparser.y"

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

		
	
#line 1100 "myparser.cpp"
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
#line 483 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1113 "myparser.cpp"
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
#line 484 ".\\myparser.y"

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
	
#line 1142 "myparser.cpp"
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
#line 504 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1155 "myparser.cpp"
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
#line 505 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_and_or_code(yyattribute(1 - 3), yyattribute(3 - 3), "&&");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
	
#line 1177 "myparser.cpp"
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
#line 518 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1190 "myparser.cpp"
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
#line 519 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_and_or_code(yyattribute(1 - 3), yyattribute(3 - 3), "||");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
	
#line 1212 "myparser.cpp"
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
#line 533 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1225 "myparser.cpp"
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
#line 534 ".\\myparser.y"

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
		if(yyattribute(3 - 3)->v_type == Double)
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_double_code(yyattribute(1 - 3), yyattribute(3 - 3), temp_operator);
		else
			(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_expr_code(yyattribute(1 - 3), yyattribute(3 - 3), temp_operator);
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;

	
#line 1267 "myparser.cpp"
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
#line 567 ".\\myparser.y"
temp_operator = "=";
#line 1280 "myparser.cpp"
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
#line 568 ".\\myparser.y"
temp_operator = "*=";
#line 1293 "myparser.cpp"
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
#line 569 ".\\myparser.y"
temp_operator = "/=";
#line 1306 "myparser.cpp"
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
#line 570 ".\\myparser.y"
temp_operator = "%=";
#line 1319 "myparser.cpp"
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
#line 571 ".\\myparser.y"
temp_operator = "+=";
#line 1332 "myparser.cpp"
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
#line 572 ".\\myparser.y"
temp_operator = "-=";
#line 1345 "myparser.cpp"
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
#line 573 ".\\myparser.y"
temp_operator = "<<=";
#line 1358 "myparser.cpp"
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
#line 574 ".\\myparser.y"
temp_operator = ">>=";
#line 1371 "myparser.cpp"
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
#line 575 ".\\myparser.y"
temp_operator = "&=";
#line 1384 "myparser.cpp"
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
#line 576 ".\\myparser.y"
temp_operator = "^=";
#line 1397 "myparser.cpp"
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
#line 577 ".\\myparser.y"
temp_operator = "|=";
#line 1410 "myparser.cpp"
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
#line 581 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1423 "myparser.cpp"
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
#line 582 ".\\myparser.y"

		// 和 list的处理方法一样

	
#line 1439 "myparser.cpp"
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
#line 593 ".\\myparser.y"

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
	
#line 1471 "myparser.cpp"
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
#line 616 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1484 "myparser.cpp"
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
#line 621 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 1497 "myparser.cpp"
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
#line 622 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
		Node*temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing !=NULL)
			temp = temp->sibing;
		temp->sibing = yyattribute(3 - 3);
	
#line 1516 "myparser.cpp"
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
#line 632 ".\\myparser.y"

		// a
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		// 存入符号表，状态为未初始化
		(*(YYSTYPE YYFAR*)yyvalptr)->state = Not_Init;
	
#line 1534 "myparser.cpp"
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
#line 638 ".\\myparser.y"

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

	
#line 1566 "myparser.cpp"
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
#line 662 ".\\myparser.y"

#line 1579 "myparser.cpp"
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
#line 663 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Char;
#line 1592 "myparser.cpp"
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
#line 664 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Integer;
#line 1605 "myparser.cpp"
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
#line 665 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Double;
#line 1618 "myparser.cpp"
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
#line 666 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
#line 1631 "myparser.cpp"
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
#line 672 ".\\myparser.y"

		//cout<<"struct!"<<endl;
	
#line 1646 "myparser.cpp"
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
#line 712 ".\\myparser.y"

		// declarator *a

	
#line 1662 "myparser.cpp"
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
#line 716 ".\\myparser.y"

		// a
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 1678 "myparser.cpp"
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
#line 724 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		// cout<< "声明语句标识符"<<endl;
	
#line 1694 "myparser.cpp"
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
#line 784 ".\\myparser.y"

		// 秀啊，还用表达式来初始化，那初始化值就是没有的了
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 1710 "myparser.cpp"
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
#line 809 ".\\myparser.y"

#line 1723 "myparser.cpp"
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
#line 814 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1736 "myparser.cpp"
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
#line 815 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1749 "myparser.cpp"
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
#line 816 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1762 "myparser.cpp"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 817 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1775 "myparser.cpp"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 825 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		Node*temp = yyattribute(2 - 3);
		while(temp != NULL){
			(*(YYSTYPE YYFAR*)yyvalptr)->code += temp->code;
			temp = temp->sibing;
		}
	
#line 1795 "myparser.cpp"
			}
		}
		break;
	case 87:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 836 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1808 "myparser.cpp"
			}
		}
		break;
	case 88:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 837 ".\\myparser.y"

		// 要串起来
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
		Node*temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing != NULL)
			temp = temp->sibing;
		temp->sibing = yyattribute(2 - 2);
	
#line 1828 "myparser.cpp"
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
#line 848 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1841 "myparser.cpp"
			}
		}
		break;
	case 90:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 849 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1854 "myparser.cpp"
			}
		}
		break;
	case 91:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 853 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
#line 1867 "myparser.cpp"
			}
		}
		break;
	case 92:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 854 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
	
#line 1882 "myparser.cpp"
			}
		}
		break;
	case 93:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 860 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(5 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_if_code(yyattribute(3 - 5),yyattribute(5 - 5),NULL);
	
#line 1900 "myparser.cpp"
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
#line 866 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(5 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[2] = yyattribute(7 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_if_code(yyattribute(3 - 7),yyattribute(5 - 7),yyattribute(7 - 7));
	
#line 1919 "myparser.cpp"
			}
		}
		break;
	case 95:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 876 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(5 - 5);
		label_number++;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L"+to_string(label_number)+"\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L"+to_string(label_number-1)+":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(5 - 5)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L"+to_string(label_number)+"\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L"+to_string(label_number)+":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 5)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcmp "+ temp_table[yyattribute(3 - 5)->it] + ", 0\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjne L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 1946 "myparser.cpp"
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
#line 891 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(5 - 7);
		label_number++;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L"+to_string(label_number-1)+"\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L"+to_string(label_number-1)+":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjmp L"+to_string(label_number)+"\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "L"+to_string(label_number)+":\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(5 - 7)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tcmp "+ temp_table[yyattribute(3 - 7)->it] + ", 0\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjne L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 1973 "myparser.cpp"
			}
		}
		break;
	case 97:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 906 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 6);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(4 - 6);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[2] = yyattribute(6 - 6);
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
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjne L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 2004 "myparser.cpp"
			}
		}
		break;
	case 98:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 925 ".\\myparser.y"

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
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjne L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 2036 "myparser.cpp"
			}
		}
		break;
	case 99:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 945 ".\\myparser.y"

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
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjne L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 2066 "myparser.cpp"
			}
		}
		break;
	case 100:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 963 ".\\myparser.y"

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
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tjne L" + to_string(label_number-1) + "\n";
		label_number++;
	
#line 2098 "myparser.cpp"
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
#line 993 ".\\myparser.y"

		cout<<generate_header();
		cout<<generate_var_define();
		Node * temp = yyattribute(1 - 1);
		while(temp != NULL){
			cout<<temp->code;
			temp = temp->sibing;
		}
		cout<<"end start"<<endl;
	
#line 2120 "myparser.cpp"
			}
		}
		break;
	case 102:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1006 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 2133 "myparser.cpp"
			}
		}
		break;
	case 103:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1007 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
		Node * temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing != NULL){
			temp = temp->sibing;
		}
		temp->sibing = yyattribute(2 - 2);
	
#line 2153 "myparser.cpp"
			}
		}
		break;
	case 104:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1018 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 2166 "myparser.cpp"
			}
		}
		break;
	case 105:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 1023 ".\\myparser.y"


	
#line 2181 "myparser.cpp"
			}
		}
		break;
	case 106:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 1026 ".\\myparser.y"

		// 无参函数定义
		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 3)->name + " proc\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tret\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 3)->name + " endp\n";
	
#line 2201 "myparser.cpp"
			}
		}
		break;
	case 107:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 1037 ".\\myparser.y"


	
#line 2216 "myparser.cpp"
			}
		}
		break;
	case 108:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 1040 ".\\myparser.y"


	
#line 2231 "myparser.cpp"
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
		"$accept: program",
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
		"program: translation_unit",
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
		{ 46, 1, 84 },
		{ 46, 1, 85 },
		{ 46, 1, -1 },
		{ 47, 2, -1 },
		{ 47, 3, 86 },
		{ 48, 1, 87 },
		{ 48, 2, 88 },
		{ 49, 1, 89 },
		{ 49, 1, 90 },
		{ 50, 1, 91 },
		{ 50, 2, 92 },
		{ 51, 5, 93 },
		{ 51, 7, 94 },
		{ 52, 5, 95 },
		{ 52, 7, 96 },
		{ 52, 6, 97 },
		{ 52, 7, 98 },
		{ 52, 6, 99 },
		{ 52, 7, 100 },
		{ 53, 2, -1 },
		{ 53, 2, -1 },
		{ 53, 2, -1 },
		{ 53, 3, -1 },
		{ 54, 1, 101 },
		{ 55, 1, 102 },
		{ 55, 2, 103 },
		{ 56, 1, 104 },
		{ 56, 1, -1 },
		{ 57, 4, 105 },
		{ 57, 3, 106 },
		{ 58, 1, 107 },
		{ 58, 2, 108 }
	};
	yyreduction = reduction;

	yytokenaction_size = 273;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 286, YYAT_SHIFT, 51 },
		{ 241, YYAT_SHIFT, 264 },
		{ 77, YYAT_SHIFT, 152 },
		{ 95, YYAT_SHIFT, 173 },
		{ 193, YYAT_SHIFT, 18 },
		{ 286, YYAT_SHIFT, 52 },
		{ 193, YYAT_SHIFT, 19 },
		{ 286, YYAT_SHIFT, 53 },
		{ 13, YYAT_SHIFT, 27 },
		{ 286, YYAT_SHIFT, 54 },
		{ 23, YYAT_SHIFT, 34 },
		{ 243, YYAT_SHIFT, 241 },
		{ 286, YYAT_SHIFT, 55 },
		{ 200, YYAT_SHIFT, 120 },
		{ 125, YYAT_SHIFT, 200 },
		{ 242, YYAT_SHIFT, 266 },
		{ 259, YYAT_SHIFT, 276 },
		{ 75, YYAT_SHIFT, 147 },
		{ 207, YYAT_SHIFT, 136 },
		{ 180, YYAT_SHIFT, 241 },
		{ 207, YYAT_SHIFT, 137 },
		{ 282, YYAT_SHIFT, 288 },
		{ 193, YYAT_SHIFT, 112 },
		{ 75, YYAT_SHIFT, 148 },
		{ 178, YYAT_SHIFT, 238 },
		{ 42, YYAT_SHIFT, 40 },
		{ 286, YYAT_SHIFT, 79 },
		{ 41, YYAT_SHIFT, 108 },
		{ 24, YYAT_SHIFT, 40 },
		{ 126, YYAT_SHIFT, 120 },
		{ 275, YYAT_SHIFT, 284 },
		{ 177, YYAT_SHIFT, 177 },
		{ 177, YYAT_SHIFT, 235 },
		{ 177, YYAT_SHIFT, 19 },
		{ 259, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 177 },
		{ 181, YYAT_SHIFT, 177 },
		{ 103, YYAT_SHIFT, 19 },
		{ 40, YYAT_SHIFT, 101 },
		{ 226, YYAT_SHIFT, 175 },
		{ 277, YYAT_SHIFT, 286 },
		{ 172, YYAT_SHIFT, 175 },
		{ 114, YYAT_SHIFT, 193 },
		{ 277, YYAT_SHIFT, 175 },
		{ 126, YYAT_SHIFT, 202 },
		{ 206, YYAT_SHIFT, 136 },
		{ 21, YYAT_SHIFT, 32 },
		{ 206, YYAT_SHIFT, 137 },
		{ 168, YYAT_SHIFT, 1 },
		{ 168, YYAT_SHIFT, 2 },
		{ 168, YYAT_SHIFT, 3 },
		{ 168, YYAT_SHIFT, 4 },
		{ 168, YYAT_SHIFT, 5 },
		{ 168, YYAT_SHIFT, 6 },
		{ 168, YYAT_SHIFT, 7 },
		{ 168, YYAT_SHIFT, 8 },
		{ 172, YYAT_SHIFT, 233 },
		{ 114, YYAT_SHIFT, 194 },
		{ 200, YYAT_SHIFT, 121 },
		{ 273, YYAT_SHIFT, 282 },
		{ 223, YYAT_SHIFT, 252 },
		{ 21, YYAT_SHIFT, 33 },
		{ 243, YYAT_SHIFT, 242 },
		{ 223, YYAT_SHIFT, 253 },
		{ 215, YYAT_SHIFT, 131 },
		{ 215, YYAT_SHIFT, 132 },
		{ 242, YYAT_SHIFT, 267 },
		{ 66, YYAT_SHIFT, 136 },
		{ 75, YYAT_SHIFT, 149 },
		{ 66, YYAT_SHIFT, 137 },
		{ 180, YYAT_SHIFT, 242 },
		{ 205, YYAT_SHIFT, 141 },
		{ 23, YYAT_SHIFT, 35 },
		{ 205, YYAT_SHIFT, 142 },
		{ 126, YYAT_SHIFT, 121 },
		{ 178, YYAT_SHIFT, 239 },
		{ 42, YYAT_SHIFT, 41 },
		{ 105, YYAT_SHIFT, 184 },
		{ 41, YYAT_SHIFT, 109 },
		{ 24, YYAT_SHIFT, 41 },
		{ 105, YYAT_SHIFT, 185 },
		{ 204, YYAT_SHIFT, 141 },
		{ 177, YYAT_SHIFT, 178 },
		{ 204, YYAT_SHIFT, 142 },
		{ 217, YYAT_SHIFT, 133 },
		{ 271, YYAT_SHIFT, 281 },
		{ 103, YYAT_SHIFT, 178 },
		{ 181, YYAT_SHIFT, 178 },
		{ 226, YYAT_SHIFT, 254 },
		{ 217, YYAT_SHIFT, 134 },
		{ 286, YYAT_SHIFT, 35 },
		{ 268, YYAT_SHIFT, 280 },
		{ 200, YYAT_SHIFT, 249 },
		{ 286, YYAT_SHIFT, 57 },
		{ 217, YYAT_SHIFT, 135 },
		{ 125, YYAT_SHIFT, 201 },
		{ 214, YYAT_SHIFT, 129 },
		{ 214, YYAT_SHIFT, 130 },
		{ 259, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 1 },
		{ 43, YYAT_SHIFT, 2 },
		{ 43, YYAT_SHIFT, 3 },
		{ 43, YYAT_SHIFT, 4 },
		{ 43, YYAT_SHIFT, 5 },
		{ 43, YYAT_SHIFT, 6 },
		{ 43, YYAT_SHIFT, 7 },
		{ 43, YYAT_SHIFT, 8 },
		{ 14, YYAT_SHIFT, 1 },
		{ 14, YYAT_SHIFT, 2 },
		{ 14, YYAT_SHIFT, 3 },
		{ 14, YYAT_SHIFT, 4 },
		{ 14, YYAT_SHIFT, 5 },
		{ 14, YYAT_SHIFT, 6 },
		{ 14, YYAT_SHIFT, 7 },
		{ 14, YYAT_SHIFT, 8 },
		{ 11, YYAT_SHIFT, 1 },
		{ 11, YYAT_SHIFT, 2 },
		{ 11, YYAT_SHIFT, 3 },
		{ 11, YYAT_SHIFT, 4 },
		{ 11, YYAT_SHIFT, 5 },
		{ 11, YYAT_SHIFT, 6 },
		{ 11, YYAT_SHIFT, 7 },
		{ 11, YYAT_SHIFT, 8 },
		{ 216, YYAT_SHIFT, 133 },
		{ 65, YYAT_SHIFT, 133 },
		{ 68, YYAT_SHIFT, 141 },
		{ 266, YYAT_SHIFT, 279 },
		{ 68, YYAT_SHIFT, 142 },
		{ 216, YYAT_SHIFT, 134 },
		{ 65, YYAT_SHIFT, 134 },
		{ 213, YYAT_SHIFT, 129 },
		{ 213, YYAT_SHIFT, 130 },
		{ 265, YYAT_SHIFT, 278 },
		{ 216, YYAT_SHIFT, 135 },
		{ 65, YYAT_SHIFT, 135 },
		{ 212, YYAT_SHIFT, 129 },
		{ 212, YYAT_SHIFT, 130 },
		{ 211, YYAT_SHIFT, 129 },
		{ 211, YYAT_SHIFT, 130 },
		{ 64, YYAT_SHIFT, 131 },
		{ 64, YYAT_SHIFT, 132 },
		{ 258, YYAT_SHIFT, 274 },
		{ 13, YYAT_SHIFT, 28 },
		{ 63, YYAT_SHIFT, 129 },
		{ 63, YYAT_SHIFT, 130 },
		{ 257, YYAT_ERROR, 0 },
		{ 251, YYAT_SHIFT, 56 },
		{ 240, YYAT_SHIFT, 263 },
		{ 238, YYAT_SHIFT, 262 },
		{ 237, YYAT_SHIFT, 261 },
		{ 236, YYAT_SHIFT, 260 },
		{ 232, YYAT_SHIFT, 79 },
		{ 230, YYAT_SHIFT, 257 },
		{ 229, YYAT_SHIFT, 256 },
		{ 228, YYAT_SHIFT, 255 },
		{ 221, YYAT_SHIFT, 145 },
		{ 220, YYAT_SHIFT, 144 },
		{ 219, YYAT_SHIFT, 143 },
		{ 95, YYAT_SHIFT, 1 },
		{ 95, YYAT_SHIFT, 2 },
		{ 95, YYAT_SHIFT, 3 },
		{ 95, YYAT_SHIFT, 4 },
		{ 95, YYAT_SHIFT, 5 },
		{ 95, YYAT_SHIFT, 6 },
		{ 95, YYAT_SHIFT, 7 },
		{ 95, YYAT_SHIFT, 8 },
		{ 218, YYAT_SHIFT, 140 },
		{ 198, YYAT_SHIFT, 248 },
		{ 189, YYAT_SHIFT, 146 },
		{ 185, YYAT_SHIFT, 245 },
		{ 183, YYAT_ERROR, 0 },
		{ 167, YYAT_SHIFT, 230 },
		{ 148, YYAT_SHIFT, 225 },
		{ 147, YYAT_SHIFT, 222 },
		{ 120, YYAT_SHIFT, 197 },
		{ 119, YYAT_SHIFT, 196 },
		{ 118, YYAT_SHIFT, 195 },
		{ 113, YYAT_SHIFT, 192 },
		{ 110, YYAT_SHIFT, 188 },
		{ 108, YYAT_SHIFT, 187 },
		{ 107, YYAT_SHIFT, 186 },
		{ 104, YYAT_SHIFT, 183 },
		{ 98, YYAT_SHIFT, 176 },
		{ 87, YYAT_SHIFT, 171 },
		{ 86, YYAT_SHIFT, 170 },
		{ 85, YYAT_SHIFT, 169 },
		{ 84, YYAT_SHIFT, 168 },
		{ 82, YYAT_SHIFT, 166 },
		{ 81, YYAT_SHIFT, 165 },
		{ 72, YYAT_SHIFT, 146 },
		{ 71, YYAT_SHIFT, 145 },
		{ 70, YYAT_SHIFT, 144 },
		{ 69, YYAT_SHIFT, 143 },
		{ 67, YYAT_SHIFT, 140 },
		{ 56, YYAT_ERROR, 0 },
		{ 50, YYAT_SHIFT, 34 },
		{ 45, YYAT_SHIFT, 116 },
		{ 39, YYAT_SHIFT, 35 },
		{ 36, YYAT_ERROR, 0 },
		{ 35, YYAT_SHIFT, 80 },
		{ 30, YYAT_SHIFT, 48 },
		{ 28, YYAT_SHIFT, 47 },
		{ 25, YYAT_ERROR, 0 },
		{ 19, YYAT_SHIFT, 19 },
		{ 17, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 77, YYAT_SHIFT, 153 },
		{ 77, YYAT_SHIFT, 154 },
		{ 77, YYAT_SHIFT, 155 },
		{ 77, YYAT_SHIFT, 156 },
		{ 77, YYAT_SHIFT, 157 },
		{ 77, YYAT_SHIFT, 158 },
		{ 77, YYAT_SHIFT, 159 },
		{ 77, YYAT_SHIFT, 160 },
		{ 77, YYAT_SHIFT, 161 },
		{ 77, YYAT_SHIFT, 162 },
		{ 193, YYAT_SHIFT, 20 },
		{ 207, YYAT_SHIFT, 138 },
		{ 207, YYAT_SHIFT, 139 },
		{ 286, YYAT_SHIFT, 58 },
		{ 286, YYAT_SHIFT, 59 },
		{ 286, YYAT_SHIFT, 60 },
		{ 286, YYAT_SHIFT, 61 },
		{ 286, YYAT_SHIFT, 62 },
		{ 23, YYAT_SHIFT, 1 },
		{ 23, YYAT_SHIFT, 2 },
		{ 23, YYAT_SHIFT, 3 },
		{ 23, YYAT_SHIFT, 4 },
		{ 23, YYAT_SHIFT, 5 },
		{ 23, YYAT_SHIFT, 6 },
		{ 23, YYAT_SHIFT, 7 },
		{ 23, YYAT_SHIFT, 8 },
		{ 75, YYAT_SHIFT, 150 },
		{ 75, YYAT_SHIFT, 151 },
		{ -1, YYAT_ERROR, 0 },
		{ 241, YYAT_SHIFT, 1 },
		{ 241, YYAT_SHIFT, 2 },
		{ 241, YYAT_SHIFT, 3 },
		{ 241, YYAT_SHIFT, 4 },
		{ 241, YYAT_SHIFT, 5 },
		{ 241, YYAT_SHIFT, 6 },
		{ 241, YYAT_SHIFT, 7 },
		{ 241, YYAT_SHIFT, 8 },
		{ 177, YYAT_SHIFT, 20 },
		{ 206, YYAT_SHIFT, 138 },
		{ 206, YYAT_SHIFT, 139 },
		{ -1, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 20 },
		{ 181, YYAT_SHIFT, 20 },
		{ 40, YYAT_SHIFT, 102 },
		{ 286, YYAT_SHIFT, 81 },
		{ -1, YYAT_ERROR, 0 },
		{ 286, YYAT_SHIFT, 82 },
		{ 286, YYAT_SHIFT, 83 },
		{ 286, YYAT_SHIFT, 84 },
		{ 286, YYAT_SHIFT, 85 },
		{ 286, YYAT_SHIFT, 86 },
		{ 286, YYAT_SHIFT, 87 },
		{ 259, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 138 },
		{ 66, YYAT_SHIFT, 139 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 0, 0, YYAT_REDUCE, 77 },
		{ 0, 0, YYAT_REDUCE, 74 },
		{ 0, 0, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 84 },
		{ 0, 0, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ 0, 0, YYAT_REDUCE, 171 },
		{ -165, 1, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ -173, 1, YYAT_REDUCE, 167 },
		{ 0, 0, YYAT_REDUCE, 168 },
		{ 0, 0, YYAT_REDUCE, 170 },
		{ 204, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ 161, 1, YYAT_REDUCE, 106 },
		{ 0, 0, YYAT_REDUCE, 98 },
		{ 2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ -51, 1, YYAT_REDUCE, 72 },
		{ -12, 1, YYAT_REDUCE, 97 },
		{ 160, 1, YYAT_DEFAULT, 36 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ 78, 1, YYAT_REDUCE, 83 },
		{ 0, 0, YYAT_REDUCE, 169 },
		{ 159, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 107 },
		{ 0, 0, YYAT_DEFAULT, 36 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ 0, 0, YYAT_DEFAULT, 251 },
		{ 74, 1, YYAT_DEFAULT, 95 },
		{ 140, 1, YYAT_DEFAULT, 193 },
		{ 0, 0, YYAT_REDUCE, 174 },
		{ 0, 0, YYAT_REDUCE, 173 },
		{ 74, 1, YYAT_DEFAULT, 183 },
		{ -3, 1, YYAT_DEFAULT, 241 },
		{ -15, 1, YYAT_DEFAULT, 257 },
		{ -15, 1, YYAT_REDUCE, 96 },
		{ -181, 1, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_DEFAULT, 193 },
		{ 71, 1, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 0, 0, YYAT_DEFAULT, 183 },
		{ 0, 0, YYAT_REDUCE, 99 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 134, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 69, 1, YYAT_DEFAULT, 200 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ -119, 1, YYAT_REDUCE, 33 },
		{ -127, 1, YYAT_REDUCE, 41 },
		{ 87, 1, YYAT_REDUCE, 27 },
		{ 7, 1, YYAT_REDUCE, 38 },
		{ 155, 1, YYAT_REDUCE, 43 },
		{ 82, 1, YYAT_REDUCE, 30 },
		{ 98, 1, YYAT_REDUCE, 45 },
		{ 67, 1, YYAT_REDUCE, 47 },
		{ -78, 1, YYAT_REDUCE, 49 },
		{ -80, 1, YYAT_REDUCE, 51 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ -23, 1, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 130 },
		{ -59, 1, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 153 },
		{ 0, 0, YYAT_REDUCE, 147 },
		{ 148, 1, YYAT_ERROR, 0 },
		{ 147, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ 146, 1, YYAT_ERROR, 0 },
		{ 126, 1, YYAT_ERROR, 0 },
		{ 125, 1, YYAT_ERROR, 0 },
		{ 124, 1, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 151 },
		{ 0, 0, YYAT_REDUCE, 144 },
		{ 0, 0, YYAT_REDUCE, 142 },
		{ 0, 0, YYAT_REDUCE, 145 },
		{ 0, 0, YYAT_REDUCE, 152 },
		{ 0, 0, YYAT_REDUCE, 143 },
		{ 0, 0, YYAT_REDUCE, 146 },
		{ -122, 1, YYAT_DEFAULT, 286 },
		{ 0, 0, YYAT_REDUCE, 149 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 123, 1, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 175 },
		{ 0, 0, YYAT_REDUCE, 172 },
		{ 0, 0, YYAT_REDUCE, 105 },
		{ 0, 0, YYAT_REDUCE, 114 },
		{ -5, 1, YYAT_REDUCE, 113 },
		{ 137, 1, YYAT_REDUCE, 108 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 109 },
		{ 139, 1, YYAT_ERROR, 0 },
		{ 86, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 102 },
		{ 85, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 89 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 119, 1, YYAT_REDUCE, 93 },
		{ -2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 91 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 51, 1, YYAT_DEFAULT, 183 },
		{ 134, 1, YYAT_DEFAULT, 277 },
		{ -83, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 133 },
		{ 0, 0, YYAT_REDUCE, 138 },
		{ 0, 0, YYAT_DEFAULT, 251 },
		{ -30, 1, YYAT_ERROR, 0 },
		{ -17, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 132, 1, YYAT_DEFAULT, 259 },
		{ -85, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 257 },
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
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ -119, 1, YYAT_ERROR, 0 },
		{ -232, 1, YYAT_DEFAULT, 232 },
		{ 0, 0, YYAT_REDUCE, 163 },
		{ 0, 0, YYAT_REDUCE, 164 },
		{ 0, 0, YYAT_REDUCE, 165 },
		{ -3, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 148 },
		{ 0, 0, YYAT_REDUCE, 150 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 154 },
		{ -9, 1, YYAT_DEFAULT, 241 },
		{ -18, 1, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 111 },
		{ -21, 1, YYAT_REDUCE, 117 },
		{ -4, 1, YYAT_REDUCE, 116 },
		{ 0, 0, YYAT_REDUCE, 112 },
		{ 129, 1, YYAT_DEFAULT, 241 },
		{ 0, 0, YYAT_REDUCE, 104 },
		{ -88, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 103 },
		{ 0, 0, YYAT_REDUCE, 101 },
		{ 0, 0, YYAT_REDUCE, 100 },
		{ -101, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 94 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ -36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 88 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 141 },
		{ 74, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 134 },
		{ -33, 1, YYAT_DEFAULT, 251 },
		{ 0, 0, YYAT_REDUCE, 131 },
		{ 0, 0, YYAT_REDUCE, 137 },
		{ 0, 0, YYAT_REDUCE, 139 },
		{ 38, 1, YYAT_REDUCE, 31 },
		{ 28, 1, YYAT_REDUCE, 32 },
		{ -15, 1, YYAT_REDUCE, 39 },
		{ -42, 1, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ -125, 1, YYAT_REDUCE, 34 },
		{ -127, 1, YYAT_REDUCE, 35 },
		{ -132, 1, YYAT_REDUCE, 36 },
		{ -166, 1, YYAT_REDUCE, 37 },
		{ -202, 1, YYAT_REDUCE, 42 },
		{ 86, 1, YYAT_REDUCE, 28 },
		{ 47, 1, YYAT_REDUCE, 29 },
		{ 128, 1, YYAT_REDUCE, 44 },
		{ 63, 1, YYAT_REDUCE, 46 },
		{ 32, 1, YYAT_REDUCE, 48 },
		{ -113, 1, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ -5, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 113, 1, YYAT_DEFAULT, 277 },
		{ 112, 1, YYAT_DEFAULT, 277 },
		{ 112, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 232 },
		{ 92, 1, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 166 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 126 },
		{ 109, 1, YYAT_ERROR, 0 },
		{ 108, 1, YYAT_ERROR, 0 },
		{ 55, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 120 },
		{ 54, 1, YYAT_ERROR, 0 },
		{ -40, 1, YYAT_ERROR, 0 },
		{ -27, 1, YYAT_DEFAULT, 257 },
		{ -29, 1, YYAT_REDUCE, 118 },
		{ 0, 0, YYAT_REDUCE, 110 },
		{ 0, 0, YYAT_REDUCE, 115 },
		{ 0, 0, YYAT_REDUCE, 95 },
		{ 0, 0, YYAT_REDUCE, 92 },
		{ 0, 0, YYAT_REDUCE, 140 },
		{ 0, 0, YYAT_REDUCE, 132 },
		{ 0, 0, YYAT_REDUCE, 135 },
		{ 23, 1, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ 104, 1, YYAT_DEFAULT, 259 },
		{ 100, 1, YYAT_DEFAULT, 259 },
		{ -25, 1, YYAT_DEFAULT, 286 },
		{ 0, 0, YYAT_REDUCE, 119 },
		{ 0, 0, YYAT_REDUCE, 127 },
		{ 0, 0, YYAT_REDUCE, 124 },
		{ 0, 0, YYAT_REDUCE, 121 },
		{ 0, 0, YYAT_REDUCE, 128 },
		{ 91, 1, YYAT_ERROR, 0 },
		{ 33, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 122 },
		{ -2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 136 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -204, 1, YYAT_REDUCE, 155 },
		{ 0, 0, YYAT_REDUCE, 157 },
		{ 18, 1, YYAT_DEFAULT, 277 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ -11, 1, YYAT_DEFAULT, 277 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ -1, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 129 },
		{ 0, 0, YYAT_REDUCE, 125 },
		{ 0, 0, YYAT_REDUCE, 123 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ -38, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 161 },
		{ 0, 0, YYAT_DEFAULT, 286 },
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
		{ 286, 74 },
		{ 286, 75 },
		{ 259, 277 },
		{ 286, 77 },
		{ 286, 78 },
		{ 286, 65 },
		{ 286, 68 },
		{ 286, 63 },
		{ 286, 66 },
		{ 286, 64 },
		{ 286, 67 },
		{ 286, 69 },
		{ 286, 70 },
		{ 286, 71 },
		{ 286, 72 },
		{ 286, 97 },
		{ 232, 98 },
		{ 286, 98 },
		{ 95, 88 },
		{ 95, 36 },
		{ 147, 223 },
		{ 284, 289 },
		{ 95, 11 },
		{ 95, 12 },
		{ 95, 13 },
		{ 14, 10 },
		{ 14, 9 },
		{ 192, 191 },
		{ 23, 37 },
		{ 40, 107 },
		{ 259, -1 },
		{ 259, -1 },
		{ 40, 105 },
		{ 147, 224 },
		{ 259, -1 },
		{ 259, -1 },
		{ 259, -1 },
		{ 259, -1 },
		{ 192, 189 },
		{ 192, -1 },
		{ 39, 99 },
		{ 39, 36 },
		{ 192, 246 },
		{ 251, 76 },
		{ 95, 92 },
		{ 286, 290 },
		{ 286, 90 },
		{ 95, 174 },
		{ 232, 259 },
		{ 286, 93 },
		{ 286, 89 },
		{ 286, 91 },
		{ 286, 94 },
		{ 168, 231 },
		{ 168, 36 },
		{ 23, 38 },
		{ 281, 287 },
		{ 168, 11 },
		{ 168, 12 },
		{ 168, 13 },
		{ 241, 103 },
		{ 14, 29 },
		{ 14, 16 },
		{ 241, 11 },
		{ 241, 12 },
		{ 241, 13 },
		{ 23, 39 },
		{ 39, 100 },
		{ 251, 269 },
		{ 11, 26 },
		{ 177, 30 },
		{ 177, 24 },
		{ 177, 181 },
		{ 177, 237 },
		{ 241, 265 },
		{ 241, 104 },
		{ 241, 106 },
		{ 177, 236 },
		{ 177, 180 },
		{ 118, -1 },
		{ 145, 220 },
		{ 145, -1 },
		{ 118, 43 },
		{ 168, 232 },
		{ 276, 285 },
		{ 11, -1 },
		{ 118, 117 },
		{ 118, 44 },
		{ 103, 179 },
		{ 274, 283 },
		{ 103, 181 },
		{ 36, 21 },
		{ 36, 22 },
		{ 146, 221 },
		{ 146, -1 },
		{ 103, 182 },
		{ 103, 180 },
		{ 253, 270 },
		{ 146, -1 },
		{ 253, -1 },
		{ 200, 250 },
		{ 36, 50 },
		{ 200, 251 },
		{ 200, 126 },
		{ 200, 123 },
		{ 193, 247 },
		{ 193, 113 },
		{ 193, 24 },
		{ 193, 25 },
		{ 183, -1 },
		{ 183, -1 },
		{ 183, 244 },
		{ 142, 217 },
		{ 142, -1 },
		{ 142, -1 },
		{ 56, 122 },
		{ 56, 125 },
		{ 56, 124 },
		{ 0, 17 },
		{ 0, 14 },
		{ 0, 15 },
		{ 135, 210 },
		{ 258, 275 },
		{ 135, -1 },
		{ 144, 219 },
		{ 144, -1 },
		{ 143, 218 },
		{ 143, -1 },
		{ 140, 215 },
		{ 140, -1 },
		{ 139, 214 },
		{ 139, -1 },
		{ 132, 207 },
		{ 132, -1 },
		{ 130, 65 },
		{ 130, 205 },
		{ 47, 118 },
		{ 47, 46 },
		{ 44, 114 },
		{ 44, 115 },
		{ 43, -1 },
		{ 43, 111 },
		{ 35, 95 },
		{ 35, 96 },
		{ 32, -1 },
		{ 32, 49 },
		{ 18, -1 },
		{ 18, 30 },
		{ 257, 273 },
		{ 256, 272 },
		{ 255, 271 },
		{ 242, 268 },
		{ 231, 258 },
		{ 181, 243 },
		{ 178, 240 },
		{ 175, 234 },
		{ 166, 229 },
		{ 165, 228 },
		{ 163, 227 },
		{ 149, 226 },
		{ 141, 216 },
		{ 138, 213 },
		{ 137, 212 },
		{ 136, 211 },
		{ 134, 209 },
		{ 133, 208 },
		{ 131, 206 },
		{ 129, 204 },
		{ 126, 203 },
		{ 124, 199 },
		{ 121, 198 },
		{ 112, 190 },
		{ 87, 172 },
		{ 83, 167 },
		{ 78, 164 },
		{ 77, 163 },
		{ 62, 128 },
		{ 61, 127 },
		{ 53, 119 },
		{ 41, 110 },
		{ 34, 73 },
		{ 27, 45 },
		{ 25, 42 },
		{ 19, 31 },
		{ 9, 23 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 64, 14 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 152, 36 },
		{ 0, -1 },
		{ 48, 183 },
		{ 0, -1 },
		{ 0, -1 },
		{ 5, 11 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 115, 193 },
		{ 149, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 8, 39 },
		{ 0, -1 },
		{ 149, -1 },
		{ 0, -1 },
		{ 154, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 122, 36 },
		{ 0, -1 },
		{ 139, 251 },
		{ 94, 95 },
		{ 69, 18 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 11 },
		{ -6, 241 },
		{ 163, 253 },
		{ 0, -1 },
		{ 112, 118 },
		{ 108, 193 },
		{ 0, 118 },
		{ 0, -1 },
		{ 109, 118 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 160, 259 },
		{ 0, -1 },
		{ 0, -1 },
		{ 74, 200 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 173, 135 },
		{ 172, 135 },
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
		{ 158, -1 },
		{ 170, 135 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 127, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 154, 259 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 56, 18 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 152, 192 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 58, 11 },
		{ 0, -1 },
		{ 0, -1 },
		{ 151, 192 },
		{ 0, -1 },
		{ 0, -1 },
		{ 128, 251 },
		{ 0, -1 },
		{ 123, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 160, 130 },
		{ 128, 142 },
		{ 157, 132 },
		{ 123, 140 },
		{ 161, 135 },
		{ 160, 135 },
		{ 117, 142 },
		{ 155, 139 },
		{ 154, 139 },
		{ 153, 139 },
		{ 122, 132 },
		{ 118, 143 },
		{ 154, 142 },
		{ 106, 139 },
		{ 115, 144 },
		{ 112, 145 },
		{ 67, 146 },
		{ 79, 192 },
		{ 17, 253 },
		{ 0, -1 },
		{ 141, 259 },
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
		{ 142, 253 },
		{ 0, -1 },
		{ 139, 259 },
		{ 138, 259 },
		{ 0, -1 },
		{ 33, 232 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 139, 253 },
		{ 0, -1 },
		{ 38, 241 },
		{ 138, 253 },
		{ 0, -1 },
		{ 0, -1 },
		{ 113, 25 },
		{ 0, -1 },
		{ 74, 241 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 23, 253 },
		{ 74, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 59, 251 },
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
		{ 0, -1 },
		{ 102, 232 },
		{ -2, 259 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 39, -1 },
		{ 135, 253 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 27, 253 },
		{ 0, -1 },
		{ 81, 259 },
		{ 0, -1 },
		{ 104, 286 },
		{ 103, 286 },
		{ 130, 259 },
		{ 104, 259 },
		{ -16, 286 },
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
		{ 43, 286 },
		{ 0, -1 },
		{ 38, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 10, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ -25, 286 },
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
#line 1051 ".\\myparser.y"

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
			table_init();
			lexer.yyin = new ifstream("input.c");
			ofstream outf("out.asm");
			cout.rdbuf(outf.rdbuf());
			n = parser.yyparse();
			// parse_tree.get_label();
			// parse_tree.gen_code(*lexer.yyout);
		}
	}
	system("pause");
	return n;
}


