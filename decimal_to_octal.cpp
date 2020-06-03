#include <iostream>
using namespace std;
void dec_to_octal(int n)
{
    int oct[100];
    int i=0;
    while(n!=0)
    {
        oct[i]=n%8;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<oct[j];
    }
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    dec_to_octal(n);
	return 0;
}
