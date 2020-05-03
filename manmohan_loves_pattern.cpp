#include <iostream>
using namespace std;
int main()
{
	int t;
    cin>>t;
    if(t==1)
    {
        cout<<"1";
    }
    else
    {
        cout<<"1";
        cout<<endl;
        for(int i=1;i<=t-1;i++)
         {
            cout<<i;
            for(int j=1;j<i;j++)
            {
                cout<<"0";
            }
            cout<<i;
            cout<<endl;
         }
    }
    
	return 0;
}
