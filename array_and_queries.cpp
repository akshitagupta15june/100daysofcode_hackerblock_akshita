#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long int q;
	cin>>q;
	while(q--)
	{
		long long int n;
		cin>>n;
		cout<<arr[n-1]<<endl;

	}
	return 0;
}
