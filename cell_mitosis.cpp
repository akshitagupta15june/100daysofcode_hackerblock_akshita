#include <iostream>
#include<algorithm>
using namespace std;
long long cellmomo(long long int n,long long int x,long long int y,long long int z)
{
    long long *dp=new long long[n+1];
    dp[0]=0;
    dp[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            dp[i]=min(dp[i/2]+x,dp[i-1]+y);
        }
        else
        {
            dp[i]=min(dp[i-1]+y,dp[(i+1)/2]+x+z);
        }
    }
    return dp[n];
}
int main(int argc, char **argv)
{
	long long int n,x,y,z;
    cin>>n>>x>>y>>z;
    cout<<cellmomo(n,x,y,z)<<endl;
	return 0;
}
