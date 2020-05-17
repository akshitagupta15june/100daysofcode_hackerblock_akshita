#include <iostream>
using namespace std;
void count(int a){
    int ans = 0;
    for(;a>0; a= a>>1)
        ans += a&1;
    cout<<ans<<endl;
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        count(t);
    }
	return 0;
}
