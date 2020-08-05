#include <iostream>
#include<queue>
using namespace std;
int main(int argc, char **argv)
{
	queue<int>q;
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
	return 0;
}
