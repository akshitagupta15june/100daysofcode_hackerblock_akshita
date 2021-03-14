#include<iostream>
#include<algorithm>
using namespace std;

int main () {
	int n;
	cin>>n;
	int A[n];
	int load=0, diff, max_load=0;
	for(int i=0; i<n; i++){
		cin>> A[i];
		load+=A[i];
	}
	if(load%n !=0){
        cout<<-1<<endl;
        return 0;
    }
	load=load/n;
	diff = 0;
	for(int i=0; i<n; i++){
		diff+=(A[i]-load);
		int ans = max(diff, -diff);
		max_load = max(max_load, ans);
	}
	cout<< max_load<<endl;
	return 0;
}
