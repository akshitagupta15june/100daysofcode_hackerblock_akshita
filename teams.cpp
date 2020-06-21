#include <iostream>
using namespace std;
int maximum(int n,int m)
{
    int x=n-(m-1);
    int maxi=(x*(x-1))/2;
    return maxi;
}
int minimum(int n,int m)
{
    int y=0;
    int p=0;
    int x=n/m;
    if(n%m!=0)
    {
        y=x+1;
         p=n%m;
    }
    int mini=(y*(y-1)/2)*p+(m-p)*(x*(x-1)/2);
    return mini;
}
int main(int argc, char **argv)
{
	int n,m;
    cin>>n>>m;
    cout<<minimum(n,m)<<" ";
    cout<<maximum(n,m);
    
    
    
	return 0;
}
