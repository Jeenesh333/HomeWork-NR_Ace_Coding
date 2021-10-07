#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string s;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>str[i+1])
        {
            s.push_back(str[i]);
            i++;
        }
        else{
            s.push_back(str[i+1]);
            i++;
        }
    }
    cout<<s;
    return 0;
}