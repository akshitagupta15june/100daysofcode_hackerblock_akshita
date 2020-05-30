#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int findgcd(int ar[10000],int N)
{
    int result=ar[0];
    for(int i=0;i<N;i++)
    {
        result=gcd(result,ar[i]);
    }
    return result;
}
int main() 
{
	int N;
	cin>>N;
	int ar[10000];
	for(int i=0;i<N;i++)
	{
	    cin>>ar[i];
	}
	int y=findgcd(ar,N);
	cout<<y;
	return 0;
}
