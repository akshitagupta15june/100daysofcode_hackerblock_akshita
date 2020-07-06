#include<iostream>
using namespace std;
void generate(char *out,int n,int idx,int open,int close)
{
    if(idx==2*n)
    {
       out[idx]='\0';
       cout<<out<<endl;
       return;
    }
	if(close<open)
    {
        out[idx]=')';
        generate(out,n,idx+1,open,close+1);
    }
    if(open<n)
    {
        out[idx]='(';
        generate(out,n,idx+1,open+1,close);
    }
    
   return; 
}
int main()
{
    int n;
    cin>>n;
    char out[11];
    generate(out,n,0,0,0);
    return 0;
}
