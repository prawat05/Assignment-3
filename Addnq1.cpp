/*1. Given an array A, find the nearest smaller element for every element A[i] in the array such that the 
element has an index smaller than i*/
#include<iostream>
#include<stack>
using namespace std;
int nearsmall(int a[] , int n)
{
    stack<int> s;
    int G[n];
    for(int i=0;i<n;i++)
    {
        while(s.top()!=-1 && s.top()>=a[i])
        {
            if(s.top()==-1)
            {
                G[i]=-1;
            }
            else
            {
                G[i]=s.top();
            }
        }
        s.push(a[i]);
    }
    return G[n];
}
int main()
{
   int arr[]={4,5,2,10,8};
   for(int i=0;i<5;i++)
   {
       cout<<nearsmall(arr,5)<<" "; 
   } 
}