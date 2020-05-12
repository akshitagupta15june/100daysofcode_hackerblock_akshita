#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,int>p1,pair<string,int>p2)
{
    if(p1.second==p2.second)
    {
        return p1.first<p2.first;
    }
    return p1.second>p2.second;
}
int main()
{
	int x,n;
    pair<string,int> emp[100005];
    cin>>x;
    cin>>n;
    string str;
    int salary;
    
    for(int i=0;i<n;i++)
    {
        cin>>str>>salary;
        emp[i].first=str;
        emp[i].second=salary;
    }
    sort(emp,emp+n,compare);
    for(int i=0;i<n;i++)
    {
        if(emp[i].second>=x)
        {
            cout<<emp[i].first<<" "<<emp[i].second<<endl;
        }
    }
	return 0;
}
