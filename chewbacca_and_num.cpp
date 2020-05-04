#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll countDigit(ll n){
    ll count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int main() {
    ll n,val;
      cin >> n ;
    
    ll count = countDigit(n);
    int A[100000];
    for(ll i=0;i<count;i++) {
            val=n%10 ;
            A[count-i-1]=val ;
            n=n/10 ;
        }
    for(ll i=0;i<count;i++) {
      if(i==0 && (A[i]==9)) {
          cout<<A[i];
      }
      else {
          if(A[i]>=5) {
              cout<<9 - A[i] ;
          }
          else {
              cout << A[i] ;

          }
      }
    }
    }
