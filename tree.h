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
struct VarEntry
{
    string name;
    VALUE_TYPE type;
    Value value;
    State state;
};
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

extern unordered_map<string, string> ID_Table;
extern unordered_map<string, VarEntry> Var_Table;
extern unordered_map<string, StructEntry> Struct_Table;
extern unordered_map<string, FuncEntry> Fuction_Table;
class Node
{
public:
    string code;       
    State state;       
    NODE_TYPE nd_type; 
    
    VALUE_TYPE v_type;
    
    int it;            
    string name;       
    Node *children[4]; 
    Node *sibing;
    Value value;   
    string svalue; 
    
public:
    Node();
};

Node *generate_const_node();
Node *generate_expr_node();
Node *generate_stmt_node();
Node *generate_null_node();
Node *generate_decl_node();
Node *generate_ID_node();
class tree
{
    Node *root;

public:
    void stmt_get_label(Node *t); 
    void expr_get_label(Node *t); 
    void gen_code(ostream &out);  
    void gen_header(ostream &out);
    void get_temp_var(Node *t);                
    void gen_decl(ostream &out, Node *t);      
    void expr_gen_code(ostream &out, Node *t); 
    void stmt_gen_code(ostream &out, Node *t); 
};

extern void check_type(char *id);

string generate_expr_code(Node *node1, Node *node2, string op);
string generate_double_code(Node *node1, Node *node2, string op);
string generate_pre_code(Node *node, string op);
string generate_post_code(Node *node, string op);