#include <iostream>
using namespace std;
char ch[20];
int k=0;
void generate(char *inp,char *out,int i,int j)
{
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    out[j]=inp[i];
	generate(inp,out,i+1,j+1);
    generate(inp,out,i+1,j);
   
}
int main(int argc, char **argv)
{
	char input[20];
    char output[20];
    cin.get(input,20);
    generate(input,output,0,0);
	return 0;
}
