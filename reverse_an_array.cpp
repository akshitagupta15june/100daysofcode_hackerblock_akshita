#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a ,int b)
{
    return a<b;
}
int main()
{
    long long int n;
    long long int a[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
