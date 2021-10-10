#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void seperate(int arr[],int n)
{
    int temp_size = n; // Size of an temparory array.....
    int count = 0;
    int temp[temp_size];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0) // if array element is positive....
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0) // if array element is negative....
        {
            temp[count] = arr[i];
            count++;
        }
    }
    //Now we have to assign all the temp array element to original array.....
    count = 0;
    for(int i=0;i<n;i++)
    {
        arr[i] = temp[count];
        count++;
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    seperate(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;

}