#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--){

        int n, m;
        cin >> n >> m;

        int arrD[n], arrG[m], maxD = -1, maxG = -1;

        for (int i = 0; i < n; i++){
            cin >> arrD[i];
            if (maxD < arrD[i]){
                maxD = arrD[i];
            }
        }

        for (int i = 0; i < m; i++){
            cin >> arrG[i];
            if (maxG < arrG[i]){
                maxG = arrG[i];
            }
        }

        if (maxD <= maxG){
            cout << maxD << " Deepak";
        }else{
            cout << maxG << " Gautam";
        }

    }

    return 0;
}
