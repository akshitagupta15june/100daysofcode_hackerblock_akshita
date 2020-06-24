#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long int n,t;
	cin>>n;
	cin>>t;
	long long int c=0;
	while(n>0)
	{
		int d=n%10;
		if(d==t)
		{
			c++;
		}
		n=n/10;
	}
    cout<<c;
	return 0;
}
