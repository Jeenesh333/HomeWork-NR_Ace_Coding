#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rev_str(string s)
{
    int l = s.length();
    int start = 0;
    int end = l-1;
    while (start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s;
}
int main()
{
    string str;
    int n = str.length();
    getline(cin,str);
    rev_str(str);
    return 0;
}