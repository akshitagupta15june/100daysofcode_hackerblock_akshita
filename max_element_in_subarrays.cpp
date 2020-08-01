#include <iostream>
#include<deque>
using namespace std;
int main(int argc, char **argv)
{
	int n;
    int a[100000];
    int k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int i;
    deque<int> q(k);
    //first k elements
    for(i=0;i<k;i++)
    {
        while(!q.empty() && a[i]>a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    
    //remaining element
    for(;i<n;i++)
    {
        cout<<a[q.front()]<<" ";
        
        while((!q.empty() && (q.front()<=i-k))){
            q.pop_front();
        }
        
        while(!q.empty() && a[i]>=a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        
    }
    cout<<a[q.front()]<<endl;
	return 0;
}
