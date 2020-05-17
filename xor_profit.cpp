#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int xr = a^b;
    int msbpos=0;
    while(xr){
         msbpos++;
         xr = xr>>1;
    }
    int maxxr=0;
    int x=1;
    while(msbpos--){
         maxxr+=x;
         x = x<<1;
    }

    cout<<maxxr;
     return 0;
}
