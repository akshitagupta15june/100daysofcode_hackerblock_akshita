#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=(2*n-1);i++)
    {
        cout<<"*";
    }
    int num=n,k=1;
    for(int i=1;i<=((n+1)/2);i++)
    {
        cout<<endl;
        for(int i=1;i<=(num-1);i++)
        {
            cout<<"*";
        }
        for(int i=1;i<=k;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=(num-1);i++)
        {
            cout<<"*";
        }
        k=k+2;
        num--;
    }
        cout<<endl;
    for(int i=1;i<=(2*n-1);i++)
    {
        if(i==1)
        cout<<"*";
        else
        cout<<" ";
        if(i==(2*n-2))
        cout<<"*";
    }
    int num1=2,k1=n;
    for(int i=1;i<=n-2;i++)
    {   
       cout<<endl;

        for(int i=1;i<=num1;i++)
        {
            cout<<"*";
        }
        for(int i=1; i<=k1; i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=num1;i++)
        {
            cout<<"*";
        }
        k1=k1-2;
        num1++;
    }   

    
   cout<<endl;
   for(int i=1;i<=(2*n-1);i++)
   {
       cout<<"*";
   }
    return 0;
}

