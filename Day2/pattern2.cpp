#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" "<<" "; //printing spaces
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*"<<" "; //printing stars10

        }
        cout<<endl;
    }
    return 0;
}