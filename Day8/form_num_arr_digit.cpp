#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        str = str + to_string(a[i]);
    }
    int val = stoi(str);
    if(val%3 == 0)
    {
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}