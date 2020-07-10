#include<iostream>
#include<cstring>
using namespace std;
int reversecheck(char arr1[],char arr2[],int f,int s,int n)
{
    if(f>=n)
    {
            return 1;
    }
    if(arr1[f]!=arr2[s])
    {
        return 0;
    }
    if(!reversecheck(arr1,arr2,f+1,s-1,n))
    {
        return 0;
    }
    return 1;

}
int main() {
    char arr1[100],arr2[100];
    cin>>arr1>>arr2;
    int l=strlen(arr1);
    int l2=strlen(arr2);
    if(l==l2)
    {
    int x=reversecheck(arr1,arr2,0,l-1,l);
    if(x) 
        {
            cout<<"true";
        }
    else
    {
        cout<<"false";
    }

    }
    else 
        {
            cout<<"false";
        }
    return 0;
}
