#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	

        int narr[n];

        for(int i = 0;i < n;i++){

            narr[arr[i]] = i;
        }
    for(int i=0;i<n;i++)
	{
		cout<<narr[i]<<" ";
	}
	
	return 0;
}
