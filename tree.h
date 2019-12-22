#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include<vector>
#include "mylexer.h"
#include "myparser.h"
#include <unordered_map>
#include <stack>
using namespace std;

enum ID_TYPE{VAR_T, FUNC_t, STRUCT_t, VOID_t};
enum NODE_TYPE{STMT_t,EXPR_t,DECL_t,CONS_t,NULL_t,ID_t}; //语句，表达式，定义，null空类型
enum VALUE_TYPE {Integer,Double,String,Boolean,None};// 节点数据类型，整数浮点数字符串布尔无类型
enum State { Valid, Not_Def, Type_Err, Not_Init, Dup_Def};//合法，未定义，类型错，未初始化，重复定义
vector<string> temp_table; // 存储临时变量
struct VarEntry{string name, VALUE_TYPE type, Value value, State state};
struct StructEntry{string name,int mem_num,string mem[10],VALUE_TYPE type[10]};
struct FuncEntry{string name,VALUE_TYPE type,int arg_num,VALUE_TYPE arg_type[10]};

unordered_map<string, string> ID_Table; // 指示ID是普通变量，结构，还是函数
unordered_map<string, VarEntry> Var_Table; // 存储普通变量的类型和初始值
unordered_map<string, StructEntry> Struct_Table;// 存储结构体的
unordered_map<string, FuncEntry> Fuction_Table;// 存储函数定义
union Value{double fvalue; int ivalue; char cvalue;};
class Node
{
public:
    string code;//代码
    State state;//状态
    NODE_TYPE nd_type; //节点类型
    // 然后怎么知道lex传来的常数类型呢，节点类型加了一个数据类型
    VALUE_TYPE v_type;
    //临时变量？
    int it;// 临时变量下标
    string name;// 如果是ID的话ID的名称
    Node*children[4];//孩子，最多4个
    Node*sibing;
    Value value; // 初始化值, 整数，浮点数，字符，字符串
    string svalue;// 字符串的初始值
    //ID初始化的值，或许不需要
public:
    Node();
};
// 节点类型
Node* generate_const_node();
Node* generate_expr_node();
Node *generate_stmt_node();
Node *generate_null_node();
Node *generate_decl_node();
Node *generate_ID_node();
class tree
{
    Node*root;
public:
    void stmt_get_label(Node *t); // 给每一个节点生成标号
    void expr_get_label(Node *t); // 生成布尔表达式语句的标号
    void gen_code(ostream &out); // 使用语法树生成代码
    void gen_header(ostream &out);
    void get_temp_var(Node *t); // 获取计算过程中的临时变量
    void gen_decl(ostream &out, Node *t);// 变量是要写在变量区的，因此要一次写好，需要遍历语法树
    void expr_gen_code(ostream &out, Node *t);// 生成布尔表达式语句的代码
    void stmt_gen_code(ostream &out, Node *t);// 生成表达式的代码
};

extern void check_type(char *id);

string generate_expr_code(Node*node1,Node*node2,char op);
string generate_double_code(Node *node1, Node *node2, string op);
string generate_pre_code(Node*node,string op);
string generate_post_code(Node*node,string op);