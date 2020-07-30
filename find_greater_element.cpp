#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++) 	cin>>a[i];
	stack <int> s;
	s.push(a[0]);
	for(int i=1;i<n;i++){
	
	while(!s.empty()&&s.top()<a[i]){
	cout<<a[i]<<" ";
	s.pop();
	}
	s.push(a[i]);
	}
	while(!s.empty())
	{
	cout<<-1<<" ";
	s.pop();
	}
}
