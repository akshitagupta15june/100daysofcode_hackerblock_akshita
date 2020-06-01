#include <iostream>
#include<algorithm>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    int j=-1;
    for(int i=n;i<2*n;i++)
    {
        j++;
        arr[i]=brr[j];
    }
    sort(arr,arr+(2*n));
    int k=0;
    k=(2*n-1)/2;
    int med=arr[k];
    cout<<med;
    
	return 0;
}
