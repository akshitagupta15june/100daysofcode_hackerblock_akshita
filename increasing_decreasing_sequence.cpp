#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int e,p,inc=0;
    cin>>p;
    n--;
    while(n>0){
        cin>>e;
        if(e==p){
            cout<<"false";
            return 0;
        }
        if(e<p && inc==0){
            n--;
            p=e;
            continue;
        }
        else if(e<p && inc==1){
            cout<<"false";
            return 0;
        }
        else if(e>p){
            inc=1;
        }
        p=e;
        n--;
    }
    cout<<"true";
	return 0;
}
