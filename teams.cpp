#include<iostream>
using namespace std;
long long int maximum(long long int n,long long int m)
{
	long long int x=n-(m-1);
	long long int maxi=(x*(x-1))/2;
	return maxi;
}
long long int minimum(long long int n,long long int m)
{
	long long int y=0;
	long long int p=0;
    long long int x=n/m;
	if(n%m!=0)
	{
		y=x+1;
		p=n%m;

	}
	long long int mini=(y*(y-1)/2)*p+(m-p)*(x*(x-1)/2);
	return mini;
}
int main()
{
	long long int n,m;
	cin>>n>>m;
	cout<<minimum(n,m)<<" ";
	cout<<maximum(n,m);
	return 0;
}
