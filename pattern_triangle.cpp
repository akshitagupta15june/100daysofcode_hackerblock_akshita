#include <iostream>
using namespace std;
int main() {
int n;
//int num=1;
cin>>n;
for(int i=1;i<=n;i++)
{
for(int space=i;space<=n-1;space++)
{
cout<<"\t";
}
int j;
for(j=i;j<=2*i-1;j++){
cout<<j<<"\t";
}
j--;
for(;j>i;j--){
cout<<j-1<<"\t";
}
cout<<endl;

}
return 0;
}
