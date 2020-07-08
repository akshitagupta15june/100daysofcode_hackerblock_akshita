


#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin>>t;

      while(t--){
          int n;
          cin>>n;

          int arr[n][n];
          int rownum=0;

          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                cin>>arr[i][j];
             }
          }

          int i = 0, j = n-1;
           while(i<n && j>0){
                 if(arr[i][j]==0){
                    j--;
                    rownum=i;
                  }
                 else
                  i++;
            }
            cout<<rownum<<"\n";
     }
     return 0;
}


