#include <iostream>
#include<cmath>
using namespace std;
void binary_todecimal(int n)
{
    int s=0;
    int i=0;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        s+=rem*pow(2,i);
        i++;
    }
    cout<<s<<endl;
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        binary_todecimal(t);
    }
	return 0;
}
