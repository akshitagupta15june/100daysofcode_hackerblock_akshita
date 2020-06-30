#include <bits/stdc++.h>
#define nn 1000100
using namespace std;
int dp[nn],f[nn];

int main()

{
    int t;

    f[1]=f[0]=0;

    for(int i=2;i<64;i++)

    {

        f[i]=1;

        for(int j=2;j<i;j++)

        {

            if((i%j)==0)

              f[i]=0;

        }

    }

    for(int i=1;i<nn;i++)

    {

        dp[i]=dp[i-1]+f[__builtin_popcount(i)]; 

       

    }

    cin>>t;

    while(t--)

    {

        int n,m;

        cin>>n>>m;

        int ans=dp[m];

        if(n)

            ans-=dp[n-1];

        cout<<ans<<endl;

    }

    return 0;

}
