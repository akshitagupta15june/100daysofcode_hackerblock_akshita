#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l<=i;l++)
        {
            cout<<l<<"\t";
        }
        for(int k=((n-i)*2)-1;k>0;k--) {
          cout<<"\t";
  	        } 
        for(int j=i;j>=1;j--) {
        if(j!=n)
      cout<<j<<"\t";
    }
        cout<<endl;
    }
	return 0;
}
