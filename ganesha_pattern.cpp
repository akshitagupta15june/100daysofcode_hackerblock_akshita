#include <iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
    //first line
    cout<<"*";
    for(int i=i;i<=(n-3)/2;i++)
    {
        cout<<" ";
    }
    for(int i=1;i<=(n+1)/2;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    //second line
    for(int rows=1;rows<=(n-3)/2;rows++)
    {
        cout<<"*";
        for(int i=1;i<=(n-3)/2;i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    
    //third component
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    //fourth
    for(int rows=1;rows<=(n-3)/2;rows++)
    {
        for(int i=1;i<=(n-3)/2+1;i++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int i=1;i<=(n-3)/2;i++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    //fifth
    for(int i=1;i<=(n+1)/2;i++)
    {
        cout<<"*";
    }
    for(int i=1;i<=(n-3)/2;i++)
        {
            cout<<" ";
        }
    cout<<"*"<<endl;;
    
	return 0;
}
