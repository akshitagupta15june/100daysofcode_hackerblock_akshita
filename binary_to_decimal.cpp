#include<iostream>
using namespace std;
int main() {
int two_power=1,answer=0;
string number;
cin>>number;
int j=number.length()-1;
while(j>=0){
if(number[j]=='1'){
answer=answer+two_power;
}
two_power*=2;
j--;
}
cout<<answer;
return 0;
}
