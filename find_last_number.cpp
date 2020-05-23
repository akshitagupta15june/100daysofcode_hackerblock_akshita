#include <iostream>
using namespace std;
int last_occur(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int i=last_occur(a+1,n-1,key);
    if(i==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }
    }
   return i+1;
}

int main(int argc, char **argv)
{
	int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    cin>>key;
    cout<<last_occur(arr,n,key)<<endl;
   // cout<<linearsearch(arr,0,n,key);
	return 0;
}
