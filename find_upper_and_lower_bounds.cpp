#include <iostream>
using namespace std;
int first_occur(long long int *a,long long int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
    
}
int last_occur(long long int *a,long long int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
    
}

int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int key;
        cin>>key;
        cout<<first_occur(arr,n,key)<<" ";
        cout<<last_occur(arr,n,key);
		cout<<endl;
	}
    
	return 0;
}
