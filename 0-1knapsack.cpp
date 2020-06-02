#include<bits/stdc++.h>
using namespace std;

int knapsack(int arr[10000],int n,int s,int values[10000])
{
    int dp[10000];
    for(int i=0;i<n;i++)
    {
        for(int j=s;j>=arr[i];j--)
        dp[j]=max(dp[j],dp[j-arr[i]]+values[i]);
    }
    return dp[s];
}
int main()
{
    int n;
    cin>>n;
    int arr[n],values[n];
    int s;
    cin>>s;
      
 for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
   
 for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    cout<<knapsack(arr,n,s,values)<<endl;
}
