#include<iostream>
using namespace std;
void search(int *a,int m,int i,int n)
{
    if(i==n)
    {
		cout<<"-1";
       return; 
        
    }
    if(a[i]==m){
        cout<<i<<" ";
		return;
    }
    search(a,m,i+1,n);

}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int i=0;
    search(a,m,0,n);
	return 0;
}
