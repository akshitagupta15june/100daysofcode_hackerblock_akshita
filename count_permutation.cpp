#include<iostream>
#include<set>
#include<string>
using namespace std;
void permute(char in[],int i,set<string> &s)
{
    if(in[i]=='\0')
    {
        string t(in);
        s.insert(t);
        return;
    }
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);
        permute(in,i+1,s);
        swap(in[i],in[j]);
    }
}
int main(int argc, char **argv)
{
	char in[100];
    cin>>in;
    set<string> s;
    permute(in,0,s);
    for(auto str:s)
    {
       cout<<str<<endl; 
    }
	return 0;
}
