#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        set<pair<ll, ll>> res;
        cin >> n;
        for(ll i=0; i<=n; ++i) 
            for(ll j=0; j<=n; ++j) 
                if(i*i + j*j == n) res.insert(make_pair(min(i, j), max(i, j)));
        for(auto i: res) {
            cout << "(" << i.first << "," << i.second << ")\n";
        }
    }
}
