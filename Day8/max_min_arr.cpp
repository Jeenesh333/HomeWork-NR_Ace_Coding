#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int max = INT_MIN;
    int min = INT_MAX;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //first we find out maximun in an array
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}