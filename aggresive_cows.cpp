#include <iostream>
using namespace std;
bool canplacecow(int stalls[],int n,int c,int min_sep)
{
    int cnt=1;
    int last=stalls[0];
    for(int i=1;i<n;i++)
    {
        if((stalls[i]-last)>=min_sep)
        {
            last=stalls[i];
            cnt++;
            if(cnt==c)
            {
                return true;
            }
        }
    }
    return false;
}
int main(int argc, char **argv)
{
	int stalls[]={1,2,4,8,9};
    int n=5;
    int cows=3;
    int s=0;
    int e=stalls[n-1]-stalls[0];
    int ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        bool cowrakh=canplacecow(stalls,n,cows,mid);
        if(cowrakh)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans;
	return 0;
}
