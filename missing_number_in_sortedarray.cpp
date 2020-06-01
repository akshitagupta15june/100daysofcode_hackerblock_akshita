#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n+1;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1;
            break;
        }
    }
	return 0;
}
