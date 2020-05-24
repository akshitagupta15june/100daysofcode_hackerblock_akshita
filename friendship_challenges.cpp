#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n,k;
    cin>>n>>k;
    int c=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=1;
    for(int i=0;i<n;i++)
    {
        if(j<n)
        {
            if((arr[i]+k)!=arr[j])
        {
            arr[j]=arr[i]+k;
            c++;
        }
        j++;
        }
        
    }
    cout<<c<<endl;
	return 0;
}
