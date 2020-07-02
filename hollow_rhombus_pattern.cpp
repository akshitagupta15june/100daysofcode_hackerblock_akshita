#include <iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
		int nst = n;
		int nsp = n;
		for (int i = 1; i <= n; i++) {
			// work for spaces
			for (int csp = 1; csp <= nsp-i; csp++) {
				cout<<" ";
			}
			// work for stars
			for (int cst = 1; cst <= nst; cst++) {
				cout<<"*";
			}
			if (i > 1 && i < n) {
				for (int csp = 1; csp <= n - 2; csp++) {
					cout<<" ";
				}
				cout<<"*";
			}
			// preparation for next iteration
			if (i >= 1 && i < n - 1) {
				nst = 1;
			} else {
				nst = n;
			}
			
			cout<<"\n";
		}

}
