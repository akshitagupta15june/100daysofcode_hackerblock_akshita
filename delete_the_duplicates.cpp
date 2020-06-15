#include <iostream>
using namespace std;
void delete_dup(long long int *a,long long int n)
{
	int k,i,j;
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main(int argc, char **argv)
{
	int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        delete_dup(arr,n);
        cout<<endl;
	
     }
     return 0;
}
