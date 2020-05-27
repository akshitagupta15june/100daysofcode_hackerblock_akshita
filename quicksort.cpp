#include <iostream>
#include<algorithm>
using namespace std;
int partition(long long int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<=e-1;)
    {
        if(a[j]<=pivot)
        {
            i=i+1;
            swap(a[i],a[j]);
        }
        j=j+1;
    }
    swap(a[i+1],a[e]);
    return i+1;
    
}
void quicksort(long long int *arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(arr, s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(int argc, char **argv)
{
	long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
