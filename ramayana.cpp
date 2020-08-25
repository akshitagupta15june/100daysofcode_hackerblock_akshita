
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    if(n<=m)
    {
        cout<<n<<endl;
        return 0;
    }
    ll minm=0,maxm=2000000000;
    ll ans=-1;
    while(minm<=maxm)
    {
        ll mid=minm+(maxm-minm)/2;
        if(n-mid*(mid+1)/2 <= m)
        {
            ans=mid;
            maxm=mid-1;
            // cout<<ans<<endl;
        }
        else
        {
            minm=mid+1;
        }
    }

    cout<<ans+m<<endl;
    return 0;
}

