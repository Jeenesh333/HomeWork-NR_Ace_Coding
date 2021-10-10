#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //Taking counter for counting zero's , one's and two's.....
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            count_0++;
        }
        else if(a[i] == 1)
        {
            count_1++;
        }
        else{
            count_2++;
        }
    }
    int j = 0;
    for(int i=0;i<count_0;i++)
    {
        a[j] = 0;
        j++;
    }
    for(int i=0;i<count_1;i++)
    {
        a[j] = 1;
        j++;
    }
    for(int i=0;i<count_2;i++)
    {
        a[j] = 2;
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}