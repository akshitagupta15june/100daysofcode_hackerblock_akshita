#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int lv, hv;
        cin>>lv>>hv;
        int s=0;
        int e=n-1;
        for(int i=0;i<e;)
        {
            if(arr[i]<lv)
            {
                int temp=arr[i];
                arr[i]=arr[s];
                arr[s]=temp;
                s++;
                i++;
            }
            else if(arr[i]>hv)
            {
                int temp=arr[i];
                arr[i]=arr[e];
                arr[e]=temp;
                e--;
            }
            else
            {
                i++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
}
