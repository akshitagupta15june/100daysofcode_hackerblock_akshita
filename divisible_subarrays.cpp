#include <iostream>
#include<cstring>
using namespace std;
#define ll long
ll a[10000005],fre[10000005];
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(fre,0,sizeof(fre));
        fre[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
			sum%=n;
            sum=(sum+n)%n;
            fre[sum]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll m=fre[i];
            ans+=(m)*(m-1)/2;
        }
        cout<<ans<<endl;
        
    }
    
	return 0;
}
