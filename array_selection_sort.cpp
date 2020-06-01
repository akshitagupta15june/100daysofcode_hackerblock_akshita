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
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
