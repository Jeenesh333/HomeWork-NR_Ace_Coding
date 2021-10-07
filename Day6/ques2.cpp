#include<bits/stdc++.h>
using namespace std;
void str_num(string s)
{
    string str;
    for(int i=0;i<s.length();i++)
    {
        int n = s[i]-'a'+1;
        str = to_string(n);
        cout<<str;
    }cout<<endl;
}
int main()
{
    string s;
    getline(cin,s);
    str_num(s);
    return 0;
}