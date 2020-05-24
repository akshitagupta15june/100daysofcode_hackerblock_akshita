#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    for(int i=n;i>=0;i--)
    {
        for(int k=n;k>i;k--)
        {
            cout<<"\t";
        }
        for(int j=i;j>=0;j--)
        {
            cout<<j<<"\t";
            
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>i;k--)
        {
            cout<<"\t";
        }
        for(int j=i+1;j>=1;j--)
        {
            cout<<j<<"\t";
        }
        for(int j=0;j<=i+1;j++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
	return 0;
}
