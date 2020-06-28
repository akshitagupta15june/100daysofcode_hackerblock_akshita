#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0;
    int n;

    while(1){
        cin >> n;
        sum += n;
        if(sum<0)
            break;
        cout << n << '\n';
    }

    return 0;
}

