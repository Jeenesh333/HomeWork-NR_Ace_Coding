#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    getline(cin,s);
    string str;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'a')
        {
            str.append("a");
        }
        else if(s[i] == 'b')
        {
            str.append("bb");
        }
        else if(s[i] == 'c')
        {
            str.append("ccc");
        }
        else{
            str.append("_");
        }
    }
    cout<<str;
    return 0;
}