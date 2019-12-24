#include "tree.h"

Node::Node()
{
    for (int i = 0; i < 4; i++)
    {
        children[i] = NULL;
    }
    sibing = NULL;
    state = Valid;
    v_type = None;
    it = -1;
    // value只能赋值一次，就不做初始化了
}
Node *check_type(char *id)
{
    Node *ret = generate_ID_node();
    string name = id;
    auto temp_search = ID_Table.find(name);
    if (temp_search != ID_Table.end())
    {
        string type = temp_search->second;
        if (type == "VAR")
        {
            auto search = Var_Table.find(name);
            VarEntry result = search->second;
            ret->v_type = result.type;
            ret->name = id;
        }
        else if (type == "STRUCT")
        {
            auto search = Struct_Table.find(name);
            auto result = search->second;
        }
        else if (type == "FUNC")
        {
            auto search = Fuction_Table.find(name);
            auto result = search->second;
        }
        else if (type == "POINTER")
        {
            auto search = Pointer_Table.find(name);
            auto result = search->second;
        }
    }
    else
    {
        ret->v_type = None;
        ret->name = id;
        ret->state = Not_Def;
    }
    return ret;
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
    string ret;
    string op1; // op1 还可能是标识符和常量，没有临时变量
    if (node1->it == -1)
    {
        if (node1->nd_type == ID_t)
            op1 = node1->name;
        else
            op1 = to_string(node1->value.fvalue);
    }
    else
    {
        op1 = temp_table[node1->it];
        temp_top--;
    }
    ret += "\tmov eax, " + op1 + "\n";
    string op2;
    if (node2->it == -1)
    {
        op2 = to_string(node2->value.fvalue);
    }
    else
    {
        op2 = temp_table[node2->it];
        temp_top--;
    }
    // ret+= + "\tmov ebx, " + temp_table[node2->it] + "\n"
    // 其实??二个变量完全不用加载，因为支持???二个地址在内???
    ret += "\t";
    if (op == "-")
    {
        //??点数??另???一套寄存器, 但是??点数??需要支持加减乘???
        ret += "sub eax, " + op2 + "\n";
    }
    else if (op == "+")
    {
        ret += "add eax, " + op2 + "\n";
    }
    else if (op == "*")
    {
        ret += "imul eax, " + op2 + "\n";
    }
    else if (op == "/")
    {
        // 余数结果保存在edx?
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + op2 + "\n";
        ret += "idiv ebx\n";
    }
    else if (op == "%")
    {
        // 余数的结果保存在edx???
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + op2 + "\n";
        ret += "idiv ebx\n";
    }
    else if (op == "^")
    {
        ret += "xor eax, " + op2 + "\n";
    }
    else if (op == "|")
    {
        ret += "or eax, " + op2 + "\n";
    }
    else if (op == "&")
    {
        ret += "and eax, " + op2 + "\n";
    }
    // 带等于的返回值相同，????要修改左操作
    // 需要动左节点的地址
    else if (op == "=")
    {
        // 拿到node1的在符号表中存储的变量名
        ret += "mov ebx, " + op2;
        ret += "mov " + op1 + ", ebx\n";
    }
    else if (op == ">>=")
    {
        ret += "\tmov ecx, " + op2;
        ret += "sar eax, cl\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "<<=")
    {
        ret += "\tmov ecx, " + op2;
        ret += "sal eax, cl\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "+=")
    {
        ret += "add eax, " + op2 + "\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "-=")
    {
        ret += "sub eax, " + op2 + "\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "*=")
    {
        ret += "imul eax, " + op2 + "\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "/=")
    {
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + op2 + "\n";
        ret += "idiv ebx\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "%=")
    {
        ret += "mov edx, 0\n\t";
        ret += "mov ebx, " + op2 + "\n";
        ret += "idiv ebx\n";
        ret += "mov " + op1 + ", edx\n";
    }
    else if (op == "&=")
    {
        ret += "and eax, " + op2 + "\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "^=")
    {
        ret += "xor eax, " + op2 + "\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == "|=")
    {
        ret += "or eax, " + op2 + "\n";
        ret += "mov " + op1 + ", eax\n";
    }
    else if (op == ">>")
    {
        ret += "\tmov ecx, " + op2;
        ret += "sar eax, cl\n";
    }
    else if (op == "<<")
    {
        ret += "\tmov ecx, " + op2;
        ret += "sal eax, cl\n";
    }
    temp_top++;
    if (temp_top > max_top)
    {
        max_top++;
        temp_table[temp_top] = "temp_" + to_string(temp_top);
    }
    // 取模的运算结构在edx中，否则在eax中
    if (op == "%")
        ret += "\tmov " + temp_table[temp_top] + ", edx\n";
    else
        ret += "\tmov " + temp_table[temp_top] + ", eax\n";
    return ret;
}

string generate_double_code(Node *node1, Node *node2, string op)
{
    // 生成??点数代??
    string ret;
    string op1; // op1 还可能是标识符和常量，没有临时变量
    if (node1->it == -1)
    {
        if (node1->nd_type == ID_t)
            op1 = node1->name;
        else
            op1 = to_string(node1->value.fvalue);
    }
    else
    {
        op1 = temp_table[node1->it];
        temp_top--;
    }
    ret += "\t mov eax, " + op1 + "\n";
    string op2;
    if (node2->it == -1)
    {
        op2 = to_string(node2->value.fvalue);
    }
    else
    {
        op2 = temp_table[node2->it];
        temp_top--;
    }
    if (op == "+")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fadd\n";
    }
    else if (op == "-")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fsub\n";
    }
    else if (op == "*")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fmul\n";
    }
    else if (op == "/")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fdiv\n";
    }
    else if (op == "=")
    {
        // 先把node1弹出, 再压??node2，把node2的值赋给node1
        ret += "fstp " + node1->name + "\n";
        ret += "\tfld " + op2 + "\n\t";
        ret += "fstp " + node2->name + "\n";
    }
    else if (op == "+=")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fadd\n";
        // 不弹出的存储
        ret += "fst " + node1->name + "\n";
    }
    else if (op == "-=")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fsub\n";
        ret += "fst " + node1->name + "\n";
    }
    else if (op == "*=")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fmul\n";
        ret += "fst " + node1->name + "\n";
    }
    else if (op == "/=")
    {
        ret += "\tfld " + op2 + "\n\t";
        ret += "fdiv\n";
        ret += "fst " + node1->name + "\n";
    }
    temp_top++;
    if (temp_top > max_top)
    {
        max_top++;
        temp_table[temp_top] = "temp_" + to_string(temp_top);
    }
    ret += "\t fstp" + temp_table[temp_top] + "\n";
    return ret;
}

// 前缀单目表达???
string generate_pre_code(Node *node, string op)
{
    // 还是一样，第一个应该是标识符，或者是表达式
    string ret;
    string op1; // op1 还可能是标识符和常量，没有临时变量
    if (node->it == -1)
    {
        if (node->nd_type == ID_t)
            op1 = node->name;
        else
        {
            cout << "不可被赋值的左值: at line: " << line << endl;
        }
    }
    else
    {
        op1 = temp_table[node->it];
        temp_top--;
    }
    ret += "\t mov eax, " + op1 + "\n";
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
        ret += "\tnot eax\n";
    }
    else if (op == "!")
    {
        // 逻辑???
        //先不实现
    }
    else if (op == "++")
    {
        ret += "\tinc eax\n";
        ret += "\tmov " + node->name + ", eax\n";
    }
    else if (op == "--")
    {
        ret += "\tdec eax\n";
        ret += "\tmov " + node->name + ", eax\n";
    }
    temp_top++;
    if (temp_top > max_top)
    {
        max_top++;
        temp_table[max_top] = "temp_" + to_string(max_top);
    }
    ret += "\tmov " + temp_table[temp_top] + ", eax\n";
    return ret;
}
// 后缀单目表达???
string generate_post_code(Node *node, string op)
{
    string ret;
    string op1; // op1 还可能是标识符和常量，没有临时变量
    if (node->it == -1)
    {
        if (node->nd_type == ID_t)
            op1 = node->name;
        else
        {
            cout << "不可被赋值的左值: at line: " << line << endl;
        }
    }
    else
    {
        op1 = temp_table[node->it];
        temp_top--;
    }
    ret += "\t mov eax, " + op1 + "\n";

    if (op == "++")
    {
        ret += "\tinc eax\n";
    }
    else if (op == "--")
    {
        ret += "\tdec eax]\n";
    }
    // 后缀表达式返回之前的值就行了
    temp_top++;
    if (temp_top > max_top)
    {
        max_top++;
        temp_table[max_top] = "temp_" + to_string(max_top);
    }
    ret += "\tmov " + temp_table[temp_top] + ", eax\n";
    return ret;
}

string generate_var_define()
{
    string ret = ".DATA\n";
    auto i = Var_Table.begin();
    for (; i != Var_Table.end(); i++)
    {
        VarEntry entry = i->second;
        ret += "\t" + entry.name + " ";
        if (entry.type == Double)
            ret += "real8 ";
        else
        {
            ret += "dd ";
        }
        if (entry.state = Valid)
        {
            switch (entry.type)
            {
            case Double:
                ret += to_string(entry.value.fvalue) + "\n";
                break;
            default:
                ret += to_string(entry.value.ivalue) + "\n";
                break;
            }
        }
        else
        {
            ret += "?\n";
        }
    }
    for (int i = 0; i < max_top; i++)
    {
        // 打印临时变量表
        ret += "\t" + temp_table[i] + "\tdd ?\n";
    }
    return ret;
}

string generate_header()
{
    string ret;
    ret+= "\t.586\n";
    ret+= "\t.model flat, stdcall\n";
    ret+= "\toption casemap :none\n";
    ret+= "\n";
    ret+= "\tinclude \\masm32\\include\\windows.inc\n";
    ret+= "\tinclude \\masm32\\include\\user32.inc\n";
    ret+= "\tinclude \\masm32\\include\\kernel32.inc\n";
    ret+= "\tinclude \\masm32\\include\\masm32.inc\n";
    ret+= "\n";
    ret+= "\tincludelib \\masm32\\lib\\user32.lib\n";
    ret+= "\tincludelib \\masm32\\lib\\kernel32.lib\n";
    ret+= "\tincludelib \\masm32\\lib\\masm32.lib\n";
    return ret;
}