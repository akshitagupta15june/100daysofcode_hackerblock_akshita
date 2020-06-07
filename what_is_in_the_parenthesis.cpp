#include<iostream>
#include<cstring>
using namespace std;
void duplicate(char *ch,int i,int j)
{
    if(i==j)
    {
        return;
    }
   if(ch[i]=='(')
   {
       while(ch[i+1]!=')')
       {
           cout<<ch[i+1];
           i++;
       }
   }
   if(i<j)
   {
      duplicate(ch,i+1,j); 
   }
   return;
}
int main()
{
    char s[10000];
    cin.get(s,10000);
    int len=strlen(s);
    duplicate(s,0,len-1);
    
}
