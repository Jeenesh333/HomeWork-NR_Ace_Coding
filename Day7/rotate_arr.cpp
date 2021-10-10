#include<iostream>
#include<bits/stdc++.h>
using namespace std;
queue<int> q;
void rotate(int arr[],int size, int rot)
{
    for(int i=0;i<rot;i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
 {
     int n;
     cin>>n;
     while(n--)
     {
         int size,rot;
         cin>>size>>rot;
         int arr[size];
         for(int i=0;i<size;i++)
         {
            cin>>arr[i];
            q.push(arr[i]);
         }
         rotate(arr,size,rot);
     }
	return 0;
}