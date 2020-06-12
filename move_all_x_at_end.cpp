#include <iostream>
#include<cstring>
using namespace std;
void printing(char* in,char* out,int i,int j,int len,int leg)
{
    
    if(i>len)
    {
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    if(in[i]=='x')
    {
        out[leg]=in[i];
        printing(in,out,i+1,j,len,leg-1);
    }
    if(i<=len && in[i]!='x')
    {
        out[j]=in[i];
        printing(in,out,i+1,j+1,len,leg);
    }
}
int main(int argc, char **argv)
{
  char num[1000];
  char outt[1000];
  cin>>num;
  int len=strlen(num);
  printing(num,outt,0,0,len-1,len-1);
	return 0;
}
