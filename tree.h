#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "mylexer.h"
#include "myparser.h"
#include <unordered_map>
#include <stack>
using namespace std;

extern int line;

enum ID_TYPE
{
    VAR_T,
    FUNC_t,
    STRUCT_t,
    VOID_t
};
enum NODE_TYPE
{
    STMT_t,
    EXPR_t,
    DECL_t,
    CONS_t,
    NULL_t,
    ID_t
}; 
enum VALUE_TYPE
{
    Integer,
    Double,
    Char,
    String,
    Boolean,
    None
}; 
enum State
{
    Valid,
    Not_Def,
    Type_Err,
    Not_Init,
    Dup_Def
};                         
union Value {
    double fvalue;
    int ivalue;
    char cvalue;
};
extern vector<string> temp_table; 
extern int temp_top;
extern int max_top;

struct VarEntry
{
    string name;
    VALUE_TYPE type;
    Value value;
    State state;
};
// 结构就不给初始化函数了
struct StructEntry
{
    string name;
    int mem_num;
    string mem[10];
    VALUE_TYPE type[10];
};
struct FuncEntry
{
    string name;
    VALUE_TYPE type;
    int arg_num;
    VALUE_TYPE arg_type[10];
};
struct PointerEntry{
    string name;// 变量名
    VALUE_TYPE type;//变量类型 只允许常规类型
    Value value;//初始值
    State state;// 状态
    int depth;// 指针的层数
};

// 符号表的填入： 变量声明语句
extern unordered_map<string, string> ID_Table;
extern unordered_map<string, VarEntry> Var_Table;
extern unordered_map<string, StructEntry> Struct_Table;
extern unordered_map<string, FuncEntry> Fuction_Table;
extern unordered_map<string, PointerEntry> Pointer_Table;
class Node
{
public:
    string code; // 代码
    State state;       // 状态
    NODE_TYPE nd_type;  // 节点类型 
    VALUE_TYPE v_type; // 值类型
    int it;            //临时变量下标， 常量和ID不需要下标
    string name;       //ID名字
    Node *children[4]; 
    Node *sibing;
    Value value;   // value只有常量会有
    string svalue;
    bool has_value; // 判断value的值是否有效

public:
    Node();
};

Node *generate_const_node();
Node *generate_expr_node();
Node *generate_stmt_node();
Node *generate_null_node();
Node *generate_decl_node();
Node *generate_ID_node();


Node* check_type(char *id);

string generate_expr_code(Node *node1, Node *node2, string op);
string generate_double_code(Node *node1, Node *node2, string op);
string generate_pre_code(Node *node, string op);
string generate_post_code(Node *node, string op);

string generate_var_define();
string generate_header();
