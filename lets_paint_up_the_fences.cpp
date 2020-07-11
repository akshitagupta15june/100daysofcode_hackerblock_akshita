
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli ;
lli arr[5010];
lli dp[5010][5010];
int solve(int l,int r)
 {
   if(l>r) return 0;
   if(l==r)
   {
    if(arr[l]>=1)return 1;
    else return 0;
   }
   else
   {
     dp[l][r]=r-l+1;// IF ALL VERTICAL 
     lli mini=10000000000000;
     for(int i=l;i<=r;i++)
      {
       mini=min(mini,arr[i]);
    }
    for(int i=l;i<=r;i++)
      {
       arr[i]-=mini;// APPLYING HORIZONTAL TO ALL L TO R WITH MIN OF ALL ARR[I]                                               //IN L TO R
    }
    
    lli ret=mini;// THIS HUMCH STOCK IS USED TILL NOW 
    if(ret<dp[l][r])// IF THIS MUCH VALUE IS > HORIZONTAL THAN
                     //  NEED NOT TO CHECK REST SOLN SINCE IT WILL ALWAY>DP[L][R]
    {
     
    int x=l;
    for(int i=l;i<=r+1;i++)
     {
      // SOLVING IN DISCONNECTED COMPONENTS 
      if(arr[i]==0)
      {
       ret+=solve(x,i-1);
       x=i+1;
    }
   }
   dp[l][r]=min(dp[l][r],ret);
  }
   return dp[l][r];
   }
 }
int main()
 {
  int n;
  scanf("%lld",&n);
  memset(dp,100000,sizeof dp);
  for(int i=0;i<n;i++)
   {
    scanf("%lld",&arr[i]);
   }
   arr[n]=0;
      lli ans=solve(0,n-1);
       cout<<ans<<endl;
 }
