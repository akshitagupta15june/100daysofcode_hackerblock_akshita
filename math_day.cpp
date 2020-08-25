#include<bits/stdc++.h>
#define ll long long
using namespace std;




ll calculate_ans(ll c,ll k,ll p){
    if(k==1){
        return c;
    }
    ll ans=calculate_ans(c,k/2,p);
    if(k%2)
    return ((ans%p)*(ans%p)*c)%p;
    return ((ans%p)*(ans%p))%p;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        ll a,n,p;
        cin>>a>>n>>p;
        ll ans=1;
        while(n){
            a=calculate_ans(a,n,p)%p;
            n--;
        }
        cout<<a<<endl;
    }
	return 0;
}
