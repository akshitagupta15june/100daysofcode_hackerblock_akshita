#include<iostream>
#include<cstring>
 
using namespace std;
 
int main()
{  int t;
cin>>t;
for(int i=0;i<t;i++){
    string s1;
	cin>>s1;;
    string s2;
	cin>>s2;
	int l=s1.length();
    string s3;
	for(int i=0;i<l;i++){
		if(s1[i]==s2[i]){
            s3[i]='0';
        }
        else{s3[i]='1';
        }
	}
for(int i=0;i<l;i++){
    cout<<s3[i];
}
cout<<endl;
    }

return 0;	
}

