#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}
