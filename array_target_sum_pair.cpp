#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,tar;
    int a[1000];
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
    cin>>tar;
    sort(a,a+n);
    int i=0;
    int j=n-1;
        while(i<j)
    {
        int csum=a[i]+a[j];
        if(csum>tar)
        {
            j--;
        }
        else if(csum<tar)
        {
            i++;
        }
        else if(csum==tar)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
    
    return 0;
    
}
