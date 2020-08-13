#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0,b=1,c=1;
    while(a<=n)
    { cout<<a<<endl;
        a=b;
        b=c;
        c=a+b;
    }
        
    return 0;
}
