#include<iostream>
using namespace std;
int main(){
    long long int  a,b;
    cin>>a>>b;
    long long int xr = a^b;
    long long int msbpos=0;
    while(xr){
         msbpos++;
         xr = xr>>1;
    }
    long long int maxxr=0;
    long long int x=1;
    while(msbpos--){
         maxxr+=x;
         x = x<<1;
    }

    cout<<maxxr;
     return 0;
}
