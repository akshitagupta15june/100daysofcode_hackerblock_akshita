#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int *array;
    array = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=n-1;i>=0;i--){           // Corrected indexing and i updation
        cout<<array[i]<<endl;         // endl added
    }
    
	return 0;
}
