#include <iostream>
#define ll long long 
using namespace std;
bool ispossible(ll mid,ll x,ll m,ll n,ll y)
{
    if((mid*x)<=m+((n-mid)*y))
    {
        return true;
    }
    else{
        return false;
    }
}
int main(int argc, char **argv)
{
	ll n,m,x,y;
    cin>>n>>m>>x>>y;
    ll s=0;
    ll e=n;
    ll ans=-1;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(ispossible(mid,x,m,n,y))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    cout<<ans<<endl;
	return 0;
}
