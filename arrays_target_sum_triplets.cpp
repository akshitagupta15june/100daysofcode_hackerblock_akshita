#include<iostream>
#include<algorithm>
using namespace std;
int main() {
int size;
cin>>size;
int arr[size];
for (int i =0; i<size;i++){
	cin>>arr[i] ;
}
int data ;
cin>>data ;

sort (arr,arr+size ) ;
int sum=0;

for (int i=0;i<size;i++){
int left=i+1,right= size-1 ;
while(left<right){
sum=arr[i]+arr[left]+arr[right];
if (sum==data){
	cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl ;
left++;
right--;
}
if (sum>data){
	right--;
}
if (sum<data){
	left++;
}
}
}
return 0;
}
