#include <iostream>
using namespace std;
int cpair(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    
    
    return cpair(n-1)+(n-1)*cpair(n-2);
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    cout<<cpair(n);
	return 0;
}
