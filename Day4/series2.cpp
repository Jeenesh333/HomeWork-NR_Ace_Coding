#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float series = 1;
    for(int i=1;i<=n;i++)
    {
        series = series * float(float((i)+(i+1))/float((i+2)+(i+3)));
    }
    cout<<series<<endl;
    return 0;
}