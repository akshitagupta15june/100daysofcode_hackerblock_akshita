#include <iostream>
using namespace std;
void odd_even(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
        return;
    }
    if(n%2!=0)
    {
        cout<<n<<endl;
    }
    odd_even(n-1);
    if(n%2==0)
    {
        cout<<n<<endl;
    }
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    odd_even(n);
	return 0;
}
