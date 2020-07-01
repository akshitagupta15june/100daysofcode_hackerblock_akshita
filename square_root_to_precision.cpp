#include<bits/stdc++.h>
using namespace std;
double squareroot(long long int a,long long int p)
{
    int s=0;
    int e=a;
    int mid;
    double ans;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(mid*mid==a)
        {
            ans=mid;
            break;
        }
        if(mid*mid<a)
        {
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    double inc=0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans<=a)
        {
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;
}
int main()
{
long long int a,b;
cin>>a>>b;
cout<<squareroot(a,b)<<endl;
return 0;
}
