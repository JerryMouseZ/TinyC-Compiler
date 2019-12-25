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
* Time: 20:30:37
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
				temp = temp->sibing;
			}
			(*(YYSTYPE YYFAR*)yyvalptr)->code += ")\n";
		}
		else if(yyattribute(1 - 4)->name == "scanf"){
			// 而且有%lf的话还要使用 call ReadFloat
			// 数里面的百分号，以 %lf 作分隔符，调用多次 invoke __scanf
			string format = yyattribute(3 - 4)->svalue;
			Node * temp = yyattribute(3 - 4)->sibing;
			int i=0;
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
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tinvoke crt_scanf, addr int_buffer, ";
					(*(YYSTYPE YYFAR*)yyvalptr)->code += temp_table[temp->it] + "\n";
				}
				else if(format[i+1] == 'c'){
					(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tinvoke crt_scanf, addr ch_buffer, ";
					(*(YYSTYPE YYFAR*)yyvalptr)->code += temp_table[temp->it] + "\n";
				}
				temp = temp->sibing;
				i++;
			}
		}
		else{
			;
		}
	
#line 363 "myparser.cpp"
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
#line 144 ".\\myparser.y"

		// 结构操作，取出该结构的成员
		cout<<"."<<endl;
	
#line 379 "myparser.cpp"
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
#line 148 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 398 "myparser.cpp"
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
#line 155 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 2)->code + generate_post_code(yyattribute(1 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(1 - 2)->v_type;
	
#line 417 "myparser.cpp"
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
#line 166 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 432 "myparser.cpp"
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
#line 169 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
		Node*temp = yyattribute(1 - 3);
		while(temp->sibing != NULL){
			temp = temp->sibing;
		}
		temp->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 3)->code;
	
#line 453 "myparser.cpp"
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
#line 181 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 466 "myparser.cpp"
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
#line 182 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "++");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 485 "myparser.cpp"
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
#line 189 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_post_code(yyattribute(2 - 2), "--");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 504 "myparser.cpp"
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
#line 196 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 2)->code + generate_pre_code(yyattribute(2 - 2), temp_operator);
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = yyattribute(2 - 2)->v_type;
	
#line 523 "myparser.cpp"
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
#line 206 ".\\myparser.y"
temp_operator = "&";
#line 536 "myparser.cpp"
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
#line 207 ".\\myparser.y"
temp_operator = "*";
#line 549 "myparser.cpp"
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
#line 208 ".\\myparser.y"
temp_operator = "-";
#line 562 "myparser.cpp"
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
#line 209 ".\\myparser.y"
temp_operator = "~";
#line 575 "myparser.cpp"
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
#line 210 ".\\myparser.y"
temp_operator = "!";
#line 588 "myparser.cpp"
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
#line 214 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 601 "myparser.cpp"
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
#line 215 ".\\myparser.y"

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

	
#line 633 "myparser.cpp"
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
#line 235 ".\\myparser.y"

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

		
	
#line 667 "myparser.cpp"
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
#line 257 ".\\myparser.y"

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

		
	
#line 699 "myparser.cpp"
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
#line 280 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 712 "myparser.cpp"
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
#line 281 ".\\myparser.y"

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

		
	
#line 746 "myparser.cpp"
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
#line 303 ".\\myparser.y"

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

		
	
#line 775 "myparser.cpp"
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
#line 323 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 788 "myparser.cpp"
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
#line 324 ".\\myparser.y"

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
	
#line 817 "myparser.cpp"
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
#line 341 ".\\myparser.y"

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
	
#line 846 "myparser.cpp"
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
#line 361 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 859 "myparser.cpp"
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
#line 362 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "<");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 882 "myparser.cpp"
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
#line 373 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), ">");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 905 "myparser.cpp"
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
#line 384 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "<=");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 928 "myparser.cpp"
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
#line 395 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), ">=");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 951 "myparser.cpp"
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
#line 409 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 964 "myparser.cpp"
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
#line 410 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "==");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 987 "myparser.cpp"
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
#line 421 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_bool_code(yyattribute(1 - 3), yyattribute(3 - 3), "!=");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
		(*(YYSTYPE YYFAR*)yyvalptr)->end_label = label_number;
	
#line 1010 "myparser.cpp"
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
#line 435 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1023 "myparser.cpp"
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
#line 436 ".\\myparser.y"

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

		
	
#line 1054 "myparser.cpp"
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
#line 458 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1067 "myparser.cpp"
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
#line 459 ".\\myparser.y"

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

		
	
#line 1098 "myparser.cpp"
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
#line 481 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1111 "myparser.cpp"
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
#line 482 ".\\myparser.y"

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
	
#line 1140 "myparser.cpp"
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
#line 502 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1153 "myparser.cpp"
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
#line 503 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_and_or_code(yyattribute(1 - 3), yyattribute(3 - 3), "&&");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
	
#line 1175 "myparser.cpp"
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
#line 516 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1188 "myparser.cpp"
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
#line 517 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_expr_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(1 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(3 - 3);
		yyattribute(1 - 3)->sibing = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(1 - 3)->code + yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_and_or_code(yyattribute(1 - 3), yyattribute(3 - 3), "||");
		(*(YYSTYPE YYFAR*)yyvalptr)->it = temp_top;
	
#line 1210 "myparser.cpp"
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
#line 531 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1223 "myparser.cpp"
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
#line 532 ".\\myparser.y"

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

	
#line 1265 "myparser.cpp"
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
#line 565 ".\\myparser.y"
temp_operator = "=";
#line 1278 "myparser.cpp"
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
#line 566 ".\\myparser.y"
temp_operator = "*=";
#line 1291 "myparser.cpp"
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
#line 567 ".\\myparser.y"
temp_operator = "/=";
#line 1304 "myparser.cpp"
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
#line 568 ".\\myparser.y"
temp_operator = "%=";
#line 1317 "myparser.cpp"
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
#line 569 ".\\myparser.y"
temp_operator = "+=";
#line 1330 "myparser.cpp"
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
#line 570 ".\\myparser.y"
temp_operator = "-=";
#line 1343 "myparser.cpp"
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
#line 571 ".\\myparser.y"
temp_operator = "<<=";
#line 1356 "myparser.cpp"
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
#line 572 ".\\myparser.y"
temp_operator = ">>=";
#line 1369 "myparser.cpp"
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
#line 573 ".\\myparser.y"
temp_operator = "&=";
#line 1382 "myparser.cpp"
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
#line 574 ".\\myparser.y"
temp_operator = "^=";
#line 1395 "myparser.cpp"
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
#line 575 ".\\myparser.y"
temp_operator = "|=";
#line 1408 "myparser.cpp"
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
#line 579 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1421 "myparser.cpp"
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
#line 580 ".\\myparser.y"

		// 和 list的处理方法一样

	
#line 1437 "myparser.cpp"
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
#line 591 ".\\myparser.y"

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
	
#line 1469 "myparser.cpp"
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
#line 614 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1482 "myparser.cpp"
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
#line 619 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 1495 "myparser.cpp"
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
#line 620 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
		Node*temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing !=NULL)
			temp = temp->sibing;
		temp->sibing = yyattribute(3 - 3);
	
#line 1514 "myparser.cpp"
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
#line 630 ".\\myparser.y"

		// a
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		// 存入符号表，状态为未初始化
		(*(YYSTYPE YYFAR*)yyvalptr)->state = Not_Init;
	
#line 1532 "myparser.cpp"
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
#line 636 ".\\myparser.y"

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

	
#line 1564 "myparser.cpp"
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
#line 660 ".\\myparser.y"

#line 1577 "myparser.cpp"
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
#line 661 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Char;
#line 1590 "myparser.cpp"
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
#line 662 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Integer;
#line 1603 "myparser.cpp"
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
#line 663 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Double;
#line 1616 "myparser.cpp"
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
#line 664 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = new Node();(*(YYSTYPE YYFAR*)yyvalptr)->v_type = Boolean;
#line 1629 "myparser.cpp"
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
#line 670 ".\\myparser.y"

		//cout<<"struct!"<<endl;
	
#line 1644 "myparser.cpp"
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
#line 710 ".\\myparser.y"

		// declarator *a

	
#line 1660 "myparser.cpp"
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
#line 714 ".\\myparser.y"

		// a
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 1676 "myparser.cpp"
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
#line 722 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		// cout<< "声明语句标识符"<<endl;
	
#line 1692 "myparser.cpp"
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
#line 782 ".\\myparser.y"

		// 秀啊，还用表达式来初始化，那初始化值就是没有的了
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	
#line 1708 "myparser.cpp"
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
#line 807 ".\\myparser.y"

#line 1721 "myparser.cpp"
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
#line 812 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1734 "myparser.cpp"
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
#line 813 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1747 "myparser.cpp"
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
#line 814 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1760 "myparser.cpp"
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
#line 815 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1773 "myparser.cpp"
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
#line 823 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		Node*temp = yyattribute(2 - 3);
		while(temp != NULL){
			(*(YYSTYPE YYFAR*)yyvalptr)->code += temp->code;
			temp = temp->sibing;
		}
	
#line 1793 "myparser.cpp"
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
#line 834 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1806 "myparser.cpp"
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
#line 835 ".\\myparser.y"

		// 要串起来
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
		Node*temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing != NULL)
			temp = temp->sibing;
		temp->sibing = yyattribute(2 - 2);
	
#line 1826 "myparser.cpp"
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
#line 846 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1839 "myparser.cpp"
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
#line 847 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1852 "myparser.cpp"
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
#line 851 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
#line 1865 "myparser.cpp"
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
#line 852 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
	
#line 1880 "myparser.cpp"
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
#line 858 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(5 - 5);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_if_code(yyattribute(3 - 5),yyattribute(5 - 5),NULL);
	
#line 1898 "myparser.cpp"
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
#line 864 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->children[0] = yyattribute(3 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[1] = yyattribute(5 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->children[2] = yyattribute(7 - 7);
		(*(YYSTYPE YYFAR*)yyvalptr)->code += generate_if_code(yyattribute(3 - 7),yyattribute(5 - 7),yyattribute(7 - 7));
	
#line 1917 "myparser.cpp"
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
#line 874 ".\\myparser.y"

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
	
#line 1944 "myparser.cpp"
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
#line 889 ".\\myparser.y"

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
	
#line 1971 "myparser.cpp"
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
#line 904 ".\\myparser.y"

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
	
#line 2002 "myparser.cpp"
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
#line 923 ".\\myparser.y"

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
	
#line 2034 "myparser.cpp"
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
#line 943 ".\\myparser.y"

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
	
#line 2064 "myparser.cpp"
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
#line 961 ".\\myparser.y"

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
	
#line 2096 "myparser.cpp"
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
#line 991 ".\\myparser.y"

		cout<<generate_header();
		cout<<generate_var_define();
		Node * temp = yyattribute(1 - 1);
		while(temp != NULL){
			cout<<temp->code;
			temp = temp->sibing;
		}
		cout<<"end start"<<endl;
	
#line 2118 "myparser.cpp"
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
#line 1004 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 2131 "myparser.cpp"
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
#line 1005 ".\\myparser.y"

		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
		Node * temp = (*(YYSTYPE YYFAR*)yyvalptr);
		while(temp->sibing != NULL){
			temp = temp->sibing;
		}
		temp->sibing = yyattribute(2 - 2);
	
#line 2151 "myparser.cpp"
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
#line 1016 ".\\myparser.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 2164 "myparser.cpp"
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
#line 1021 ".\\myparser.y"


	
#line 2179 "myparser.cpp"
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
#line 1024 ".\\myparser.y"

		// 无参函数定义
		(*(YYSTYPE YYFAR*)yyvalptr) = generate_stmt_node();
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 3)->name + " proc\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(3 - 3)->code;
		(*(YYSTYPE YYFAR*)yyvalptr)->code += "\tret\n";
		(*(YYSTYPE YYFAR*)yyvalptr)->code += yyattribute(2 - 3)->name + " endp\n";
	
#line 2199 "myparser.cpp"
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
#line 1035 ".\\myparser.y"


	
#line 2214 "myparser.cpp"
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
#line 1038 ".\\myparser.y"


	
#line 2229 "myparser.cpp"
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
		{ 286, YYAT_SHIFT, 49 },
		{ 241, YYAT_SHIFT, 264 },
		{ 65, YYAT_SHIFT, 135 },
		{ 96, YYAT_SHIFT, 175 },
		{ 193, YYAT_SHIFT, 19 },
		{ 286, YYAT_SHIFT, 50 },
		{ 193, YYAT_SHIFT, 20 },
		{ 286, YYAT_SHIFT, 51 },
		{ 13, YYAT_SHIFT, 27 },
		{ 286, YYAT_SHIFT, 52 },
		{ 22, YYAT_SHIFT, 32 },
		{ 243, YYAT_SHIFT, 241 },
		{ 286, YYAT_SHIFT, 53 },
		{ 202, YYAT_SHIFT, 120 },
		{ 126, YYAT_SHIFT, 202 },
		{ 242, YYAT_SHIFT, 266 },
		{ 259, YYAT_SHIFT, 276 },
		{ 64, YYAT_SHIFT, 130 },
		{ 213, YYAT_SHIFT, 158 },
		{ 180, YYAT_SHIFT, 241 },
		{ 213, YYAT_SHIFT, 159 },
		{ 282, YYAT_SHIFT, 288 },
		{ 193, YYAT_SHIFT, 112 },
		{ 64, YYAT_SHIFT, 131 },
		{ 178, YYAT_SHIFT, 238 },
		{ 42, YYAT_SHIFT, 108 },
		{ 286, YYAT_SHIFT, 77 },
		{ 40, YYAT_SHIFT, 41 },
		{ 26, YYAT_SHIFT, 41 },
		{ 124, YYAT_SHIFT, 120 },
		{ 275, YYAT_SHIFT, 284 },
		{ 177, YYAT_SHIFT, 177 },
		{ 177, YYAT_SHIFT, 235 },
		{ 177, YYAT_SHIFT, 20 },
		{ 259, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 177 },
		{ 182, YYAT_SHIFT, 177 },
		{ 103, YYAT_SHIFT, 20 },
		{ 41, YYAT_SHIFT, 101 },
		{ 208, YYAT_SHIFT, 173 },
		{ 277, YYAT_SHIFT, 286 },
		{ 172, YYAT_SHIFT, 173 },
		{ 115, YYAT_SHIFT, 193 },
		{ 277, YYAT_SHIFT, 173 },
		{ 124, YYAT_SHIFT, 200 },
		{ 212, YYAT_SHIFT, 158 },
		{ 23, YYAT_SHIFT, 38 },
		{ 212, YYAT_SHIFT, 159 },
		{ 168, YYAT_SHIFT, 1 },
		{ 168, YYAT_SHIFT, 2 },
		{ 168, YYAT_SHIFT, 3 },
		{ 168, YYAT_SHIFT, 4 },
		{ 168, YYAT_SHIFT, 5 },
		{ 168, YYAT_SHIFT, 6 },
		{ 168, YYAT_SHIFT, 7 },
		{ 168, YYAT_SHIFT, 8 },
		{ 172, YYAT_SHIFT, 233 },
		{ 115, YYAT_SHIFT, 194 },
		{ 202, YYAT_SHIFT, 121 },
		{ 273, YYAT_SHIFT, 282 },
		{ 205, YYAT_SHIFT, 252 },
		{ 23, YYAT_SHIFT, 39 },
		{ 243, YYAT_SHIFT, 242 },
		{ 205, YYAT_SHIFT, 253 },
		{ 225, YYAT_SHIFT, 149 },
		{ 225, YYAT_SHIFT, 150 },
		{ 242, YYAT_SHIFT, 267 },
		{ 73, YYAT_SHIFT, 158 },
		{ 64, YYAT_SHIFT, 132 },
		{ 73, YYAT_SHIFT, 159 },
		{ 180, YYAT_SHIFT, 242 },
		{ 220, YYAT_SHIFT, 163 },
		{ 22, YYAT_SHIFT, 33 },
		{ 220, YYAT_SHIFT, 164 },
		{ 124, YYAT_SHIFT, 121 },
		{ 178, YYAT_SHIFT, 239 },
		{ 42, YYAT_SHIFT, 109 },
		{ 104, YYAT_SHIFT, 183 },
		{ 40, YYAT_SHIFT, 42 },
		{ 26, YYAT_SHIFT, 42 },
		{ 104, YYAT_SHIFT, 184 },
		{ 219, YYAT_SHIFT, 163 },
		{ 177, YYAT_SHIFT, 178 },
		{ 219, YYAT_SHIFT, 164 },
		{ 227, YYAT_SHIFT, 151 },
		{ 271, YYAT_SHIFT, 281 },
		{ 103, YYAT_SHIFT, 178 },
		{ 182, YYAT_SHIFT, 178 },
		{ 208, YYAT_SHIFT, 254 },
		{ 227, YYAT_SHIFT, 152 },
		{ 286, YYAT_SHIFT, 33 },
		{ 268, YYAT_SHIFT, 280 },
		{ 202, YYAT_SHIFT, 249 },
		{ 286, YYAT_SHIFT, 55 },
		{ 227, YYAT_SHIFT, 153 },
		{ 126, YYAT_SHIFT, 203 },
		{ 224, YYAT_SHIFT, 156 },
		{ 224, YYAT_SHIFT, 157 },
		{ 259, YYAT_ERROR, 0 },
		{ 43, YYAT_SHIFT, 1 },
		{ 43, YYAT_SHIFT, 2 },
		{ 43, YYAT_SHIFT, 3 },
		{ 43, YYAT_SHIFT, 4 },
		{ 43, YYAT_SHIFT, 5 },
		{ 43, YYAT_SHIFT, 6 },
		{ 43, YYAT_SHIFT, 7 },
		{ 43, YYAT_SHIFT, 8 },
		{ 16, YYAT_SHIFT, 1 },
		{ 16, YYAT_SHIFT, 2 },
		{ 16, YYAT_SHIFT, 3 },
		{ 16, YYAT_SHIFT, 4 },
		{ 16, YYAT_SHIFT, 5 },
		{ 16, YYAT_SHIFT, 6 },
		{ 16, YYAT_SHIFT, 7 },
		{ 16, YYAT_SHIFT, 8 },
		{ 10, YYAT_SHIFT, 1 },
		{ 10, YYAT_SHIFT, 2 },
		{ 10, YYAT_SHIFT, 3 },
		{ 10, YYAT_SHIFT, 4 },
		{ 10, YYAT_SHIFT, 5 },
		{ 10, YYAT_SHIFT, 6 },
		{ 10, YYAT_SHIFT, 7 },
		{ 10, YYAT_SHIFT, 8 },
		{ 226, YYAT_SHIFT, 151 },
		{ 69, YYAT_SHIFT, 151 },
		{ 75, YYAT_SHIFT, 163 },
		{ 266, YYAT_SHIFT, 279 },
		{ 75, YYAT_SHIFT, 164 },
		{ 226, YYAT_SHIFT, 152 },
		{ 69, YYAT_SHIFT, 152 },
		{ 223, YYAT_SHIFT, 156 },
		{ 223, YYAT_SHIFT, 157 },
		{ 265, YYAT_SHIFT, 278 },
		{ 226, YYAT_SHIFT, 153 },
		{ 69, YYAT_SHIFT, 153 },
		{ 222, YYAT_SHIFT, 156 },
		{ 222, YYAT_SHIFT, 157 },
		{ 221, YYAT_SHIFT, 156 },
		{ 221, YYAT_SHIFT, 157 },
		{ 72, YYAT_SHIFT, 156 },
		{ 72, YYAT_SHIFT, 157 },
		{ 258, YYAT_SHIFT, 274 },
		{ 13, YYAT_SHIFT, 28 },
		{ 68, YYAT_SHIFT, 149 },
		{ 68, YYAT_SHIFT, 150 },
		{ 257, YYAT_ERROR, 0 },
		{ 251, YYAT_SHIFT, 54 },
		{ 240, YYAT_SHIFT, 263 },
		{ 238, YYAT_SHIFT, 262 },
		{ 237, YYAT_SHIFT, 261 },
		{ 236, YYAT_SHIFT, 260 },
		{ 232, YYAT_SHIFT, 77 },
		{ 230, YYAT_SHIFT, 257 },
		{ 229, YYAT_SHIFT, 256 },
		{ 228, YYAT_SHIFT, 255 },
		{ 218, YYAT_SHIFT, 148 },
		{ 217, YYAT_SHIFT, 147 },
		{ 211, YYAT_SHIFT, 154 },
		{ 96, YYAT_SHIFT, 1 },
		{ 96, YYAT_SHIFT, 2 },
		{ 96, YYAT_SHIFT, 3 },
		{ 96, YYAT_SHIFT, 4 },
		{ 96, YYAT_SHIFT, 5 },
		{ 96, YYAT_SHIFT, 6 },
		{ 96, YYAT_SHIFT, 7 },
		{ 96, YYAT_SHIFT, 8 },
		{ 210, YYAT_SHIFT, 162 },
		{ 198, YYAT_SHIFT, 248 },
		{ 190, YYAT_SHIFT, 155 },
		{ 185, YYAT_ERROR, 0 },
		{ 184, YYAT_SHIFT, 244 },
		{ 167, YYAT_SHIFT, 230 },
		{ 131, YYAT_SHIFT, 207 },
		{ 130, YYAT_SHIFT, 204 },
		{ 120, YYAT_SHIFT, 197 },
		{ 119, YYAT_SHIFT, 196 },
		{ 118, YYAT_SHIFT, 195 },
		{ 113, YYAT_SHIFT, 192 },
		{ 110, YYAT_SHIFT, 188 },
		{ 108, YYAT_SHIFT, 187 },
		{ 106, YYAT_SHIFT, 186 },
		{ 105, YYAT_SHIFT, 185 },
		{ 97, YYAT_SHIFT, 32 },
		{ 86, YYAT_SHIFT, 174 },
		{ 85, YYAT_SHIFT, 171 },
		{ 84, YYAT_SHIFT, 170 },
		{ 83, YYAT_SHIFT, 169 },
		{ 82, YYAT_SHIFT, 168 },
		{ 80, YYAT_SHIFT, 166 },
		{ 79, YYAT_SHIFT, 165 },
		{ 74, YYAT_SHIFT, 162 },
		{ 71, YYAT_SHIFT, 155 },
		{ 70, YYAT_SHIFT, 154 },
		{ 67, YYAT_SHIFT, 148 },
		{ 66, YYAT_SHIFT, 147 },
		{ 54, YYAT_ERROR, 0 },
		{ 46, YYAT_SHIFT, 116 },
		{ 38, YYAT_ERROR, 0 },
		{ 37, YYAT_SHIFT, 33 },
		{ 33, YYAT_SHIFT, 78 },
		{ 30, YYAT_SHIFT, 48 },
		{ 28, YYAT_SHIFT, 47 },
		{ 25, YYAT_ERROR, 0 },
		{ 20, YYAT_SHIFT, 20 },
		{ 9, YYAT_ACCEPT, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 136 },
		{ 65, YYAT_SHIFT, 137 },
		{ 65, YYAT_SHIFT, 138 },
		{ 65, YYAT_SHIFT, 139 },
		{ 65, YYAT_SHIFT, 140 },
		{ 65, YYAT_SHIFT, 141 },
		{ 65, YYAT_SHIFT, 142 },
		{ 65, YYAT_SHIFT, 143 },
		{ 65, YYAT_SHIFT, 144 },
		{ 65, YYAT_SHIFT, 145 },
		{ 193, YYAT_SHIFT, 21 },
		{ 213, YYAT_SHIFT, 160 },
		{ 213, YYAT_SHIFT, 161 },
		{ 286, YYAT_SHIFT, 56 },
		{ 286, YYAT_SHIFT, 57 },
		{ 286, YYAT_SHIFT, 58 },
		{ 286, YYAT_SHIFT, 59 },
		{ 286, YYAT_SHIFT, 60 },
		{ 22, YYAT_SHIFT, 1 },
		{ 22, YYAT_SHIFT, 2 },
		{ 22, YYAT_SHIFT, 3 },
		{ 22, YYAT_SHIFT, 4 },
		{ 22, YYAT_SHIFT, 5 },
		{ 22, YYAT_SHIFT, 6 },
		{ 22, YYAT_SHIFT, 7 },
		{ 22, YYAT_SHIFT, 8 },
		{ 64, YYAT_SHIFT, 133 },
		{ 64, YYAT_SHIFT, 134 },
		{ -1, YYAT_ERROR, 0 },
		{ 241, YYAT_SHIFT, 1 },
		{ 241, YYAT_SHIFT, 2 },
		{ 241, YYAT_SHIFT, 3 },
		{ 241, YYAT_SHIFT, 4 },
		{ 241, YYAT_SHIFT, 5 },
		{ 241, YYAT_SHIFT, 6 },
		{ 241, YYAT_SHIFT, 7 },
		{ 241, YYAT_SHIFT, 8 },
		{ 177, YYAT_SHIFT, 21 },
		{ 212, YYAT_SHIFT, 160 },
		{ 212, YYAT_SHIFT, 161 },
		{ -1, YYAT_ERROR, 0 },
		{ 103, YYAT_SHIFT, 21 },
		{ 182, YYAT_SHIFT, 21 },
		{ 41, YYAT_SHIFT, 102 },
		{ 286, YYAT_SHIFT, 79 },
		{ -1, YYAT_ERROR, 0 },
		{ 286, YYAT_SHIFT, 80 },
		{ 286, YYAT_SHIFT, 81 },
		{ 286, YYAT_SHIFT, 82 },
		{ 286, YYAT_SHIFT, 83 },
		{ 286, YYAT_SHIFT, 84 },
		{ 286, YYAT_SHIFT, 85 },
		{ 259, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 259, YYAT_ERROR, 0 },
		{ 73, YYAT_SHIFT, 160 },
		{ 73, YYAT_SHIFT, 161 }
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
		{ 204, 1, YYAT_ERROR, 0 },
		{ -165, 1, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_DEFAULT, 38 },
		{ 0, 0, YYAT_REDUCE, 171 },
		{ -115, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_REDUCE, 168 },
		{ -173, 1, YYAT_REDUCE, 167 },
		{ 0, 0, YYAT_REDUCE, 170 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 38 },
		{ 161, 1, YYAT_REDUCE, 106 },
		{ 0, 0, YYAT_REDUCE, 98 },
		{ -51, 1, YYAT_REDUCE, 72 },
		{ 2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 160, 1, YYAT_DEFAULT, 38 },
		{ -12, 1, YYAT_REDUCE, 97 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 78, 1, YYAT_REDUCE, 83 },
		{ 0, 0, YYAT_REDUCE, 169 },
		{ 159, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 107 },
		{ 0, 0, YYAT_DEFAULT, 251 },
		{ 74, 1, YYAT_DEFAULT, 96 },
		{ 0, 0, YYAT_DEFAULT, 38 },
		{ 0, 0, YYAT_REDUCE, 174 },
		{ 0, 0, YYAT_REDUCE, 173 },
		{ 75, 1, YYAT_DEFAULT, 185 },
		{ 139, 1, YYAT_DEFAULT, 193 },
		{ 0, 0, YYAT_REDUCE, 67 },
		{ -13, 1, YYAT_REDUCE, 96 },
		{ -3, 1, YYAT_DEFAULT, 241 },
		{ -17, 1, YYAT_DEFAULT, 257 },
		{ -181, 1, YYAT_REDUCE, 90 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 0, 0, YYAT_DEFAULT, 193 },
		{ 71, 1, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_DEFAULT, 185 },
		{ 0, 0, YYAT_REDUCE, 99 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 70, 1, YYAT_DEFAULT, 202 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 130 },
		{ -23, 1, YYAT_REDUCE, 14 },
		{ -59, 1, YYAT_REDUCE, 23 },
		{ 100, 1, YYAT_REDUCE, 45 },
		{ -75, 1, YYAT_REDUCE, 49 },
		{ -123, 1, YYAT_REDUCE, 41 },
		{ 87, 1, YYAT_REDUCE, 27 },
		{ 68, 1, YYAT_REDUCE, 47 },
		{ -78, 1, YYAT_REDUCE, 51 },
		{ -123, 1, YYAT_REDUCE, 33 },
		{ 7, 1, YYAT_REDUCE, 38 },
		{ 152, 1, YYAT_REDUCE, 43 },
		{ 82, 1, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 73 },
		{ 0, 0, YYAT_REDUCE, 153 },
		{ 0, 0, YYAT_REDUCE, 147 },
		{ 149, 1, YYAT_ERROR, 0 },
		{ 148, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 286 },
		{ 147, 1, YYAT_ERROR, 0 },
		{ 127, 1, YYAT_ERROR, 0 },
		{ 126, 1, YYAT_ERROR, 0 },
		{ 125, 1, YYAT_DEFAULT, 257 },
		{ 124, 1, YYAT_DEFAULT, 172 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 151 },
		{ 0, 0, YYAT_REDUCE, 142 },
		{ 0, 0, YYAT_REDUCE, 152 },
		{ 0, 0, YYAT_REDUCE, 143 },
		{ 0, 0, YYAT_REDUCE, 144 },
		{ 0, 0, YYAT_REDUCE, 145 },
		{ 0, 0, YYAT_REDUCE, 146 },
		{ 0, 0, YYAT_REDUCE, 149 },
		{ -122, 1, YYAT_DEFAULT, 286 },
		{ 121, 1, YYAT_REDUCE, 72 },
		{ 0, 0, YYAT_REDUCE, 175 },
		{ 0, 0, YYAT_REDUCE, 172 },
		{ 0, 0, YYAT_REDUCE, 71 },
		{ 0, 0, YYAT_REDUCE, 105 },
		{ 0, 0, YYAT_REDUCE, 114 },
		{ -5, 1, YYAT_REDUCE, 113 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 137, 1, YYAT_REDUCE, 108 },
		{ 139, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 109 },
		{ 86, 1, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 102 },
		{ 85, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 89 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 119, 1, YYAT_REDUCE, 93 },
		{ 0, 0, YYAT_REDUCE, 91 },
		{ -2, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 51, 1, YYAT_DEFAULT, 185 },
		{ 134, 1, YYAT_DEFAULT, 277 },
		{ -83, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 133 },
		{ 0, 0, YYAT_DEFAULT, 251 },
		{ -17, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 138 },
		{ -30, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
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
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ -119, 1, YYAT_ERROR, 0 },
		{ -232, 1, YYAT_DEFAULT, 232 },
		{ 0, 0, YYAT_REDUCE, 163 },
		{ 0, 0, YYAT_REDUCE, 164 },
		{ 0, 0, YYAT_REDUCE, 165 },
		{ -3, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 154 },
		{ 0, 0, YYAT_REDUCE, 148 },
		{ 0, 0, YYAT_REDUCE, 150 },
		{ -9, 1, YYAT_DEFAULT, 241 },
		{ -18, 1, YYAT_DEFAULT, 257 },
		{ 0, 0, YYAT_REDUCE, 111 },
		{ -21, 1, YYAT_REDUCE, 117 },
		{ 0, 0, YYAT_REDUCE, 112 },
		{ -4, 1, YYAT_REDUCE, 116 },
		{ 0, 0, YYAT_REDUCE, 104 },
		{ -87, 1, YYAT_ERROR, 0 },
		{ 128, 1, YYAT_DEFAULT, 241 },
		{ 0, 0, YYAT_REDUCE, 103 },
		{ 0, 0, YYAT_REDUCE, 101 },
		{ 0, 0, YYAT_REDUCE, 100 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ -101, 1, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 94 },
		{ 0, 0, YYAT_DEFAULT, 257 },
		{ -36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 88 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 141 },
		{ 74, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 134 },
		{ 0, 0, YYAT_REDUCE, 137 },
		{ 0, 0, YYAT_REDUCE, 139 },
		{ -33, 1, YYAT_DEFAULT, 251 },
		{ 0, 0, YYAT_REDUCE, 131 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 19, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ -5, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 128, 1, YYAT_REDUCE, 44 },
		{ 33, 1, YYAT_REDUCE, 48 },
		{ -15, 1, YYAT_REDUCE, 39 },
		{ -42, 1, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 62, 1, YYAT_REDUCE, 46 },
		{ -113, 1, YYAT_REDUCE, 50 },
		{ 38, 1, YYAT_REDUCE, 31 },
		{ 28, 1, YYAT_REDUCE, 32 },
		{ -125, 1, YYAT_REDUCE, 34 },
		{ -127, 1, YYAT_REDUCE, 35 },
		{ -132, 1, YYAT_REDUCE, 36 },
		{ -166, 1, YYAT_REDUCE, 37 },
		{ -202, 1, YYAT_REDUCE, 42 },
		{ 86, 1, YYAT_REDUCE, 28 },
		{ 47, 1, YYAT_REDUCE, 29 },
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
		{ 0, 0, YYAT_REDUCE, 115 },
		{ 0, 0, YYAT_REDUCE, 110 },
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

	yynontermgoto_size = 179;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 286, 65 },
		{ 259, 277 },
		{ 16, 12 },
		{ 16, 11 },
		{ 130, 205 },
		{ 232, 86 },
		{ 284, 289 },
		{ 286, 74 },
		{ 286, 66 },
		{ 286, 70 },
		{ 286, 67 },
		{ 286, 71 },
		{ 286, 87 },
		{ 22, 35 },
		{ 286, 86 },
		{ 96, 88 },
		{ 96, 34 },
		{ 130, 206 },
		{ 281, 287 },
		{ 96, 10 },
		{ 96, 14 },
		{ 96, 13 },
		{ 168, 231 },
		{ 168, 34 },
		{ 161, 75 },
		{ 161, 224 },
		{ 168, 10 },
		{ 168, 14 },
		{ 168, 13 },
		{ 259, -1 },
		{ 259, -1 },
		{ 37, 98 },
		{ 37, 34 },
		{ 259, -1 },
		{ 259, -1 },
		{ 259, -1 },
		{ 259, -1 },
		{ 232, 259 },
		{ 16, 29 },
		{ 16, 17 },
		{ 22, 36 },
		{ 96, 90 },
		{ 286, 290 },
		{ 286, 89 },
		{ 96, 176 },
		{ 251, 63 },
		{ 286, 91 },
		{ 286, 92 },
		{ 286, 93 },
		{ 286, 94 },
		{ 241, 103 },
		{ 22, 37 },
		{ 168, 232 },
		{ 241, 10 },
		{ 241, 14 },
		{ 241, 13 },
		{ 10, 18 },
		{ 253, 270 },
		{ 37, 99 },
		{ 253, -1 },
		{ 177, 30 },
		{ 177, 26 },
		{ 177, 182 },
		{ 177, 237 },
		{ 241, 265 },
		{ 241, 105 },
		{ 241, 107 },
		{ 177, 236 },
		{ 177, 180 },
		{ 192, 189 },
		{ 251, 269 },
		{ 276, 285 },
		{ 10, -1 },
		{ 164, 61 },
		{ 164, 64 },
		{ 274, 283 },
		{ 164, 189 },
		{ 164, 62 },
		{ 164, 227 },
		{ 118, -1 },
		{ 192, 190 },
		{ 192, -1 },
		{ 118, 43 },
		{ 103, 179 },
		{ 192, 246 },
		{ 103, 182 },
		{ 118, 117 },
		{ 118, 45 },
		{ 157, 69 },
		{ 157, 220 },
		{ 103, 181 },
		{ 103, 180 },
		{ 202, 250 },
		{ 38, 100 },
		{ 202, 251 },
		{ 202, 124 },
		{ 202, 125 },
		{ 193, 247 },
		{ 193, 113 },
		{ 193, 26 },
		{ 193, 25 },
		{ 258, 275 },
		{ 38, 97 },
		{ 155, 218 },
		{ 155, -1 },
		{ 185, -1 },
		{ 185, -1 },
		{ 185, 245 },
		{ 155, -1 },
		{ 162, 72 },
		{ 162, 73 },
		{ 162, 225 },
		{ 54, 122 },
		{ 54, 126 },
		{ 54, 123 },
		{ 0, 9 },
		{ 0, 16 },
		{ 0, 15 },
		{ 41, 106 },
		{ 257, 273 },
		{ 153, 216 },
		{ 41, 104 },
		{ 153, -1 },
		{ 154, 217 },
		{ 154, -1 },
		{ 150, 213 },
		{ 150, -1 },
		{ 148, 211 },
		{ 148, -1 },
		{ 147, 68 },
		{ 147, 210 },
		{ 47, 118 },
		{ 47, 44 },
		{ 45, 115 },
		{ 45, 114 },
		{ 43, -1 },
		{ 43, 111 },
		{ 34, 23 },
		{ 34, 24 },
		{ 33, 96 },
		{ 33, 95 },
		{ 19, -1 },
		{ 19, 30 },
		{ 256, 272 },
		{ 255, 271 },
		{ 242, 268 },
		{ 231, 258 },
		{ 182, 243 },
		{ 178, 240 },
		{ 173, 234 },
		{ 166, 229 },
		{ 165, 228 },
		{ 163, 226 },
		{ 160, 223 },
		{ 159, 222 },
		{ 158, 221 },
		{ 156, 219 },
		{ 152, 215 },
		{ 151, 214 },
		{ 149, 212 },
		{ 146, 209 },
		{ 132, 208 },
		{ 124, 201 },
		{ 123, 199 },
		{ 121, 198 },
		{ 112, 191 },
		{ 85, 172 },
		{ 81, 167 },
		{ 65, 146 },
		{ 62, 129 },
		{ 60, 128 },
		{ 59, 127 },
		{ 51, 119 },
		{ 42, 110 },
		{ 32, 76 },
		{ 27, 46 },
		{ 25, 40 },
		{ 20, 31 },
		{ 11, 22 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 61, 16 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 185 },
		{ 146, 34 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -18, 10 },
		{ 0, -1 },
		{ 0, -1 },
		{ 110, 193 },
		{ 143, -1 },
		{ 0, -1 },
		{ -7, 37 },
		{ 0, -1 },
		{ 0, -1 },
		{ 143, -1 },
		{ 0, -1 },
		{ 148, 47 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 133, 251 },
		{ 91, 96 },
		{ 115, 38 },
		{ 0, -1 },
		{ 0, -1 },
		{ 11, 10 },
		{ 70, 19 },
		{ 0, -1 },
		{ 0, -1 },
		{ 83, 241 },
		{ 157, 253 },
		{ 107, 118 },
		{ 0, -1 },
		{ 103, 193 },
		{ 0, 118 },
		{ 104, 118 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 154, 259 },
		{ 0, -1 },
		{ 0, -1 },
		{ 71, 202 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 167, 153 },
		{ 166, 153 },
		{ 0, -1 },
		{ 165, 153 },
		{ 0, -1 },
		{ 0, -1 },
		{ 151, -1 },
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
		{ 121, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 148, 259 },
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
		{ -5, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 51, 19 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 146, 192 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 58, 10 },
		{ 0, -1 },
		{ 0, -1 },
		{ 145, 192 },
		{ 0, -1 },
		{ 122, 251 },
		{ 117, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 1, 253 },
		{ 0, -1 },
		{ 143, 259 },
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
		{ 144, 253 },
		{ 119, 162 },
		{ 114, 155 },
		{ 150, 150 },
		{ 116, 162 },
		{ 154, 153 },
		{ 153, 153 },
		{ 116, 164 },
		{ 111, 148 },
		{ 89, 192 },
		{ 149, 157 },
		{ 82, 164 },
		{ 147, 161 },
		{ 146, 161 },
		{ 145, 161 },
		{ 17, 157 },
		{ 101, 161 },
		{ 146, 164 },
		{ 72, -1 },
		{ 133, 259 },
		{ 132, 259 },
		{ 0, -1 },
		{ 2, 232 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 133, 253 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 241 },
		{ 132, 253 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 107, 25 },
		{ 0, -1 },
		{ 0, -1 },
		{ 70, 241 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 65, 253 },
		{ 66, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 51, 251 },
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
		{ 96, 232 },
		{ -13, 259 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, -1 },
		{ 129, 253 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 29, 253 },
		{ 0, -1 },
		{ 41, 259 },
		{ 0, -1 },
		{ 98, 286 },
		{ 97, 286 },
		{ 101, 259 },
		{ 83, 259 },
		{ -17, 286 },
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
		{ 29, 286 },
		{ 0, -1 },
		{ 25, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -28, 286 },
		{ 0, -1 },
		{ 0, -1 },
		{ -40, 286 },
		{ 0, -1 },
		{ -4, 147 },
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
#line 1049 ".\\myparser.y"

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


