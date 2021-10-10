#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void cyclically_rot(int arr[],int n)
{
    int temp = arr[n-1];
    for(int i=1;i<n;i++)
    {
        arr[n-i] = arr[n-i-1];
    }
    arr[0] = temp;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cyclically_rot(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}