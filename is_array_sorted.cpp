#include <iostream>
using namespace std;
bool is_sorted(int *a,int n)
{
    if(n==1)
    {
        return true;
    }
    if(a[0]<a[1] and is_sorted(a+1,n-1))
    {
        return true;
    }
    return false;
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(is_sorted(arr,n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}
