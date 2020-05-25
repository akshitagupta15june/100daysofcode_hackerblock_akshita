#include <iostream>
#include<string>
#include<cstring>
using namespace std;
int stringtoint(char *str,int n)
{
    if (n == 1) 
    {
         return *str - '0'; 
    }
       
    return (10 * stringtoint(str, n - 1) + str[n-1] - '0'); 
    
}
int main(int argc, char **argv)
{
    char str[10];
    cin.get(str,10);
	int n = strlen(str);
    cout<<stringtoint(str,n); 
	return 0;
}
