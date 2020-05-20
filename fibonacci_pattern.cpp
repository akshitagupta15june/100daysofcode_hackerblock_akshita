#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a,b,n;
    a=0;
    b=1;
    int c=0;
    cin>>n;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<"0"<<endl;
        cout<<"1 ";
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
            cout<<endl;
        }
    }
	return 0;
}
