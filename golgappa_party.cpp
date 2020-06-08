#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int gsum=0;
	long long int tsum=0;
	tsum=(n*(n+1))/2;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		gsum+=arr[i];
	}
    cout<<tsum-gsum<<endl;
	return 0;
}
