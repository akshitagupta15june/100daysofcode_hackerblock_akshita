#include <iostream>
#include<cstring>
using namespace std;
void remove_dup(char str[])
{
    int c=1;
    int m=strlen(str);
    int i;
    int j=0;
    if(m==1 || m==0)
    {
        return;
    }
    for(int i=1;i<=m;i++)
    {
        if(str[i]==str[j])
        {
            c++;
        }
        else if(str[i]!=str[j])
        {
            cout<<str[j]<<c;
            j=i;
            c=1;
        }
    }
        
    
}

int main()
{
	char str[1000];
    cin.getline(str,1000);
    remove_dup(str);
	return 0;
}
