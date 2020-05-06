#include <iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
	int t,a,b;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pair<int,int>arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            arr[i]=make_pair(a,b);

        }
        sort(arr,arr+n,cmp);
        int ans=1,chosen=0;
         for(int i=1;i<n;i++)
             {
                 if(arr[i].first>=arr[chosen].second)
                 {
                     ans++;
                     chosen=i;
                 }
             }
            cout<<ans<<endl; 
    }
	return 0;
}
