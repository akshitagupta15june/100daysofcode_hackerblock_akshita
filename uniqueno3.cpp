#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int cnt[64]={0};
    int n,no;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        int j=0;
        while(no>0)
        {
            int last=(no&1);
            cnt[j]+=last;
            j++;
            no=no>>1;
        }
    }
    int p=1;
    int ans=0;
    for(int i=0;i<64;i++)
    {
        cnt[i]%=3;
        ans+=(cnt[i]*p);
        p=p<<1;
        
    }
    cout<<ans<<endl;
	return 0;
}
