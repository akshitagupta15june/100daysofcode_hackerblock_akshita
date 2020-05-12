#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[100001],i,n,t,key,index;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>t;
	while(t){
		cin>>key;
		auto it=find(a,a+n,key);
		index=it-a;
		if(index==n){
			cout<<"-1 -1";
		}
		else{
		    auto lb=lower_bound(a,a+n,key);
		    cout<<lb-a<<" ";
		    auto up=upper_bound(a,a+n,key);
		    cout<<up-a-1<<endl;
		}
		cout<<"\n";
		t--;
	}
	return 0;
}
