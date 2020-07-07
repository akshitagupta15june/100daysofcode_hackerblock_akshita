#include<bits/stdc++.h> 
#define ll long long 
#define ld long double 
using namespace std; 
ll findMinValue(ll arr[], ll n) 
{ 
   
    sort(arr, arr+n); 
  
    ld val = 0;
    for (int i=0; i<n; i++) 
        val += (ld)(log((ld)(arr[i]))); 
  
    ll left = arr[0], right = arr[n-1]+1; 
  
    ll ans; 
    while (left<=right) 
    { 
        ll mid = (left+right)/2; 
  
        
        ld temp = (ld)n * (ld)(log((ld)(mid))); 
        if (val < temp) 
        { 
            ans = mid; 
            right = mid-1; 
        } 
        else
            left = mid+1; 
    } 
    return ans; 
} 
 
int main(int argc, char **argv)
{
	ll n;
    cin>>n;
    
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << findMinValue(arr, n) << endl; 
	return 0;
}
