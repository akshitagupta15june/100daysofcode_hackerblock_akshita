#include <iostream>
using namespace std;

     int binarySearch(int a[],int n,int key){
           int s=0,mid,e = n-1;
                
            while(s<=e){
                mid = (s+e)/2;
                 if(a[mid] == key){
                     return mid;
                     break;
                 }
                  else if(a[mid]>key){
                      e = mid-1;
                  }
                  else{
                      s = mid+1;
                  }
            }
            return -1;
     }

int main() {
    int n;
    cin>>n;
     int a[1024];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
       int key;
       cin>>key;
        cout<<binarySearch(a,n,key);
             
    return 0;
}
