#include <bits/stdc++.h>
using namespace std;
#define N 1000005
int F[N];
int G[N];

void build_F(){
    for(int i=1; i<N; i++) {
        F[i] = F[i/10] + (i&1) * (i%10);
    }

}

void build_G(){
    for(int i=1; i<N; i++) {
        for(int j=i; j<N; j+=i) {
            G[j] += F[i];
        }
    }
}

int main () {    
    build_F();
    build_G();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << G[n] <<"\n";
    }
    return 0;    
}
