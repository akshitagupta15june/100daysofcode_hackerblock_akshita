#include<iostream>
using namespace std;
int main() {
int n,i; 
cin>>n;
long long arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}

long long max=arr[0];
for(i=0;i<n;i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
cout<<max;

return 0;
}
