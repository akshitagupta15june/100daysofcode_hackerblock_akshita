#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void calculate(long long int *arr,long long int t,long long int n)
{
   long long int lower = lower_bound(arr, arr+n, t) - arr; 
    cout<<lower+1;
    return;
}
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int s=0;
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        sum+=s;
        arr[i]=sum;
    }
    long long int q;
    cin>>q;
    while(q--)
    {
        long long int t;
        cin>>t;
        calculate(arr,t,n);
        cout<<endl;
    }
    return 0;
}
