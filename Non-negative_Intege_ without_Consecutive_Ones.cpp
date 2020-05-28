#include<iostream>
using namespace std;
int countdoublebits(int n)
{
    int ans=0;
    
    while(n>0)
    {
        ans=(n>>1);
       if(((n&1)==1) && ((ans&1)==1) )
    	{
        	return 0;
    	}
    	else
    	{
        	n=n>>1;           ///// dont return 1 immediately as you have to check for all consecutive digits in binary form
    	} 
    }
    return 1;       ////////////// if ans is not returned till now then ans exists right so return 1 here instead of 0
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
		long int n;
        int c=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            c+=countdoublebits(i);
        }
        cout<<c;
		cout<<endl;
    }
	
    return 0;
}
