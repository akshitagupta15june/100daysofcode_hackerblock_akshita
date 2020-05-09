#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int rotimadebycinmintime(int arr[],int noc,int nop,int mintime)
{
    int cnt=0;
    
    for(int i=0;i<noc;i++)
    {
        int c = 0;
        int time = mintime;
        int perparatha=arr[i];
        while(time>0)
        {
            time=time-perparatha;
            if(time>=0)
            {
                c++;
                perparatha+=arr[i];
            }
        }
        cnt+=c;
    }
    return cnt;
}
int main()
{
    int T,nop,noc;
    cin>>T;
    while(T--)
    {
        cin>>nop;
        cin>>noc;
        int arr[noc];
        for(int i=0;i<noc;i++)
        {
            cin>>arr[i];
        }
        int s=0;
        int e=10000007;
        int ans=INT_MAX;
        while(s<=e)
        {
            int mid=(s+e)/2;
            int roti=rotimadebycinmintime(arr,noc,nop,mid);
            if(roti>=nop)
            {
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
