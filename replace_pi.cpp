#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

string func(string s,int i=0)
{
    string temp="";
    if(i>=s.size()-1)
    {   
        if(i>s.size()-1){
            temp+="";
            return temp;
        }
        temp+=s[i];
        return temp;
    }
    if(s[i]=='p' and s[i+1]=='i')
    {
        temp+="3.14";
        temp+=func(s,i+2);
    }
    else
    { 
        temp+=s[i];
        temp+=func(s,i+1);
    }
    return temp;
}

int main() {
    string s; int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {cin>>s;
	cout<<func(s)<<endl;}
    return 0;
}
