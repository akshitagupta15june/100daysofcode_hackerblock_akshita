#include<iostream>
#include<stack>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  long long int hist[n];
  for(int i=0;i<n;i++)
  cin>>hist[i];
  stack<int>s;
  long long int max_area=0,area=0;
  int i;
  for(i=0;i<n;)
  {
    if (s.empty() || hist[s.top()]<=hist[i]){
        s.push(i);
        i++;
    }
    else
    {
    long long int a = s.top();
    s.pop();
    if (s.empty()) {
			area = hist[a] * i;
	} else {
			area = hist[a] * (i - (long long int) s.top() - 1);
	}
	max_area = max(area,max_area);
    
    }
    
  }
  while(!s.empty())
  {
      long long int tp=s.top();
      s.pop();
      area=s.empty()?hist[tp]*i : hist[tp]*(i-s.top()-1);
      max_area=max(area,max_area);
  }
  cout<<max_area;
	return 0;
}
