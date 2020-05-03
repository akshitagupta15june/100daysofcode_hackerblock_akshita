#include <iostream>
using namespace std;
#define ll long long
long long a[1000000];
void primeSieve(ll *p,ll n){

    p[0] = p[1] = 0;
    p[2] = 1;
    for(ll i=3;i<=n;i+=2){
        p[i] = 1;
    }
    for(ll i=3;i<=n;i+=2){
        
        if(p[i]){
            for(ll j=i*i;j<=n;j+=2*i){
                p[j] = 0;
            }
        }

    }
    int k=0;
    for(int i=2;i<1000000;++i){
        if(p[i]){
            a[k]=i;
            k++;
        }
    }
    return;
}




int main() {
    ll N = 1000001;
    ll p[N] = {0};
    primeSieve(p,N-1);
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n-1]<<endl;
       
    }

}
