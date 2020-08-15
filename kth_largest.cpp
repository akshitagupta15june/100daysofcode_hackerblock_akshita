#include<iostream>
#include<algorithm>
using namespace std;
bool compare(long long int a,long long int b)
{
	return a>b;
}
int main() {
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long long int k;
	cin>>k;
	sort(arr,arr+n,compare);
	
	cout<<arr[k-1]<<endl;

	return 0;
}
