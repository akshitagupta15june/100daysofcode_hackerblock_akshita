#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

set<vector<int>> ans;
void sum(int s,int i,int j,int n,int in[],int out[]){
    if(s==0){
        vector<int> temp;
        int k;
        for(k=0;k<j;k++)
            temp.push_back(out[k]);
        ans.insert(temp);
        return;
    }
    if(i==n || s<0)
        return;
    out[j]=in[i];
    sum(s-in[i],i+1,j+1,n,in,out);
    sum(s,i+1,j,n,in,out);
}
int main() {
    int i,n,s;
    cin>>n;
    int a[n],out[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    sort(a,a+n);
    sum(s,0,0,n,a,out);
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        vector<int> t=*it;
        for(int i=0;i<t.size();i++)
            cout<<t[i]<<" ";
        cout<<endl;
    }
	return 0;
}
