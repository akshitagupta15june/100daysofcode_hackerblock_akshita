#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define mod 1000000007
int findsquaretill(int n)                                   //sum of squares of first N numbers 
{
	int t= (n%mod*((n+1)%mod*((2*n)%mod+1)%mod)%mod)%mod;
	t=((t%mod)*(166666668%mod))%mod;                         // 166666668 is nothing but inverse modulo of 6 with respect to 10^9+7
	return t%mod;
}
int findsumtill(int n)                                  // sum of first N numbers
{
	int t= (n%mod*(n+1)%mod)%mod;
	t=((t%mod)*(500000004%mod))%mod;                        //500000004 is nothing but inverse modulo of 2 with respect to 10^9+7
	return t;
}
int32_t main()
{
	int test;	cin>>test;
	while(test--)
	{
		int a,b,c,l,r;	cin>>a>>b>>c>>l>>r;
		int rsquare=findsquaretill(r)%mod; int lsquare=findsquaretill(l-1)%mod;
		int rsum=findsumtill(r)%mod;	int lsum=findsumtill(l-1)%mod;
		//cout<<rsquare<<" "<<lsquare<<" "<<rsum<<" "<<lsum<<"\n";
		//cout<<(mod+rsquare-lsquare)%mod<<" "<<(mod+rsum-lsum)%mod<<" "<<(r-l+1)%mod<<"\n";
		int ans=((rsquare-lsquare)%mod*(a%mod)%mod)%mod+((rsum-lsum)%mod*(b%mod))%mod+(c%mod*(r-l+1)%mod)%mod;
		while(ans<0)
		{
				ans=(mod+ans)%mod;
		}
		cout<<ans%mod<<"\n";
	}
	return 0;
}
