#include <iostream>
#include<algorithm>
using namespace std;
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void dnf_sort(long long int *a, long long int arr_size) 
{ 
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 

    while (mid <= hi) 
    { 
       if(a[mid]==1)
	   {
		   swap(a[mid],a[hi]);
		   hi--;
	   }
	   if(a[mid]==0)
	   {
		   mid++;
		   lo++;
	   }
    } 
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
    dnf_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
