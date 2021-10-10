#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int start,int end)
{
    
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,k,0,k-1); // reversing first part i.e k part
    reverse(a,n-k,k,n-1); // reversing second part i.e n-k
    reverse(a,n,0,n-1);
    cout<<"Array after rotating"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}