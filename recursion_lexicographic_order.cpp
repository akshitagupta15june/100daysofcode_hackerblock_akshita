#include <iostream>
using namespace std;
void lexicographic(int n,int a)
{
    if(a>n)
    {
        return;
    }
    cout<<a<<" ";
    int i=0;
    if(a==0)
    {
        i=1;
    }
    for(;i<=9;i++)
    {
        lexicographic(n,a*10+i);
    }
}
int main(int argc, char **argv)
{
    int n;
    cin>>n;
	lexicographic(n,0);
    
	return 0;
}
