#include <iostream>
#include<string>
using namespace std;
int count=0;
char keypad[][10]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printKeypadstring(char *inp,char *out,int i,int j)
{
    if(inp[i]=='\0')
    {
        count++;
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    int digit=inp[i]-'0';
    for(int k=0;keypad[digit][k];k++)
    {
        out[j]=keypad[digit][k];
        printKeypadstring(inp,out,i+1,j+1);
    }

}
int main() 
{
    char inp[100],out[100];
    cin>>inp;
    printKeypadstring(inp,out,0,0);
    cout<<endl<<count;
}
