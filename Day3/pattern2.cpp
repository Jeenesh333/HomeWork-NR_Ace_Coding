#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row = 1;row<=n/2;row++)
    {
        for(int i=1;i<=row-1;i++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int i=1;i<=(n-row*2);i++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    if(n%2 == 1)
    {
        for(int i=1;i<=n/2;i++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
    }
    for(int row = n/2;row>=1;row--)
    {
        for(int i=1;i<=row-1;i++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int i=1;i<=(n-row*2);i++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}