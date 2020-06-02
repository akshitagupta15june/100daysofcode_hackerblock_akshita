#include <bits/stdc++.h> 
using namespace std; 

int fact(int n) { 
	if(n<=1) return 1; 
	return n*fact(n-1); 
} 
int ncr(int n,int r) { 
	return fact(n)/(fact(r)*fact(n-r)); 
} 

void pascal(int n,int s) { 
	if(n == 0) return;
	pascal(n-1,s+1);
	for(int i=0;i<s;i++){
		cout<<" ";
	}
	for(int i = 0;i<n;i++) 
		cout <<ncr(n-1,i)<<" "; 
	cout << endl; 
} 
int main() { 
	int n; cin >> n; 
	pascal(n,0); 
	return 0; 
} 
