#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r;
    //upper part
    for(int row = 1;row<=n/2;row++)
    {
        for(int  i=1;i<=n/2-row+1;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=(2*row-1);i++)
        {
            cout<<"*";
        }
        cout<<endl;
        r = row;
    }
    cout<<r<<endl;

    //for middle part
    // if(n%2 == 1)
    // {
    //     for(int i=1;i<=n;i++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // //Lower part
    // for(int row = n/2;row>=1;row--)
    // {
    //     for(int  i=1;i<=n/2-row+1;i++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int i=1;i<=(2*row-1);i++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    return 0;
}