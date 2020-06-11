#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, counter = 0;
    bool isPrime;

    
    cin >> N;
    if (N>=2) {
        cout << "2";
    }
    for (int j = 3; j <= N; ++j) {
        isPrime = true;
        for (int k = 2; k < sqrt(j)+1; ++k) {
            if (j % k == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout <<endl<< j;
            counter++;
        }
    }
    cout << endl;
   
}
