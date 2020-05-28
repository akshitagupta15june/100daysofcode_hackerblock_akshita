#include<iostream>
#include<cstring>
using namespace std;

int main() {

    string num;
    cin>>num;
    int len=num.length();
    
    int ans=(1<<len)-2;
    
    for(int i=len-1;i>=0;i--)
    {
        if(num[i]=='7')
        ans=ans+(1<<(len-i-1));
    }
    cout<<ans+1<<endl;
    
    
}
