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