#include<iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int *p;
    // p =&a;
    // cout<<p<<endl;
    // cout<<"Value after modification"<<endl;
    // *p = 20; //Updation of a
    // cout<<a;
    // return 0;
    // int a = 20;
    // int *p = &a;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    //acess array's element using pointers
    // int a[] = { 10,20,40};
    // int *p  = a;
    // for(int i=0;i<3;i++)
    // {
    //     cout<<*p<<endl;
    //     p++;
    // }
    // int a = 10;
    // int *p = &a;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // int **q; //pointer to pointer
    // q = &p;
    // cout<<q<<endl; //address of q
    // cout<<*q<<endl; // address of p
    // cout<<**q<<endl; // value of a using pointer to pointer
    // return 0;
    // float a = 10;
    // float* ab = &a;
    // void* z = ab;
    // cout<<z;
    char c = 'c';
    void* x = &c;
    cout<<*(char*)x<<endl; // typecasting 
    return 0;

}