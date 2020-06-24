#include<bits/stdc++.h>
using namespace std;

vector<string>v;

void permute(long long int *a,long long int x,long long int n){
    
    if(x==n){
        string osf="";
        for(int i=0;i<n;i++){
            osf+=to_string(a[i])+" ";
        }
       
        v.push_back(osf);
        return;
    }
    
    for(int i=x;i<n;i++){
        
        swap(a[i],a[x]);
        permute(a,x+1,n);
        swap(a[i],a[x]);
        
    }
    
}

int main() {
long long int n;
cin>>n;

long long int a[1000000];
int i=0;
for( i=0;i<n;i++){
    cin>>a[i];
}

//a[i]='\0';

sort(&a[0],&a[0]+n);

//cout<<a<<endl;
//string s=a;
//cout<<s<<endl;
//return 0;

permute(a,0,n);
sort(&v[0],&v[0]+v.size());
for(i=0;i<v.size();i++){
    
    while(i<v.size() and v[i]==v[i+1]){
        i++;
    }
    
   cout<<v[i];
    cout<<endl;
}
	
}
