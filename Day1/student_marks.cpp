#include<iostream>
using namespace std;
int main()
{
    int grade;
    cin>>grade;
    if(grade>=91 && grade<=100)
    {
        cout<<"A+"<<endl;
    }
    else if(grade>=81 && grade<91)
    {
        cout<<"A"<<endl;
    }
    else if(grade>=71 && grade<81)
    {
        cout<<"B+"<<endl;
    }
    else if(grade>=61 && grade<71)
    {
        cout<<"B"<<endl;
    }
    else
    {
        cout<<"C"<<endl;
    }
    return 0;
}