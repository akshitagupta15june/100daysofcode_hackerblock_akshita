#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin>>n;
    int t=1;
	for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        
        for(int k=2;k<(2*t)-1;k++)
        {
            cout<<"*"<<" ";
            
        }
        t++;
        cout<<endl;
    }
	return 0;
}
