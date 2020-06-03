#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
        cin>>a[i];
    int maxi = 0,newVal;
    int k;
    for(int i=0;i<n;i++){
         k = 0; 
        for(int j=i;j<n;j++){ 
            
            k = k^a[j]; 
           
            maxi = max(maxi,k); 
           
        }
    }
    cout<<maxi;
}
