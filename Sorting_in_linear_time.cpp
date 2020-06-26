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
        switch (a[mid]) 
        { 
        case 0: 
            swap(a[lo++], a[mid++]); 
            break; 
        case 1: 
            mid++; 
            break; 
        case 2: 
            swap(a[mid], a[hi--]); 
            break; 
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
        cout<<arr[i]<<endl;
    }
	return 0;
}
