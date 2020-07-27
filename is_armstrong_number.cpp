#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int digits = 0;
    int num=n;
    while(num>0)
    {
        num =num/10;
        ++digits;
    }
    int sum = 0,r;
    num=n;
    while(num>0)
    {
        r = num%10;
        num = num/10;
        sum = sum + pow(r,digits);
    }
    if(sum == n)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;    

    return 0;
}
