#include <iostream>
#include<math.h>
#define ll long long
using namespace std;

bool is_Answer(ll n,ll k,ll ans){
    
    if(pow(ans,k)<=n)
    return true;
    return false;
    
}

int main() {
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll n,k;
        cin>>n>>k;
        ll s=1,e=n;
        ll ans=0;
        while(s<=e){
            ll mid=(s+e)/2;
            if(is_Answer(n,k,mid)){
                ans=mid;
                s=mid+1;
            }
            else
            e=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
