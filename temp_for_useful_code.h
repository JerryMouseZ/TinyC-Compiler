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

string generate_bool_code(Node *node1, Node *node2, string op)
{
    string ret;
    // 判断左右操作数是id还是有临时变量
    string op1; // op1 还可能是标识符和常量，没有临时变量
    if (node1->it == -1)
    {
        if (node1->nd_type == ID_t)
            op1 = node1->name;
        else
            op1 = to_string(node1->ivalue);
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
        op2 = to_string(node2->ivalue);
    }
    else
    {
        op2 = temp_table[node2->it];
        temp_top--;
    }
    // 根据运算符生成代码
    if (op == "<=")
    {
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjle L" + to_string(label_number) + "\n";
    }
    else if (op == ">=")
    {
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjge L" + to_string(label_number) + "\n";
    }
    else if (op == "==")
    {
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tje L" + to_string(label_number) + "\n";
    }
    else if (op == "!=")
    {
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjne L" + to_string(label_number) + "\n";
    }
    else if (op == "<")
    {
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjl L" + to_string(label_number) + "\n";
    }
    else if (op == ">")
    {
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjg L" + to_string(label_number) + "\n";
    }
    else if (op == "&&")
    {
        ret += "\tand eax," + op2 + "\n";
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjne L" + to_string(label_number) + "\n";
    }
    else if (op == "||")
    {
        ret += "\tor eax," + op2 + "\n";
        ret += "\tcmp eax, " + op2 + "\n";
        ret += "\tjne L" + to_string(label_number) + "\n";
    }
    // 这里结果不要用op1了，再加一个临时变量
    temp_top++;
    if (temp_top > max_top)
    {
        max_top++;
        temp_table.push_back("temp_" + to_string(max_top));
    }
    // 这样就可以只用一个标签了
    ret += "\tmov " + temp_table[temp_top] + ", 0\n";
    // jmp next
    ret += "\tjmp L" + to_string(label_number + 1) + "\n";
    ret += "L" + to_string(label_number) + ":\n";
    ret += "\tmov " + temp_table[temp_top] + ", 1\n";
    label_number++;
    next_label = label_number;
    label_need = true;
    return ret;
}

void generate_expr_label(Node *node)
{
    // 从左到右规约
    // 遍历这个
    Node *node1 = node->children[0], *node2 = node->children[1];
    if (node->name == "&&")
    {
        // 正确值需要再开一个
        node1->true_label = label_number++;
        // 如果2也正确那么结果正确
        node2->true_label = node->true_label;
        node1->false_label = node2->false_label = node->false_label;
    }
    else if (node->name == "||")
    {
        node1->true_label = node->true_label;
        node1->false_label = label_number++;
        node2->false_label = node->false_label;
        node2->true_label = node->true_label;
    }
    else if (node->name == "!")
    {
        node1->true_label = node->false_label;
        node1->false_label = node->true_label;
    }
    if (node1)
        generate_expr_label(node1);
    if (node2)
        generate_expr_label(node2);
}

void generate_stmt_label(Node *node)
{
    // 复杂的if while 之类的也挺麻烦的
    switch (node->nd_type)
    {
    case /* constant-expression */:
        /* code */
        break;

    default:
        break;
    }
}