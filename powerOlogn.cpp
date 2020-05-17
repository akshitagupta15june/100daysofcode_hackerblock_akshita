#include <iostream>
using namespace std;
int power_optimised(int a,int n)
{
    int ans=1;
    while(n>0)
    {
        int last=(n&1);
        if(last)
        {
            ans=ans*a;
        }
        a=a*a;
        n=n>>1;
    }
    return ans;
    return 0;
}
int main(int argc, char **argv)
{
	int a,n;
    cin>>a>>n;
    cout<<power_optimised(a,n);
	return 0;
}
