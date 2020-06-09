#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
	cin>>n;
	long long int a,b;
	cin>>a>>b;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	}
	
	return 0;
}
