#include<iostream>
using namespace std;
bool isMirror(int arr[],int n){
    int flag;
    flag=1;
    for(int i=0;i<n;i++)
    if(i!=arr[arr[i]])
    flag=0;
    if(flag==1)
    return true;
    else return false;
}
int main() {
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(isMirror(arr,n))
    cout<<"true";
    else cout<<"false";
	return 0;
}
