#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string ans[100000];
int c = 0;

void permute(string inp,int i)
{
    //Base case
    if(i == inp.size())
    {
        ans[c++] = inp;
        return ;
    }

    //Recursive case
    for(int j = i;j<inp.length() ; j++)
    {
        swap(inp[i],inp[j]);
        permute(inp,i+1);
        swap(inp[i],inp[j]);    //Backtrack
    }
}
int main() 
{
    string input;
    cin>>input;

    permute(input,0);
    sort(ans,ans+c);

    string temp = "";
    for(int i = 0;i<c;i++)
    {
        if(temp != ans[i])
            cout<<ans[i]<<endl;
        temp = ans[i];
    }

    return 0;
}
