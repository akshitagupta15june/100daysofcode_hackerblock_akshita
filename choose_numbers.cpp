#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int j=1;
	for(int i=0;i<n-1;i++)
	{
		if(j<=n)
		{
			if(arr[i]+arr[j]>=arr[j+1])
		{
			cout<<"YES"<<endl;
			break;
		}
		else
		{
			j++;

		}
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}
