#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int union_fun(int a[],int b[],int n,int m)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<union_fun(a,b,n,m);
    return 0;
}