#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        if((i%2)!=0)
        {
            cout<<i<<endl;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0)
        {
            cout<<i<<endl;
        }
    }
	return 0;
}
