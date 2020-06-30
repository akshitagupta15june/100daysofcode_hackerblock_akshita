#include <iostream>
using namespace std;
long long int count_subarray(long long int n){

      return (n * (n + 1))/2; 
  }
int main(int argc, char **argv)
{
	long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int m=0;m<n;m++)
        {
            cin>>arr[m];
        }
        long long int l,r;
        cin>>l>>r;
        long long int res=0;
        long long int inc=0;
        long long int exc=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>r)
            {
                res+=(count_subarray(inc)-count_subarray(exc));
                inc=0;
                exc=0;
            }
            else if(arr[i]<l)
            {
                inc++;
                exc++;
            }
            else
            {
                res-=count_subarray(exc);
                exc=0;
                inc++;
            }
        }
        res+=(count_subarray(inc)-count_subarray(exc));
        cout<<res<<endl;
    }
	return 0;
}
