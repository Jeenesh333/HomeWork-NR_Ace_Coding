#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num = 0;
    float sum = 0;
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
        num = ((num + (2*i))-i);
        sum = sum + float((float)num/(float)fact);
    }
    cout<<sum<<endl;
    return 0;
}