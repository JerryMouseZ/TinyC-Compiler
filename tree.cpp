#include "tree.h"
void tree::gen_header(ostream &out)
{
    out << "\t.586" << endl;
    out << "\t.model flat, stdcall" << endl;
    out << "\toption casemap :none" << endl;
    out << endl;
    out << "\tinclude \\masm32\\include\\windows.inc" << endl;
    out << "\tinclude \\masm32\\include\\user32.inc" << endl;
    out << "\tinclude \\masm32\\include\\kernel32.inc" << endl;
    out << "\tinclude \\masm32\\include\\masm32.inc" << endl;
    out << endl;
    out << "\tincludelib \\masm32\\lib\\user32.lib" << endl;
    out << "\tincludelib \\masm32\\lib\\kernel32.lib" << endl;
    out << "\tincludelib \\masm32\\lib\\masm32.lib" << endl;
}
void tree::stmt_get_label(Node *t) // 给每一??节点生成标??
{
}
void tree::expr_get_label(Node *t) // 生成布尔表达式???句的标号
{
}
void tree::gen_code(ostream &out) // 使用??法树生成代??
{
}
void tree::get_temp_var(Node *t) // 获取计算过程??的临时变??
{
}
void tree::gen_decl(ostream &out, Node *t) // 变量??要写在变量区的，因??????一次写好，需要遍历???法树
{
}
void tree::expr_gen_code(ostream &out, Node *t) // 生成布尔表达式???句的代码
{
}
void tree::stmt_gen_code(ostream &out, Node *t) // 生成表达式的代码
{
}

Node::Node()
{
    for (int i = 0; i < 4; i++)
    {
        children[i] = NULL;
    }
    sibing = NULL;
}
Node *generate_expr_node()
{
    Node *ret = NULL;
    ret = new Node();
    ret->nd_type = EXPR_t;
    return ret;
}
Node *generate_stmt_node()
{
    Node *ret = NULL;
    ret = new Node();
    ret->nd_type = STMT_t;
    return ret;
}
Node *generate_null_node()
{
    Node *ret = NULL;
    ret = new Node();
    ret->nd_type = NULL_t;
    return ret;
}
Node *generate_decl_node()
{
    Node *ret = NULL;
    ret = new Node();
    ret->nd_type = DECL_t;
    return ret;
}
Node *generate_const_node()
{
    Node *ret = NULL;
    ret = new Node();
    ret->nd_type = CONS_t;
    return ret;
}
Node *generate_ID_node()
{
    Node *ret = new Node();
    ret->nd_type = ID_t;
    return ret;
}
string generate_expr_code(Node *node1, Node *node2, string op)
{
    string ret = "\tmov eax, " + temp_table[node1->it] + "\n";
    // ret+= + "\tmov ebx, " + temp_table[node2->it] + "\n"
    // 其实??二个变量完全不用加载，因为支持???二个地址在内???
    ret += "\t";
    if (op == "-")
    {
        //??点数??另???一套寄存器, 但是??点数??需要支持加减乘???
        ret += "sub eax, " + temp_table[node2->it] + "\n";
    }
    else if (op == "+")
    {
        ret += "add eax, " + temp_table[node2->it] + "\n";
    }
    else if (op == "*")
    {
        ret += "imul eax, " + temp_table[node2->it] + "\n";
    }
    else if (op == "/")
    {
        // 余数结果保存在edx?
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + temp_table[node2->it] + "\n";
        ret += "idiv ebx\n";
    }
    else if (op == "%")
    {
        // 余数的结果保存在edx???
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + temp_table[node2->it] + "\n";
        ret += "idiv ebx\n";
    }
    else if (op == "^")
    {
        ret += "xor eax, " + temp_table[node2->it] + "\n";
    }
    else if (op == "|")
    {
        ret += "or eax, " + temp_table[node2->it] + "\n";
    }
    else if (op == "&")
    {
        ret += "and eax, " + temp_table[node2->it] + "\n";
    }
    // 带等于的返回值相同，????要修改左操作
    // 需要动左节点的地址
    else if (op == "=")
    {
        // 拿到node1的在符号表中存储的变量名
        ret += "mov ebx, " + temp_table[node2->it];
        ret += "mov " + node1->name + ", ebx\n";
    }
    else if (op == ">>=")
    {
        ret += "\tmov ecx, " + temp_table[node2->it];
        ret += "sar eax, cl\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "<<=")
    {
        ret += "\tmov ecx, " + temp_table[node2->it];
        ret += "sal eax, cl\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "+=")
    {
        ret += "add eax, " + temp_table[node2->it] + "\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "-=")
    {
        ret += "sub eax, " + temp_table[node2->it] + "\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "*=")
    {
        ret += "imul eax, " + temp_table[node2->it] + "\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "/=")
    {
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + temp_table[node2->it] + "\n";
        ret += "idiv ebx\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "%=")
    {
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + temp_table[node2->it] + "\n";
        ret += "idiv ebx\n";
        ret += "mov " + node1->name + ", edx\n";
    }
    else if (op == "&=")
    {
        ret += "and eax, " + temp_table[node2->it] + "\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "^=")
    {
        ret += "xor eax, " + temp_table[node2->it] + "\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == "|=")
    {
        ret += "or eax, " + temp_table[node2->it] + "\n";
        ret += "mov " + node1->name + ", eax\n";
    }
    else if (op == ">>")
    {
        ret += "\tmov ecx, " + temp_table[node2->it];
        ret += "sar eax, cl\n";
    }
    else if (op == "<<")
    {
        ret += "\tmov ecx, " + temp_table[node2->it];
        ret += "sal eax, cl\n";
    }
    if (op == "%")
        ret += "\tmov " + temp_table[node1->it] + ", edx\n";
    ret += "\tmov " + temp_table[node1->it] + ", eax\n";
    return ret;
}

string generate_double_code(Node *node1, Node *node2, string op)
{
    // 生成??点数代??
    string ret = "\tfld " + temp_table[node1->it] + "\n";
    if (op == "+")
    {
        ret += "\tfld " + temp_table[node2->it] + "\n\t";
        ret += "fadd\n";
    }
    else if (op == "-")
    {
        ret += "\tfld " + temp_table[node2->it] + "\n\t";
        ret += "fsub\n";
    }
    else if (op == "*")
    {
        ret += "\tfld " + temp_table[node2->it] + "\n\t";
        ret += "fmul\n";
    }
    else if (op == "/")
    {
        ret += "\tfld " + temp_table[node2->it] + "\n\t";
        ret += "fdiv\n";
    }
    else if (op == "=")
    {
        // 先把node1弹出, 再压??node2，把node2的值赋给node1
        ret += "fstp " + node1->name + "\n";
        ret += "\tfld " + temp_table[node2->it] + "\n\t";
        ret += "fstp " + node2->name + "\n";
    }
    ret += "\t fstp" + temp_table[node1->it] + "\n";
    return ret;
}

// 前缀单目表达???
string generate_pre_code(Node *node, string op)
{
    string ret = "\t mov eax, " + temp_table[node->it] + "\n";
    if (op == "&")
    {
        // 取地址
    }
    else if (op == "*")
    {
        // 取??
    }
    else if (op == "-")
    {
        // 取反
        ret += "\tmov ebx, eax\n\tmov eax, 0\n";
        ret += "\tsub eax, ebx\n";
    }
    else if (op == "~")
    {
        // 按位取反
        ret +="\tnot eax\n";
    }
    else if (op == "!")
    {
        // 逻辑???
        //先不实现
    }
    else if (op == "++")
    {
        ret += "\tinc eax\n";
    }
    else if (op == "--")
    {
        ret+= "\tdec eax]\n";
    }
    ret += "\tmov " + temp_table[node->it] + ", eax\n";
    ret += "\tmov " + node->name + ", eax\n";
    return ret;
}
// 后缀单目表达???
string generate_post_code(Node *node, string op)
{
    string ret = "\t mov eax, " + temp_table[node->it] + "\n";
    if (op == "++")
    {
        ret += "\tinc eax\n";
    }
    else if (op == "--")
    {
        ret += "\tdec eax]\n";
    }
    // 后缀表达式返回之前的值就行了
    ret += "\tmov " + node->name + ", eax\n";
    return ret;
}