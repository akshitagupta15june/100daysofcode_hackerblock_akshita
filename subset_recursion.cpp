#include<iostream>
using namespace std;
int out[100]={0};
void subsets_recursion(int *ar,int *out,int key,int sum,int i,int j,int n)
{
	if(key==sum)
	{
		for(int t=j-1;t>=0;t--)
		{
			cout<<out[t]<<" ";
		}
		cout<<endl;
		return;
	}
	if(i<0)
	{
		return;
	}
	if(sum>key)
	{
		return;
	}
	subsets_recursion(ar,out,key,sum,i-1,j,n);
	out[j]=ar[i];
	sum=sum+ar[i];
	subsets_recursion(ar,out,key,sum,i-1,j+1,n);
	
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	 for(int i=0,j=n-1;i<j;i++,j--)
         swap(ar[i],ar[j]); 
	int key;
	cin>>key;
	subsets_recursion(ar,out,key,0,n-1,0,n);
}
