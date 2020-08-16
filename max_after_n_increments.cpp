#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long int n;
	long long int m;
	cin>>n>>m;
	long long int arr[n]={0};
	while(m--)
	{
		long long int a;
		long long int b;
		long long int k;
		cin>>a>>b>>k;
		for(int i=a;i<=b;i++)
		{
			arr[i]+=k;
		}
	}
	long long int maxi=0;
	for(int i=0;i<n;i++)
	{
		maxi=max(arr[i],maxi);

	}
	cout<<maxi<<endl;
	
	return 0;
}
