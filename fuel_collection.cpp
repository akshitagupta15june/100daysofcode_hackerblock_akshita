

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100005;
int n;
vector<int> fuel(N);
vector<vector<int>> graph(N);
vector<int> vis(N),vis2(N);
vector<vector<int>> val(N);
map<pair<int,int>,int>edge;
void dfs(int a,int b){
    if(vis[a])return;
    vis[a]=1;
    if(b<0)b=0;
    val[a].push_back(b);
    b+=fuel[a];
    for(auto x:graph[a])dfs(x,b-edge[{x,a}]);
}
int dfs2(int a){
    if(vis2[a])return 0;
    vis2[a]=1;
    int mx=0;
    for(auto x:graph[a]){
        int k=dfs2(x)-edge[{x,a}];
        if(k>-1)
        val[a].push_back(k);
        mx=max(mx,k);
    }
    return mx+fuel[a];
}
int32_t main(){
    // #ifndef ONLINE_JUDGE
    //  freopen("input.txt",  "r",  stdin);
    //  freopen("output.txt", "w", stdout);
    // #endif
    //containers are declared globally
    cin>>n;
    for(int i=1;i<=n;i++)cin>>fuel[i];
    for(int i=0;i<n-1;i++){
        int a,b,d;cin>>a>>b>>d;
        edge[{a,b}]=d;
        edge[{b,a}]=d;
        graph[a].push_back(b);graph[b].push_back(a);
    }
    dfs(1,0);//dfs to kedane algo on tree
    dfs2(1);//dfs to fill max value paths starting from a particular node
    int ans=0;
    for(int i=1;i<=n;i++){
        sort(val[i].rbegin(),val[i].rend());
        if(val[i].size()==1){
            ans=max(ans,fuel[i]+val[i][0]);
        }
        else if(val[i].size()>1){
            int k=fuel[i];
            if(val[i][0]>0)k+=val[i][0];
            if(val[i][1]>0)k+=val[i][1];//picking best two values and making the current node as the central node
            ans=max(ans,k);
        }
    }
    cout<<ans;

}

