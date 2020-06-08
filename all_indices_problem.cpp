#include<iostream>
#include<cstring>
using namespace std;
void indices(int *arr,int i,int j,int t)
{
   if(i>j)
   {
       return;
   }
   if(arr[i]==t)
   {
       cout<<i<<" ";
   }
   if(i<=j)
   {
     indices(arr,i+1,j,t);  
   }
   
}
int main()
{
    int n,t;
    cin>>n;
    int arr[100005];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>t;
    indices(arr,0,n-1,t);
    return 0;
    
}
