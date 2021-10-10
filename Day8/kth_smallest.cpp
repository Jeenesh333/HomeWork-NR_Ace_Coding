#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rev_kth(int arr[],int n,int k)
{
    sort(arr,arr+n);
    if(k<n)
    {
        return arr[k-1];
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<rev_kth(a,n,k);
    return 0;
}