#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    ll a[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
    ll size = 12;
    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for(ll i=0;i<n;++i) {
            ll diff = INT_MAX;
            ll index = 0;
            for(ll j=0;j<size;++j) {
                if(abs(a[j] - int(s[i])) < diff) {
                    diff = abs(a[j] - int(s[i]));
                    index = j;
                }
            }
            s[i] = char(a[index]);
        }
        cout << s <<"\n";
    }
}

