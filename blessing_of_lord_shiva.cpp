#include<bits/stdc++.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
long long int find(char *str,long long int n)
{
   
    long long int res=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0 && str[i]=='b')
        {
            res++;
        }
        if(i%2==1 && str[i]=='a')
        {
            res++;
        }
    }
    return min(res,n-res);
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[1000005];
        cin>>str;
        int n=strlen(str);
        cout<<find(str,n);
        cout<<endl;
    }
    return 0;
}
