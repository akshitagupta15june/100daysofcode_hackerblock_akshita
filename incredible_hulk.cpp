#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<__builtin_popcount(n)<<endl;
    }
	return 0;
}
