#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        int e=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>e)
        {
           arr[j+1]=arr[j];
           j=j-1;
        }
        arr[j+1]=e;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
