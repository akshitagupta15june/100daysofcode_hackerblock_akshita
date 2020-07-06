#include <bits/stdc++.h>
#include<iostream>
#define nn 5100
#define ll long long int
#define mod 1000000007ll
#define set0(a) memset(a,0,sizeof a)
using namespace std;
int dp0[nn],dp1[nn]; 
int main()

{

    int n,a,b,k;

    cin>>n>>a>>b>>k;

    dp0[a]=1; // intializing dp[a][0]=1

    for(int i=1;i<=k;i++) // denoting the number of the step.

    {

        set0(dp1); // initializing update array.

        for(int j=1;j<=n;j++) //traversing over all the floors.

        {

            if(j==b)

                continue;

            if(j<b)

            {

                int dis=b-j-1;

                dp1[max(j-dis,1)]=(dp1[max(j-dis,1)]+dp0[j])%mod; //adding update.

                dp1[b]=(dp1[b]-dp0[j]+mod)%mod; //removing update.

                continue;

            }

            int dis=j-b-1;

            dp1[b+1]=(dp1[b+1]+dp0[j])%mod; //adding update.

            dp1[min(n+1,j+dis+1)]=(dp1[min(n+1,j+dis+1)]-dp0[j]+mod)%mod; //removing update.

        }

        for(int i=1;i<=n;i++) //updating the final array after traversing through all the floors

        {

            dp1[i]=(dp1[i]+dp1[i-1])%mod;

            dp0[i]=(dp1[i]-dp0[i]+mod)%mod;

        }

    }

    ll ans=0;//final answer

    for(int i=1;i<=n;i++)

        ans=(ans+dp0[i])%mod;

    cout<<ans<<endl;

    return 0;

}
