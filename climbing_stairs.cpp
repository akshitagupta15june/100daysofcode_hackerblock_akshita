#include<iostream>
using namespace std;
int climb(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n<0)
	{
		return 0;
	}
	int ans=0;
	for(int i=1;i<=2;i++)
	{
		ans+=climb(n-i);
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<climb(n);
	return 0;
}
