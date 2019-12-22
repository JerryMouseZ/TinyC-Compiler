#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    // 注意这种写法是很危险的，因为a中存储的是一个临时的指针，而不是一个真正的字符串
    // char *a = "0x86";
    // double b = 1.23e-3;
    // stringstream ss;
    // ss<<a;
    // ss>>hex>>b;
    // cout<<b<<endl;
    // cout<<"\\"<<endl;
    // double b;
    // cin>>b;
    // cout<<b<<endl;
    // double c = 1e3;
    char*yytext="123";
    stringstream ss;
    ss << yytext;
    string temp;
    ss >> temp;
    cout<<temp;
}