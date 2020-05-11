#include <iostream>
using namespace std;
long long int maximum(long long int ar[1000000],long long int N)
{
  long long int max=ar[0];
  for(int i=0;i<N;i++)
  {
    if(ar[i]>max)
    {
      max=ar[i];
    }
  }
  return max;
}
long long int Valid(long long int L[],long long int N,long long int Mid)
{
    long long int sum=0,point=1;
    for(int i=0;i<N;i++)
    {
        sum=sum+L[i];
   
        if(sum>Mid)
        {   
			point++;
            sum=L[i];
        }
			//if(point == N)
			 // return true;
			//else
			// sum+=L[point];       
	}
   return point;  
}
long long int PP(long long int length[],long long int n,long long int k,long long int length_sum,long long int t)
 {
    long long int s=maximum(length,n);
    long long int e=length_sum;
	long long int ans;
    while(s<=e)
    { 
        long long int mid=(s+e)/2;
        long long int painters=Valid(length,n,mid);
        if(painters<=k)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
  return (ans*t)%10000003;   
}
int main()
{
long long int n,k,length_sum=0,t;
    cin>>n>>k>>t;
	//if((n<1||n>100000)||(k<1||k>100000)||(t<1||t>1000000))
	  // return 0;   
    long long int length[n];
    for(int i=0;i<n;i++)
    {
        cin>>length[i];
        length_sum=length_sum+length[i];
    }
    cout<<PP(length,n,k,length_sum,t);
    return 0;
}
