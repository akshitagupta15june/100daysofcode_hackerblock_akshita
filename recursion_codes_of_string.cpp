#include <iostream>
using namespace std;
void generate_string(char *in,char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ,";
        return;
    }
    int d=in[i]-'0';
    char ch= d+'A'-1;
    out[j]=ch;
    generate_string(in,out,i+1,j+1);
    if(in[i+1]!='\0')
    {
        int s=in[i+1]-'0';
        int no=d*10+s;
        if(no<=26)
        {
            ch=no+'A'-1;
            out[j]=ch;
            generate_string(in,out,i+2,j+1);
        }
    }
    return;
}
int main(int argc, char **argv)
{
	char a[100];
    cin>>a;
    char out[100];
    cout<<"[";
    generate_string(a,out,0,0);
    cout<<"]";
	return 0;
}
