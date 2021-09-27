#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Enter operator for performing operation on operands"<<endl;
    char op;
    cin>>op;
    if(op == '+')
    {
        cout<<a+b<<endl;
    }
    else if(op == '-')
    {
        cout<<a-b<<endl;
    }
    else if(op == '*')
    {
        cout<<a*b<<endl;
    }
    else if(op == '/')
    {
        cout<<a/b<<endl;
    }
    else
    {
        cout<<"Enter valid operator"<<endl;
    }
    return 0;
}