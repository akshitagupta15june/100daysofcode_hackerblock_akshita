#include<iostream>
#include<algorithm>
using namespace std;
void cumulative(long long int *arr,long long int n)
{
	long long int mx=0;
	long long int csum=0;
	for(int i=0;i<n;i++)
	{
		csum+=arr[i];
		if(csum<0)
		{
			csum=0;
		}
		mx=max(mx,csum);
	}
	cout<<mx<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cumulative(arr,n);
	}
    return 0;

}
