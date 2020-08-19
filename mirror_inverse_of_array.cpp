#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    
    int a1[n], a2[n];
    for (int i=0; i<n; i++)
        cin>>a1[i];
    for (int i=0; i<n; i++)
        cin>>a2[i];
        
    int i=0;
    while (i<n) {
        if(a1[a2[i]]!=i)
        {
            cout<<"false";
            break;
        }
        i++;
    }
     if (i==n)
        cout<<"true";
        
	return 0;
}
