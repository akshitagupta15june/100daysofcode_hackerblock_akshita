#include<iostream>
using namespace std;
#define ll long long int
int main() {
	ll n;
	ll rev=0;
	int d;
	cin>>n;
	while(n>0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}
	cout<<rev;
	return 0;
}
