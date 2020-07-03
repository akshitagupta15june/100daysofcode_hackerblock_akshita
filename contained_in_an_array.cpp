#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a[] ,int i,int n,int t)
{
	if(a[i]==t)
	{
		return true;
	}
	if(i>n)
	{
		return false;
	}
	compare(a,i+1,n,t);
	return false;
}
int main()
{
     int n;
     int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	sort(a,a+n);
	int t;
	cin>>t;
    bool success=compare(a,0,n-1,t);
   if(success==true)
   {
	   cout<<"true";
   }
   else
   {
	   cout<<"false";
   }
    return 0;
}
