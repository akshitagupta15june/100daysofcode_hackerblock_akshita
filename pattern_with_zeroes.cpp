#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    if(n==1)
    {
         cout<<"1"<<endl;
    }
    else
    {
    cout<<"1"<<endl;
    for(int i=2;i<=n;i++)
    {
       cout<<i<<"\t";
       for(int j=0;j<i-2;j++)
       {
           int t=0;
           cout<<t<<"\t";
           
       } 
       cout<<i;
       cout<<endl;
    }
    }
    
	return 0;
}
