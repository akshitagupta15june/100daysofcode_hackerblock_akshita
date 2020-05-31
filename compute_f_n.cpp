#include <iostream>
#include<cmath>
using namespace std;
void compute(long long int n)
{
    long long int sum=0;
    if(n%2==0)
    {
        sum=(n/2);
        cout<<sum<<endl;
    }
    else if(n%2==1)
    {
        sum=-((n+1)/2);
        cout<<sum<<endl;
    }
    
}
int main(int argc, char **argv)
{
	long long int t;
    cin>>t;
    while(t--)
    {
       
       long long int n;
       cin>>n;
       compute(n);
       
    }
	return 0;
}
