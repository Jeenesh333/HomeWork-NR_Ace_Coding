#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact1 = 1;
    int fact2 = 1;
    float sum = 0;
    for(int i=1;i<=n;i++)
    {
        //calculating factorial for  fact1;
        fact1 = fact1*i;
        fact2 = fact2*(i+1);
        sum = sum + float(float(i*(i+2)/float(fact1+fact2)));
    }
    cout<<sum<<endl;
    return 0;
}