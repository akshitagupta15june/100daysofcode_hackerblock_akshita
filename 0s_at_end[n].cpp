#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int brr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int j=n-1;
	int k=0;
	int i=0;
	for(;i<n;i++)
	{
		if(arr[i]==0)
		{
			brr[j]=arr[i];
			j--;
		}
		else if(arr[i]==1)
		{
			brr[k]=arr[i];
			k++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<brr[i]<<" ";
	}
	return 0;
}
