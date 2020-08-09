#include<bits/stdc++.h>
using namespace std;
vector<int> targetzero(int n){
vector<int>v;
int n1=floor(n/2.0);
for(int i=1;i<=n1;i++){
v.push_back((-1*i));
v.push_back(i);


 }
 if(n%2==1){
     v.push_back(0);
 }
 return v;
}
int main(){
int n;
cin>>n;
vector<int>ans;

 ans=targetzero(n);
 sort(ans.begin(), ans.end());
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
 }
 }
