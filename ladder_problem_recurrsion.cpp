#include <iostream>
using namespace std;
int lad(int n,int k)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    int ans=0;
    for(int i=1;i<=k;i++)
    {
       ans+=lad(n-i,k); 
    }
    return ans;
}
int main(int argc, char **argv)
{
	int n,k;
    cin>>n>>k;
    cout<<lad(n,k);
	return 0;
}
