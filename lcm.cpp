#include <iostream>
using namespace std;
int gcdcalc(int a, int b)
{
    return (b==0)?a:gcdcalc(b,a%b);
}
int main()
{
	int n1,n2,lcm,gcd;
    cin>>n1>>n2;
    gcd=gcdcalc(n1,n2);
    lcm=(n1*n2)/gcd;
    cout<<lcm;
    
	return 0;
}
