#include <iostream>
#include <algorithm>
using namespace std;
bool mycompare(string a,string b)
{
    char ch1=a[0];
    char ch2=b[0];
    if(ch1>ch2)
    {
        return a<b;
    }
    else
	{
		if(ch1==ch2)
       {
        int len1=a.length();
        int len2=b.length();
        if(len1>len2)
        {
            return a>b;
        }
        else
        {
            return b>a;
        }
       }
	}
}
int main() 
{
    string str[1000];
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    sort(str,str+n,mycompare);
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
	return 0;
}
