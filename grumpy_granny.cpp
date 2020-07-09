#include<iostream>
#define MOD 1000000007LL
using namespace std;

int main()
{
    int T;  cin>>T;
    while(T--)
    {
        int N, K, M;    cin>>N>>K>>M;
        int arr[N];     for(int i=0; i<N; i++){ cin>>arr[i]; arr[i]%=M;  }
        long long len[K+1]={0};
        len[0]=1;
        int last=1;
        for(int i=0; i<N; i++)
        {
            int x=arr[i], y=last%M;
            y=last-(y-x+M)%M;
            if(y==last && last<K) last++;
            for(int j=y; j>0; j-=M)
            {
                len[j]+=len[j-1];
                if(len[j]>=MOD) len[j]-=MOD;
            }
        }
        cout<<len[K]<<"\n";
    }
    return 0;
} 

