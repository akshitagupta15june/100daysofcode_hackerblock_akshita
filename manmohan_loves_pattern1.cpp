#include <iostream>
using namespace std;
int main()
{
	int n;
    int t=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"1";
            for(int j=1;j<=(i-2);j++)
            {
                cout<<t;
            }
            cout<<"1";
            cout<<endl;
        }
        else{
            for(int j=1;j<=i;j++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
    }
	return 0;
}
