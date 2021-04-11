#include <iostream>
using namespace std;
int maxsum(long long int *arr,long long int n)
{
    long long int dp[100]={0};
    dp[0]=arr[0]>0?arr[0]:0;
    long long int max_so=dp[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1]+arr[i];
        if(dp[i]<0)
        {
            dp[i]=0;
        }
        max_so=max(dp[i],max_so);
    }
    return max_so;
}
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int pok=0;
    pok=maxsum(arr,n);
    cout<<pok;

    return 0;
}
